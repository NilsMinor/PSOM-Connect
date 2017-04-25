
#include "psomQt.h"

int harmOdd [HARM_QUANTITY] = {1,3,5,7,9,11,13,15,17,19};
bool triggerHarmonics = false;
int prevHarmonic = 1;
/**
 * @file    psomQt.cpp
 * @author  Nils Minor
 *
 * for more information @see psomQt.h
 * */

/**
 * \brief   PSOM constructor
 * \param   _subID      represents the sub-ID of the module
 * \retval  nothing
 */
PSOM::PSOM  (uint8_t _subID )
{
    psom_hal = new PSOM_HAL (_subID);
    connect (psom_hal, SIGNAL(newPSOMData(uint32_t*,int&)),this,SLOT(assignEntirePSOMData(uint32_t*,int&)));
    connect (psom_hal, SIGNAL(statusBarInfo(QString)), this, SLOT(statusBarInfoHandler(QString)));
    connect (psom_hal, SIGNAL(psomAnswered()), this, SLOT(psomAnswered()));
    m_timer = NULL;
    psom_answered = false;
    harmonicMeasurmentState = false;
}
/**
 * \brief   PSOM constructor
 * \param   _subID      represents the sub-ID of the module
 * \param   _ptr_SerialPortHandler  pointer to an initialized QSerialPort object, used for communication
 * \retval  nothing
 */
PSOM::PSOM  (uint8_t _subID, QSerialPort *_ptr_SerialPortHandler)
{
    psom_hal = new PSOM_HAL (_subID, _ptr_SerialPortHandler);
    connect (psom_hal, SIGNAL(newPSOMData(uint32_t*,int&)),this,SLOT(assignEntirePSOMData(uint32_t*,int&)));
    connect (psom_hal, SIGNAL(psomAnswered()), this, SLOT(psomAnswered()));
    m_timer = NULL;
    psom_answered = false;
    harmonicMeasurmentState = false;
}
/**
 * \brief   PSOM destructor
 * \param   nothing
 * \retval  nothing
 */
PSOM::~PSOM ( )
{
    if (psom_hal != NULL)
        delete psom_hal;
}
/**
 * \brief  set serial connection hander
 * \param   _ptr_SerialPortHandler  pointer to an initialized QSerialPort object, used for communication
 * \retval  nothing
 */
void PSOM::setSerialConnectionHandler (QSerialPort *_ptr_SerialPortHandler)
{
    psom_hal->setSerialConnectionHandler(_ptr_SerialPortHandler);
}
/**
 * \brief  Send Softcommand to the module
 * \param  scmd soft-command code
 * \retval  nothing
 */
void PSOM::sendSCMD(uint32_t scmd)
{
    psom_hal->writeRegister(PSOM_SCOMMAND, scmd, false);
}
/**
 * \brief  Writes data to the soft-command value register
 * \param  value value to write into the register
 * \retval  nothing
 */
void PSOM::writeSCMDValue(float value)
{
     psom_hal->writeRegister(PSOM_SCOMMAND_VALUE, value, false);
}

void PSOM::loadCalibrationData( )
{
    this->sendSCMD(PSOM_SCMD_CALLOAD);

   for (long i=0;i!=10000000;i++) { }
   readingState = readCalData;
   psom_hal->readRegister(HARM_L1_H1, 12, false);
}
/**
 * \brief  Set PWM value
 * \param  duty value representing the duty cycle must be betwee 0 and 100
 * \retval  nothing
 */
void PSOM::pwm_set(int duty)
{
    psom_hal->writeRegister(PSOM_PWM1, duty, false);
}
/**
 * \brief   starts the periodic measurment timer with an interval
 * \param   intervalTime    speciefies the timeout in ms
 * \retval  nothing
 */
void        PSOM::startMeasurement(int intervalTime)
{
    qDebug() << "Start PSOM measurment timer";

    if (m_timer == NULL) {
        m_timer = new QTimer();
        connect (m_timer, SIGNAL(timeout()), this, SLOT(m_timerTimeout()));
    }
    if (!m_timer->isActive()) {
        m_timer->start(intervalTime);
        elapsedTimer.start();
    }
}
/**
 * \brief   stops the periodic measurment timer with an interval
 * \param   nothing
 * \retval  nothing
 */
void        PSOM::stopMeasurement(void)
{
    qDebug() << "Stop PSOM measurment timer";
    if (m_timer != NULL)
        m_timer->stop();
}
/**
 * \brief   tranforms the uint32 value to a float value by using an union
 * \param   value    PSOM uin32 data
 * \retval  the respective float value
 */
