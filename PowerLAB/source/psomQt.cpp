
#include "psomQt.h"

bool triggerHarmonics = false;
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
    m_selection = PSOM_SEL_ALL;
    dio_dir     = PSOM_DIO_ALL_INPUTS;
    dio_state   = 0;
    psom_answered = false;
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
    m_selection = PSOM_SEL_ALL;
    dio_dir     = PSOM_DIO_ALL_INPUTS;
    dio_state   = 0;
    psom_answered = false;
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
void        PSOM::setSerialConnectionHandler (QSerialPort *_ptr_SerialPortHandler)
{
    psom_hal->setSerialConnectionHandler(_ptr_SerialPortHandler);
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

void        PSOM::setDIODir (int pin, int dir) {

    if (dir == PSOM_DIO_INPUT) mset_bit(dio_dir, pin);
    else if (dir == PSOM_DIO_OUTPUT) mclear_bit(dio_dir, pin) ;

    psom_hal->writeRegister(PSOM_ISO_GPIO_DIR, dio_dir, false);
}
void        PSOM::setDIO  (int pin, int state) {

    if (state == PSOM_DIO_HIGH) mset_bit(dio_state, pin);
    else if (state == PSOM_DIO_LOW)  mclear_bit(dio_state, pin) ;

    qDebug()  << "State to send = " << state << "for pin " << pin << endl;
    psom_hal->writeRegister(PSOM_ISO_GPIO_STATE, dio_state, false);
}
int         PSOM::getDIO  (int pin) {
    // maybe read it back
    return (dio_state >> pin) & 1;
}

void        PSOM::selectMeasurement (uint32_t selection, bool state)
{
    if (state == true)
        m_selection |=  (1u << selection);
    else
        m_selection &= ~(1u << selection);

    QString myStringOfBits( QString::number( m_selection, 2 ) );


    qDebug() << myStringOfBits << selection << state ;
}
void        PSOM::triggerHarmonicMeasruement (int harmonicCount, float *h_buf)
{
    triggerHarmonics = true;
    // [1] check buffer size
    // ?????

    // [2] stop circulation timer
    if (m_timer != NULL)
        m_timer->stop();

    // [3] set up psom scommand register with harmonics count
    psom_answered = false;
    //psom_hal->writeRegister(PSOM_SCOMMAND_VALUE, harmonicCount, false);
    QThread::msleep(1000);
    // [4] trigger psom harmonics measurment by writing the soft command
    psom_hal->writeRegister(PSOM_SCOMMAND, PSOM_SCMD_HARM_V, false);

    // [5] wait and receive the data




    // [?] start circulation timer again
    if (m_timer != NULL)
        m_timer->start();

}
/**
 * \brief   timer timout of m_timer
 * \param   nothing
 * \retval  nothing
 */
void        PSOM::m_timerTimeout()
{
    //qDebug() << "m_timer timeout";
    psom_hal->copyPSOMBuffer();
}
/**
 * \brief   assigns the uint32 data buffer from PSOM_HAL to the internal data structure
 * for simple usage of the PSOM class data model
 * \param   *data       pointer to the PSOM_HAL data buffer
 * \param   &dataCount  data count of the data array as reference
 * \retval  nothing
 */
void        PSOM::assignEntirePSOMData(uint32_t *data, int &dataCount)
{
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

        m_data.L1.voltage.inst = toFloat(data[L1_VOLTAGE_INST/4]);
        m_data.L2.voltage.inst = toFloat(data[L2_VOLTAGE_INST/4]);
        m_data.L3.voltage.inst = toFloat(data[L3_VOLTAGE_INST/4]);
        m_data.LT.voltage.inst = 0;

        // CURRENT
        m_data.L1.current.rms = toFloat(data[L1_CURRENT_RMS/4]);
        m_data.L2.current.rms = toFloat(data[L2_CURRENT_RMS/4]);
        m_data.L3.current.rms = toFloat(data[L3_CURRENT_RMS/4]);
        m_data.LT.current.rms = toFloat(data[LT_CURRENT_RMS/4]);

        m_data.L1.current.inst = toFloat(data[L1_CURRENT_INST/4]);
        m_data.L2.current.inst = toFloat(data[L2_CURRENT_INST/4]);
        m_data.L3.current.inst = toFloat(data[L3_CURRENT_INST/4]);
        m_data.LT.current.inst = 0;

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
        m_data.L1.energy.active = toFloat(data[L1_ENERGY_ACTIVE/4]) / 1000.0;
        m_data.L2.energy.active = toFloat(data[L2_ENERGY_ACTIVE/4]) / 1000.0;
        m_data.L3.energy.active = toFloat(data[L3_ENERGY_ACTIVE/4]) / 1000.0;
        m_data.L1.energy.reactive = toFloat(data[L1_ENERGY_REACTIVE/4]) / 1000.0;
        m_data.L2.energy.reactive = toFloat(data[L2_ENERGY_REACTIVE/4]) / 1000.0;
        m_data.L3.energy.reactive = toFloat(data[L3_ENERGY_REACTIVE/4]) / 1000.0;
        m_data.L1.energy.cost = toFloat(data[L1_ENERGY_COST/4]);
        m_data.L2.energy.cost = toFloat(data[L2_ENERGY_COST/4]);
        m_data.L3.energy.cost = toFloat(data[L3_ENERGY_COST/4]);

        m_data.circulationTime = elapsedTimer.elapsed();
        m_data.circulationFrequency =  1000.0 / m_data.circulationTime;

        elapsedTimer.restart();
        emit newPSOMData();
    }

    if (triggerHarmonics) {

        for (int i=0;i!=10;i++) {
            qDebug () << toFloat(data[i]) << " V";
        }

        //triggerHarmonics = false;
    }
}

void        PSOM::statusBarInfoHandler(QString information)
{
    emit statusBarInfo   (information);
}

void PSOM::psomAnswered()
{
    psom_answered = true;
}


