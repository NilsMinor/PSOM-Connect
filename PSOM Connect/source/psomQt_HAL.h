#ifndef PSOM_HAL_H
#define PSOM_HAL_H



#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include "PSOMRegsiter.h"
#include <stdint.h>

#define BYTE_COUNT 4
struct PSOM_DebugPacketInfo {
    uint8_t     header;
    uint8_t     dataCount;
    uint8_t     subID;
    uint8_t     command;
    uint16_t    address;
    uint32_t    data;
    uint8_t     checksum;
};

class PSOM_HAL : public QObject
{
    Q_OBJECT
public:
    PSOM_HAL (uint8_t _subID);
    PSOM_HAL (uint8_t _subID, QSerialPort *_ptr_SerialPortHandler);

    //! GETTER
    void        setSerialConnectionHandler (QSerialPort *_ptr_SerialPortHandler);

    //! SETTER
    PSOM_DebugPacketInfo getDebugPacketInfo (void) { return debugPacketStruct; }
    PSOM_State getState         (void) { return state;}

    void  copyPSOMBuffer     (void);
    //! BASIC COMMUNICTAION
    void  writeRegister    (uint16_t _regAddr, uint32_t _data, bool useChecksum);
    void  readRegister     (uint16_t _regAddrStart, uint16_t _regCount, bool checksum);

private:
    PSOM_DebugPacketInfo    debugPacketStruct;          //! struct to show basic packet info on UI
    QSerialPort             * ptr_SerialPortHandler;    //! pointer to serial object for communication purpose
    uint8_t                 subID;                      //! SUB-ID of the module
    PSOM_BigEndianMemory    PSOMMemoryModifier;         //! union to help in data type conversion
    PSOM_State              state;                      //! state of the module
    bool                    readRegisterState;          //! true if read register was triggered
    uint16_t                regCountToRead;             //! saves the register count for read operation
    QByteArray          uartRxBuffer;

    //! INTERNAL HELPER FUNCTIONS
    PSOM_State  unpackStateFromPacket   (QByteArray dataPtr);
    uint8_t     calculateChecksum       (QByteArray dataPtr, uint32_t payloadLength);
    void        packCommonPacketInfo    (QByteArray & psomMessage, uint8_t _dataCount, int16_t _regAddr, PSOM_COMMANDS _command);
    void        fillDebugPacketInfo     (QByteArray data, uint8_t regCount);
    void        analyseIncomingReadData(QByteArray data);

signals:
    void        stateChanged    (void);
    void        newPSOMData     (uint32_t * data, int & dataCount);
    void        statusBarInfo   (QString information);
    void        psomAnswered    (void);
private slots:
    void        recvNewSerialData (void);
    void        newSerialDataHandler (QByteArray data);
    void        newSerialDataHandlerLinux (QByteArray data);

public slots:

};

#endif // PSOM_HAL_H