float       PSOM::toFloat(uint32_t value) // restructing memory by a union
{
    union PSOM_BigEndianMemory memory;
    memory.uint32Data = value;
    return memory.floatData;
}


void PSOM::setHarmonicsCount(int count)
{
    if (count >= 1 && count <= HARM_QUANTITY) {
        harmonicsCount = count;
        psom_hal->writeRegister(PSOM_SCOMMAND_VALUE, harmonicsCount, false);
    }
}
void PSOM::startHarmonicsScan(HarmonicType type)
{
    if (type == VoltageHarmonics) {
        psom_hal->writeRegister(PSOM_SCOMMAND, PSOM_SCMD_HARM_V, false);
    }
    else if (type == CurrentHarmonics) {
        psom_hal->writeRegister(PSOM_SCOMMAND, PSOM_SCMD_HARM_I, false);
    }
    else if (type == PPowerHarmonics) {
        psom_hal->writeRegister(PSOM_SCOMMAND, PSOM_SCMD_HARM_P, false);
    }
    else if (type == QPowerHarmonics) {
        psom_hal->writeRegister(PSOM_SCOMMAND, PSOM_SCMD_HARM_Q, false);
    }

    harmonicMeasurmentState = true;
}
void PSOM::stopHarmonicsScan()
{
    harmonicMeasurmentState = false;
}

/**
 * \brief   timer timout of m_timer
 * \param   nothing
 * \retval  nothing
 */
void  PSOM::m_timerTimeout()
{
    //qDebug() << "m_timer timeout";
    readingState = readNormal;
    psom_hal->copyPSOMBuffer();
}
/**
 * \brief   assigns the uint32 data buffer from PSOM_HAL to the internal data structure
 * for simple usage of the PSOM class data model
 * \param   *data       pointer to the PSOM_HAL data buffer
 * \param   &dataCount  data count of the data array as reference
 * \retval  nothing
 */
