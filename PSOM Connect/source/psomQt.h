
#ifndef PSOM_H
#define PSOM_H

/**
 * @file    psomQt.h
 * @author  Nils Minor
 * @date    30.10.2016
 * @version 0.1
 * @brief   basic communication handling for PSOM module implemented in Qt
 *
 * @see     ...
 * */

/**
 * \brief Abstraction Layer overview
 *
 *  --------------------
 * | Main - application |
 *  --------------------
 * |   class::PSOM      |
 *  --------------------                                  ----------------------
 * |   class:PSOM_HAL   |                                | PSOM_command_handler |
 *  --------------------                                  ----------------------
 * |    QSerialPort     | <--> USB-Serial-Converter <--> |  PSOM_uart_handler   |
 *  --------------------                                  ----------------------
 *
 * \brief How to use PSOM class
 * PSOM class is abstraction layer 2, this means that the basic communication
 * like register read and write opperations are handled by layer 1 (PSOM_HAL).
 * This makes it much simplier for the user (you) since you only need to use
 * the PSOM class to get the required value.
 *
 * 1.) initialize an object or pointer of the PSOM class and give a subID and
 * a pointer to an initialized serial object (QSerialPort), since the communication
 * is done via the Serial COM-Port.
 *
 * \code
 * As Object : PSOM testModule (0, serial);
 * As Pointer: PSOM *testModule = new PSOM (0, serial);
 * \endcode
 *
 * 2.) To update the data of the PSOM class, simply start the measurment by calling
 * the function PSOM::startMeasurement (100). This will update the data of the PSOM
 * object every 100 ms. To stop it call PSOM::stopMeasurement (). All recalculation
 * etc. is either done by the module it self, or by lower layers.
 *
 * 3.) Now the data is updtate internally. To get a specific measurment value use
 * the function PSOM::getData (). This returns the measurment data structure which
 * build an easy to use data model. For example get RMS voltage on phase 1 (L1):
 *
 * \code
 * float V1rms = testModule.getData().L1.voltage.rms;
 * \endcode
 *
 * Now the variable V1rms contains the real world measurment data out of the
 * connected PSOM module.
 *
 *
 */

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QElapsedTimer>
#include <QThread>
#include "psomQt_HAL.h"
#include <stdint.h>


#define HARM_QUANTITY				11

enum HarmonicType {
    VoltageHarmonics = 1,
    CurrentHarmonics = 2,
    PPowerHarmonics = 3,
    QPowerHarmonics = 4
};

enum ReadingStates {
    readNormal = 0,
    readCalData = 1
};

struct PSOM_Voltage {
    float rms;
    float inst;
    float peak;
    float fundamental;
    float harmonic;
};
struct PSOM_Current{
    float rms;
    float inst;
    float peak;
    float fundamental;
    float harmonic;
};
struct PSOM_Power {
    float active;
    float reactive;
    float apparent;
    float factor;
    float cos_phi;
};
struct PSOM_Energy {
    float active;
    float reactive;
    float cost;
};
struct PSOM_Harmonics {
    float contentL1 [HARM_QUANTITY] = {0};
    float contentL2 [HARM_QUANTITY] = {0};
    float contentL3 [HARM_QUANTITY] = {0};
};

struct PSOM_phases {
    PSOM_Voltage voltage;
    PSOM_Current current;
    PSOM_Power  power;
    PSOM_Energy energy;
    PSOM_Harmonics harmonic;
};

struct PSOM_measurement_data {
    PSOM_phases L1;
    PSOM_phases L2;
    PSOM_phases L3;
    PSOM_phases LT;
    float frequency;
    float sensor_temperature;
    float processor_temperature;
    float circulationTime;
    float circulationFrequency;
    uint32_t uuid [4];
};

class PSOM : public QObject
{
    Q_OBJECT
public:
    //! CONSTRUCTOR & DESTRUCTOR
    PSOM (uint8_t _subID);
    PSOM (uint8_t _subID, QSerialPort *_ptr_SerialPortHandler);
    ~PSOM ();

    //! SETTER
    void        setSerialConnectionHandler (QSerialPort *_ptr_SerialPortHandler);   //! set the pointer to the serial opbject

    //! GETTER
    QString                 getFWVersion (void) {return fw_version; }               //! get firmeware version
    PSOM_measurement_data   getData (void) { return m_data; }                       //! returns the data structure,
    PSOM_DebugPacketInfo    getDebugPacketInfo (void) { return psom_hal->getDebugPacketInfo(); }    //! returns debug packet with information about the low level packet
    PSOM_State              getState (void) { return psom_hal->getState(); }        //! returns the module state
    void                        sendSCMD (uint32_t scmd);
    void                        writeSCMDValue (float value);
    void                        loadCalibrationData ();

    //! FUNCTIONS
    void        startMeasurement (int intervalTime);    //! start the measurment timer
    void        stopMeasurement  (void);                //! stop the measurement timer
    float        toFloat (uint32_t value);               //! interprets the psom uin32 data to it's respective float value

    void        setHarmonicsCount (int count);
    void        startHarmonicsScan (HarmonicType type);
    void        stopHarmonicsScan (void);

private:
    QElapsedTimer           elapsedTimer;
    QTimer                  * m_timer;                  //! measurment timer
    PSOM_measurement_data   m_data;                     //! PSOM data structure
    PSOM_HAL                * psom_hal;                 //! pointer to abstraction layer for psom communication
    bool                     psom_answered;
    QString               fw_version;
    bool                     harmonicMeasurmentState;
    int                         harmonicsCount;
    int                         actualHarmonic;
    ReadingStates   readingState;

private slots:
    void        m_timerTimeout (void);                                             //! timeout for measurment timer (periodic)
    void        assignEntirePSOMData  (uint32_t *data, int & dataCount);           //! assigns the recieved data to the psom struct data
    void        statusBarInfoHandler   (QString information);
    void        psomAnswered    (void);

signals:
    void        statusBarInfo   (QString information);
    void        stateChanged    (void);                                             //! signal is fired on every state change of the module
    void        newPSOMData     (void);                                             //! signal is fired when every new data is available
    void        newHarmonicsData(float *data, float freq, int count, int active);
    void        harmonicMeasurmentReady (void);
    void        updateCalData   (uint32_t * cal);
};

#endif // PSOM_H
