#include "psomQt_HAL.h"


#ifdef Q_OS_LINUX
    bool linuxOS = true;
#else
    bool linuxOS = false;
#endif


PSOM_HAL::PSOM_HAL (uint8_t _subID) {
    readRegisterState = false;
    subID = _subID;
    ptr_SerialPortHandler = NULL;
}
PSOM_HAL::PSOM_HAL (uint8_t _subID, QSerialPort *_ptr_SerialPortHandler)
{
    readRegisterState = false;
    subID = _subID;
    ptr_SerialPortHandler = _ptr_SerialPortHandler;
}

//! BASIC COMMUNICTAION
void        PSOM_HAL::writeRegister         (uint16_t _regAddr, uint32_t _data, bool useChecksum) {
    uint8_t nReg = 1;   // write to 1 register

    if (ptr_SerialPortHandler != NULL) {
        // message length (bytes)
        QByteArray psomMessage;                 // message buffer
        psomMessage.resize(nReg * BYTE_COUNT + 3);                 // set packet size
        packCommonPacketInfo (psomMessage, 0x02, _regAddr, PSOM_WRITE_CMD);    // prepare packet
        // palyoad (2)                                                      //
        PSOMMemoryModifier.uint32Data = _data;                              // map data to memory union
        psomMessage[POS_DATA_START + 0] = PSOMMemoryModifier.charData[3];   // payload data 1 change to
        psomMessage[POS_DATA_START + 1] = PSOMMemoryModifier.charData[2];   // payload data 2 change to
        psomMessage[POS_DATA_START + 2] = PSOMMemoryModifier.charData[1];   // payload data 3 change to
        psomMessage[POS_DATA_START + 3] = PSOMMemoryModifier.charData[0];   // payload data BYTE_COUNT change to

        // checksum
        uint16_t checkSumPos = POS_DATA_START + (BYTE_COUNT * nReg);
        if(useChecksum) {
            uint32_t payloadLength = psomMessage[POS_DATA_COUNT] * BYTE_COUNT + POS_SUB_ID;
            psomMessage[checkSumPos] = calculateChecksum(psomMessage, payloadLength);

        }
        else {
            psomMessage[checkSumPos] = 0x00;
        }

        fillDebugPacketInfo(psomMessage, nReg);

        qDebug() << "send to reg " << _regAddr << " " << psomMessage.toHex();
        ptr_SerialPortHandler->write(psomMessage);
    }
}
void        PSOM_HAL::readRegister          (uint16_t _regAddrStart, uint16_t _regCount, bool useChecksum) {
    uint8_t nReg = 1;   // write to 1 register

    if (ptr_SerialPortHandler != NULL) {
        // message length (bytes)
        QByteArray psomMessage;                             // message buffer
        psomMessage.resize(nReg * BYTE_COUNT + 3);                   // set packet size
        packCommonPacketInfo (psomMessage, 0x02, _regAddrStart, PSOM_READ_CMD);    // prepare packet
        // palyoad (2)                                                      //
        PSOMMemoryModifier.uint32Data = _regCount;                          // map register count to memory union
        regCountToRead = _regCount;                                         // save read count
        psomMessage[POS_DATA_START + 0] = PSOMMemoryModifier.charData[3];   // payload data 1 change to
        psomMessage[POS_DATA_START + 1] = PSOMMemoryModifier.charData[2];   // payload data 2 change to
        psomMessage[POS_DATA_START + 2] = PSOMMemoryModifier.charData[1];   // payload data 3 change to
        psomMessage[POS_DATA_START + 3] = PSOMMemoryModifier.charData[0];   // payload data BYTE_COUNT change to

        // checksum
        uint16_t checkSumPos = POS_DATA_START + (BYTE_COUNT * nReg);
        if(useChecksum) {
            uint32_t payloadLength = psomMessage[POS_DATA_COUNT] * BYTE_COUNT + POS_SUB_ID;
            psomMessage[checkSumPos] = calculateChecksum(psomMessage, payloadLength);

        }
        else {
            psomMessage[checkSumPos] = 0x00;
        }

        readRegisterState = true;

        fillDebugPacketInfo(psomMessage, nReg);

       // qDebug() << "send read request " << " " << psomMessage.toHex();
        ptr_SerialPortHandler->write(psomMessage);
    }
}

/**
 * \brief  set serial connection hander
 * \param   _ptr_SerialPortHandler  pointer to an initialized QSerialPort object, used for communication
 * \retval  nothing
 */
void        PSOM_HAL::setSerialConnectionHandler (QSerialPort *_ptr_SerialPortHandler)
{
    if (_ptr_SerialPortHandler != NULL) {
        ptr_SerialPortHandler = _ptr_SerialPortHandler;
        connect (ptr_SerialPortHandler, SIGNAL(readyRead()), this, SLOT(recvNewSerialData()));
    }
    else
        qDebug() << "serial pointer is NULL";
}
void        PSOM_HAL::copyPSOMBuffer()
{
    //qDebug() << "Copy PSOM data buffer";
    readRegister (PSOM_REG_START, PSOM_REGISTER_COUNT, true);   // read all registers
}