void PSOM::assignEntirePSOMData(uint32_t *data, int &dataCount)
{
    switch (readingState) {
    case readNormal:
        if (dataCount == PSOM_REGISTER_COUNT) {
            fw_version = QString::number(data[PSOM_FW_VERSION/4]);

            // COMMON
            m_data.frequency = toFloat(data[LINE_FREQUENCY_F/4]);
            m_data.sensor_temperature = toFloat(data[MODULE_TEMPERATURE_F/4]);

            // VOLTAGE
            m_data.L1.voltage.rms = toFloat(data[L1_VOLTAGE_RMS/4]);
            m_data.L2.voltage.rms = toFloat(data[L2_VOLTAGE_RMS/4]);
            m_data.L3.voltage.rms = toFloat(data[L3_VOLTAGE_RMS/4]);
            m_data.LT.voltage.rms = toFloat(data[LT_VOLTAGE_RMS/4]);

             m_data.L1.voltage.thd = toFloat(data[L1_VOLTAGE_THD/4]);
             m_data.L2.voltage.thd = toFloat(data[L2_VOLTAGE_THD/4]);
             m_data.L3.voltage.thd = toFloat(data[L3_VOLTAGE_THD/4]);

            // CURRENT
            m_data.L1.current.rms = toFloat(data[L1_CURRENT_RMS/4]);
            m_data.L2.current.rms = toFloat(data[L2_CURRENT_RMS/4]);
            m_data.L3.current.rms = toFloat(data[L3_CURRENT_RMS/4]);
            m_data.LT.current.rms = toFloat(data[LT_CURRENT_RMS/4]);

            m_data.L1.current.thd = toFloat(data[L1_CURRENT_THD/4]);
            m_data.L2.current.thd = toFloat(data[L2_CURRENT_THD/4]);
            m_data.L3.current.thd = toFloat(data[L3_CURRENT_THD/4]);

            // POWER
            m_data.L1.power.active = toFloat(data[L1_POWER_ACTIVE/4]);
            m_data.L2.power.active = toFloat(data[L2_POWER_ACTIVE/4]);
            m_data.L3.power.active = toFloat(data[L3_POWER_ACTIVE/4]);
            m_data.LT.power.active = toFloat(data[LT_POWER_ACTIVE/4]);

            m_data.L1.power.reactive = toFloat(data[L1_POWER_REACTIVE/4]);
            m_data.L2.power.reactive = toFloat(data[L2_POWER_REACTIVE/4]);
            m_data.L3.power.reactive = toFloat(data[L3_POWER_REACTIVE/4]);
            m_data.LT.power.reactive = toFloat(data[LT_POWER_REACTIVE/4]);

            m_data.L1.power.apparent = toFloat(data[L1_POWER_APPARENT/4]);
            m_data.L2.power.apparent = toFloat(data[L2_POWER_APPARENT/4]);
            m_data.L3.power.apparent = toFloat(data[L3_POWER_APPARENT/4]);
            m_data.LT.power.apparent = toFloat(data[LT_POWER_APPARENT/4]);

            m_data.L1.power.factor = toFloat(data[L1_POWER_FACTOR/4]);
            m_data.L2.power.factor = toFloat(data[L2_POWER_FACTOR/4]);
            m_data.L3.power.factor = toFloat(data[L3_POWER_FACTOR/4]);
            m_data.LT.power.factor = toFloat(data[LT_POWER_FACTOR/4]);

            // ENERGY
            m_data.L1.energy.active = toFloat(data[L1_ENERGY_ACTIVE/4]) / 100000.0;
            m_data.L2.energy.active = toFloat(data[L2_ENERGY_ACTIVE/4]) / 100000.0 ;
            m_data.L3.energy.active = toFloat(data[L3_ENERGY_ACTIVE/4]) / 100000.0 ;
            m_data.LT.energy.active = m_data.L1.energy.active + m_data.L2.energy.active + m_data.L3.energy.active ;

            m_data.L1.energy.reactive = toFloat(data[L1_ENERGY_REACTIVE/4]) / 100000.0;
            m_data.L2.energy.reactive = toFloat(data[L2_ENERGY_REACTIVE/4]) / 100000.0 ;
            m_data.L3.energy.reactive = toFloat(data[L3_ENERGY_REACTIVE/4]) / 100000.0 ;
            m_data.LT.energy.reactive = m_data.L1.energy.reactive + m_data.L2.energy.reactive + m_data.L3.energy.reactive ;

            m_data.L1.energy.cost = toFloat(data[L1_ENERGY_COST/4]);
            m_data.L2.energy.cost = toFloat(data[L2_ENERGY_COST/4]);
            m_data.L3.energy.cost = toFloat(data[L3_ENERGY_COST/4]);
            m_data.LT.energy.cost = m_data.L1.energy.cost + m_data.L2.energy.cost + m_data.L3.energy.cost ;

            if (harmonicMeasurmentState) {
                actualHarmonic = data[ (PSOM_ACTIVE_HARM/4)];

                for (int i=0; i!= harmonicsCount; i++) {
                    m_data.L1.harmonic.contentL1[ i ] = toFloat (data[ (HARM_L1_H1 / 4) + i]);
                    m_data.L2.harmonic.contentL2[ i ] = toFloat (data[ (HARM_L2_H1 / 4) + i]);
                    m_data.L3.harmonic.contentL3[ i ] = toFloat (data[ (HARM_L3_H1 / 4) + i]);
                }

                //qDebug() << harmonicsCount <<actualHarmonic;

                if (  actualHarmonic < prevHarmonic) {
                    emit newHarmonicsData(m_data.L1.harmonic.contentL1, m_data.frequency, harmonicsCount, actualHarmonic);
                    emit harmonicMeasurmentReady ();
                }
                else
                    emit  updateActualHarmonic ( actualHarmonic);
                prevHarmonic = actualHarmonic;
            }

            m_data.circulationTime = elapsedTimer.elapsed();
            m_data.circulationFrequency =  1000.0 / m_data.circulationTime;

            // EVSE
            m_data.evse.adc1 =  toFloat(data[ADC1_VOLTAGE /4]);
            m_data.evse.adc2 =  toFloat(data[ADC2_VOLTAGE /4]);
            m_data.evse.adc3 =  toFloat(data[ADC3_VOLTAGE /4]);
            m_data.evse.adc4 =  toFloat(data[ADC4_VOLTAGE /4]);

            m_data.evse.pwm_duty1 = data[PSOM_PWM1/4];

            elapsedTimer.restart();
            emit newPSOMData();
        }
        else {
            for (int i =0; i!= dataCount; i++) {
                 qDebug() << data [i];
            }
        }

        break;
    case readCalData:
        if (dataCount == 12) {
            emit updateCalData (data);
        }
        break;
    }

}

void PSOM::statusBarInfoHandler(QString information)
{
    emit statusBarInfo   (information);
}

void PSOM::psomAnswered()
{
    psom_answered = true;
}