//! INTERNAL HELPER FUNCTIONS
PSOM_State  PSOM_HAL::unpackStateFromPacket (QByteArray dataPtr)
{
    // check size !
    PSOMMemoryModifier.uint32Data = 0;                  // map data to memory union
    PSOMMemoryModifier.charData[0] =  dataPtr[POS_DATA_START + 3];
    PSOMMemoryModifier.charData[1] =  dataPtr[POS_DATA_START + 2];
    PSOMMemoryModifier.charData[2] =  dataPtr[POS_DATA_START + 1];
    PSOMMemoryModifier.charData[3] =  dataPtr[POS_DATA_START + 0];

    return (PSOM_State) PSOMMemoryModifier.uint32Data;
}
uint8_t    PSOM_HAL::calculateChecksum     (QByteArray dataPtr, uint32_t payloadLength) {
    uint32_t sumOfBytes = 0;
    for (uint16_t i = POS_SUB_ID; i < payloadLength; i++) {
        sumOfBytes += dataPtr[i];
    }
    uint8_t checksum = sumOfBytes % 256;
    return checksum;
}
void        PSOM_HAL::packCommonPacketInfo  (QByteArray &psomMessage, uint8_t _dataCount, int16_t _regAddr, PSOM_COMMANDS _command) {
    // check size !!!
    psomMessage[POS_SYNC_HEADER] = PSOM_SYNC_HEADER;        // sync header
    psomMessage[POS_DATA_COUNT] = _dataCount;               // amount of 32bit values in payload
    // payload (1)                                          //
    psomMessage[POS_SUB_ID] = subID;                        // sub-ID of target
    psomMessage[POS_COMMAND] = _command;                    // command
    psomMessage[POS_REG_ADDR_MSB] = (_regAddr >> 8) & 0xFF; // address msb
    psomMessage[POS_REG_ADDR_LSB] = _regAddr & 0xFF;        // address lsb
}
void        PSOM_HAL::fillDebugPacketInfo   (QByteArray data, uint8_t regCount)
{
    if (data.length() == 11) {
        debugPacketStruct.header    = data[POS_SYNC_HEADER];
        debugPacketStruct.dataCount = data[POS_DATA_COUNT];
        debugPacketStruct.subID     = data[POS_SUB_ID];
        debugPacketStruct.command   = data[POS_COMMAND];
        debugPacketStruct.address   = (data[POS_REG_ADDR_MSB] << 8) | data[POS_REG_ADDR_LSB];

        PSOMMemoryModifier.charData[3] = data[POS_DATA_START + 0];
        PSOMMemoryModifier.charData[2] = data[POS_DATA_START + 1];
        PSOMMemoryModifier.charData[1] = data[POS_DATA_START + 2];
        PSOMMemoryModifier.charData[0] = data[POS_DATA_START + 3];

        debugPacketStruct.data = PSOMMemoryModifier.uint32Data;

        uint16_t checkSumPos = POS_DATA_START + (BYTE_COUNT * regCount);
        debugPacketStruct.checksum  = data[checkSumPos];
    }
}
void        PSOM_HAL::analyseIncomingReadData(QByteArray data)
{
    // read regsiters
    if (data.length() >= (regCountToRead * BYTE_COUNT + 3)) {
        if ((uint8_t)data[POS_DATA_COUNT] == regCountToRead) {
            uint32_t * tempBuffer = new uint32_t[regCountToRead];   // generate new buffer

            // fill payload buffer and calculate checksum
            int tempBufferDataCounter = 0;
            uint32_t sumOfBytes = 0;
            uint32_t dataPos = 0;
            uint8_t  packetOffset = 2;	// start after reg count
            for (int i = 0; i != regCountToRead; i++) {
                for (int a = 0 ; a != BYTE_COUNT ; a++) {
                    dataPos = i * BYTE_COUNT + (3-a) + packetOffset;
                    PSOMMemoryModifier.byteData[a] = data[dataPos];
                    sumOfBytes += PSOMMemoryModifier.byteData[a];
                }
                tempBuffer[tempBufferDataCounter++] = PSOMMemoryModifier.uint32Data;
            }

            if (linuxOS) uartRxBuffer.clear();

            emit newPSOMData (tempBuffer, tempBufferDataCounter);
            emit statusBarInfo("HAL::Received " + QString::number(tempBufferDataCounter) + " Bytes of data");
        }
        else {
            emit statusBarInfo("HAL::Received wrong data count, less data");
        }
    }
}
void        PSOM_HAL::recvNewSerialData()
{
    if (ptr_SerialPortHandler != NULL) {      
        if (linuxOS)
            newSerialDataHandlerLinux(ptr_SerialPortHandler->readAll());
        else
            newSerialDataHandler(ptr_SerialPortHandler->readAll());
    }
}

//! PUBLIC SLOTS
void        PSOM_HAL::newSerialDataHandler (QByteArray data)
{
    QString str(data.constData());

    if (str.contains("ERR")) {
        qDebug() << str;
    }
    //qDebug() << data;

    if ((uint8_t)data[POS_SYNC_HEADER] == 0xAA) {
        if (readRegisterState == true) {
            analyseIncomingReadData (data);
        }
        else {
            state = unpackStateFromPacket(data);
            emit stateChanged();
        }
        emit psomAnswered ();
    }
    else {
       // qDebug() << data.toHex();
        emit statusBarInfo("HAL::Received Serial data is out of snyc");
    }
}
void        PSOM_HAL::newSerialDataHandlerLinux (QByteArray data)
{
    QString str(data.constData());

    if (str.contains("ERR")) {
        qDebug() << str;
    }

    uartRxBuffer.append(data);
    if ((uint8_t)  uartRxBuffer[POS_SYNC_HEADER] == 0xAA) {
        if (readRegisterState == true) {
            analyseIncomingReadData (uartRxBuffer);
        }
        else {
            state = unpackStateFromPacket(data);
            emit stateChanged();
        }
        emit psomAnswered ();
    }
    else if (data.length() > 100 ) {
        uartRxBuffer.clear();
    }
    else {
        emit statusBarInfo("HAL::Received Serial data is out of snyc");
    }
}
