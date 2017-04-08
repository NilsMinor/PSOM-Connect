/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PSOM Connect/source/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[81];
    char stringdata0[2082];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "updateOsci"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "mDataHandler*"
QT_MOC_LITERAL(4, 37, 2), // "L1"
QT_MOC_LITERAL(5, 40, 2), // "L2"
QT_MOC_LITERAL(6, 43, 2), // "L3"
QT_MOC_LITERAL(7, 46, 2), // "LT"
QT_MOC_LITERAL(8, 49, 25), // "harmonicsMeasurementReady"
QT_MOC_LITERAL(9, 75, 14), // "openSerialPort"
QT_MOC_LITERAL(10, 90, 15), // "closeSerialPort"
QT_MOC_LITERAL(11, 106, 9), // "writeData"
QT_MOC_LITERAL(12, 116, 4), // "data"
QT_MOC_LITERAL(13, 121, 8), // "readData"
QT_MOC_LITERAL(14, 130, 11), // "handleError"
QT_MOC_LITERAL(15, 142, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(16, 171, 5), // "error"
QT_MOC_LITERAL(17, 177, 26), // "changeStatusbarInformation"
QT_MOC_LITERAL(18, 204, 14), // "newInformation"
QT_MOC_LITERAL(19, 219, 24), // "updateLoggingInformation"
QT_MOC_LITERAL(20, 244, 11), // "actual_line"
QT_MOC_LITERAL(21, 256, 9), // "file_size"
QT_MOC_LITERAL(22, 266, 11), // "newPSOMData"
QT_MOC_LITERAL(23, 278, 27), // "on_pushButtonPanel_released"
QT_MOC_LITERAL(24, 306, 31), // "on_pushButtonHarmonics_released"
QT_MOC_LITERAL(25, 338, 29), // "on_pushButtonLogging_released"
QT_MOC_LITERAL(26, 368, 28), // "on_pushButtonQWT500_released"
QT_MOC_LITERAL(27, 397, 33), // "on_pushButtonCalibration_rele..."
QT_MOC_LITERAL(28, 431, 33), // "on_pushButtonInformation_rele..."
QT_MOC_LITERAL(29, 465, 26), // "on_pushButtonExit_released"
QT_MOC_LITERAL(30, 492, 26), // "on_pushButtonEVSE_released"
QT_MOC_LITERAL(31, 519, 37), // "on_pushButtonStartMeasurment_..."
QT_MOC_LITERAL(32, 557, 36), // "on_pushButtonStopMeasurment_r..."
QT_MOC_LITERAL(33, 594, 27), // "on_pBClearEnergyL1_released"
QT_MOC_LITERAL(34, 622, 27), // "on_pBClearEnergyL2_released"
QT_MOC_LITERAL(35, 650, 27), // "on_pBClearEnergyL3_released"
QT_MOC_LITERAL(36, 678, 27), // "on_pBClearEnergyLT_released"
QT_MOC_LITERAL(37, 706, 31), // "on_pushButtonPanelHome_released"
QT_MOC_LITERAL(38, 738, 46), // "on_comboBoxCirculationFreq_cu..."
QT_MOC_LITERAL(39, 785, 5), // "index"
QT_MOC_LITERAL(40, 791, 41), // "on_comboBoxErrorStyle_current..."
QT_MOC_LITERAL(41, 833, 31), // "on_pushButtonOsciStart_released"
QT_MOC_LITERAL(42, 865, 30), // "on_pushButtonOsciStop_released"
QT_MOC_LITERAL(43, 896, 31), // "on_pushButtonOsciReset_released"
QT_MOC_LITERAL(44, 928, 27), // "on_pushButtonScope_released"
QT_MOC_LITERAL(45, 956, 11), // "osciTimeout"
QT_MOC_LITERAL(46, 968, 32), // "on_checkBoxOsciEnableL1_released"
QT_MOC_LITERAL(47, 1001, 32), // "on_checkBoxOsciEnableL2_released"
QT_MOC_LITERAL(48, 1034, 32), // "on_checkBoxOsciEnableL3_released"
QT_MOC_LITERAL(49, 1067, 32), // "on_checkBoxOsciEnableLT_released"
QT_MOC_LITERAL(50, 1100, 31), // "on_pushButtonScopeHome_released"
QT_MOC_LITERAL(51, 1132, 35), // "on_comboBoxOsci_currentIndexC..."
QT_MOC_LITERAL(52, 1168, 35), // "on_pushButtonHarmonicsHome_re..."
QT_MOC_LITERAL(53, 1204, 28), // "on_pBStartHarmonics_released"
QT_MOC_LITERAL(54, 1233, 38), // "on_cBHarmonicsType_currentInd..."
QT_MOC_LITERAL(55, 1272, 4), // "arg1"
QT_MOC_LITERAL(56, 1277, 43), // "on_cBHarmonicsAxisStyle_curre..."
QT_MOC_LITERAL(57, 1321, 31), // "on_pBSetHarmonicsCount_released"
QT_MOC_LITERAL(58, 1353, 30), // "on_pBTriggerHarmonics_released"
QT_MOC_LITERAL(59, 1384, 26), // "on_autoHarmonicMeasurement"
QT_MOC_LITERAL(60, 1411, 34), // "on_pushButtonStartLogging_rel..."
QT_MOC_LITERAL(61, 1446, 33), // "on_pushButtonLoggingHome_rele..."
QT_MOC_LITERAL(62, 1480, 31), // "on_pushButtonSingleLog_released"
QT_MOC_LITERAL(63, 1512, 37), // "on_pushButtonCalibrationHome_..."
QT_MOC_LITERAL(64, 1550, 38), // "on_comboBoxCalType_currentInd..."
QT_MOC_LITERAL(65, 1589, 37), // "on_pushButtonLoadCalibration_..."
QT_MOC_LITERAL(66, 1627, 37), // "on_pushButtonCalibrateOffset_..."
QT_MOC_LITERAL(67, 1665, 35), // "on_pushButtonCalibrateGain_re..."
QT_MOC_LITERAL(68, 1701, 46), // "on_comboBoxVoltageCalValue_cu..."
QT_MOC_LITERAL(69, 1748, 46), // "on_comboBoxCurrentCalValue_cu..."
QT_MOC_LITERAL(70, 1795, 13), // "updateCalData"
QT_MOC_LITERAL(71, 1809, 9), // "uint32_t*"
QT_MOC_LITERAL(72, 1819, 3), // "cal"
QT_MOC_LITERAL(73, 1823, 32), // "on_pushButtonQWT500Home_released"
QT_MOC_LITERAL(74, 1856, 15), // "updateErrorData"
QT_MOC_LITERAL(75, 1872, 30), // "on_pushButtonEVSEHome_released"
QT_MOC_LITERAL(76, 1903, 35), // "on_pushButtonStartCharging_re..."
QT_MOC_LITERAL(77, 1939, 34), // "on_pushButtonStopCharging_rel..."
QT_MOC_LITERAL(78, 1974, 35), // "on_comboBoxPWM2_currentIndexC..."
QT_MOC_LITERAL(79, 2010, 35), // "on_comboBoxPWM3_currentIndexC..."
QT_MOC_LITERAL(80, 2046, 35) // "on_comboBoxPWM1_currentIndexC..."

    },
    "MainWindow\0updateOsci\0\0mDataHandler*\0"
    "L1\0L2\0L3\0LT\0harmonicsMeasurementReady\0"
    "openSerialPort\0closeSerialPort\0writeData\0"
    "data\0readData\0handleError\0"
    "QSerialPort::SerialPortError\0error\0"
    "changeStatusbarInformation\0newInformation\0"
    "updateLoggingInformation\0actual_line\0"
    "file_size\0newPSOMData\0on_pushButtonPanel_released\0"
    "on_pushButtonHarmonics_released\0"
    "on_pushButtonLogging_released\0"
    "on_pushButtonQWT500_released\0"
    "on_pushButtonCalibration_released\0"
    "on_pushButtonInformation_released\0"
    "on_pushButtonExit_released\0"
    "on_pushButtonEVSE_released\0"
    "on_pushButtonStartMeasurment_released\0"
    "on_pushButtonStopMeasurment_released\0"
    "on_pBClearEnergyL1_released\0"
    "on_pBClearEnergyL2_released\0"
    "on_pBClearEnergyL3_released\0"
    "on_pBClearEnergyLT_released\0"
    "on_pushButtonPanelHome_released\0"
    "on_comboBoxCirculationFreq_currentIndexChanged\0"
    "index\0on_comboBoxErrorStyle_currentIndexChanged\0"
    "on_pushButtonOsciStart_released\0"
    "on_pushButtonOsciStop_released\0"
    "on_pushButtonOsciReset_released\0"
    "on_pushButtonScope_released\0osciTimeout\0"
    "on_checkBoxOsciEnableL1_released\0"
    "on_checkBoxOsciEnableL2_released\0"
    "on_checkBoxOsciEnableL3_released\0"
    "on_checkBoxOsciEnableLT_released\0"
    "on_pushButtonScopeHome_released\0"
    "on_comboBoxOsci_currentIndexChanged\0"
    "on_pushButtonHarmonicsHome_released\0"
    "on_pBStartHarmonics_released\0"
    "on_cBHarmonicsType_currentIndexChanged\0"
    "arg1\0on_cBHarmonicsAxisStyle_currentIndexChanged\0"
    "on_pBSetHarmonicsCount_released\0"
    "on_pBTriggerHarmonics_released\0"
    "on_autoHarmonicMeasurement\0"
    "on_pushButtonStartLogging_released\0"
    "on_pushButtonLoggingHome_released\0"
    "on_pushButtonSingleLog_released\0"
    "on_pushButtonCalibrationHome_released\0"
    "on_comboBoxCalType_currentIndexChanged\0"
    "on_pushButtonLoadCalibration_released\0"
    "on_pushButtonCalibrateOffset_released\0"
    "on_pushButtonCalibrateGain_released\0"
    "on_comboBoxVoltageCalValue_currentIndexChanged\0"
    "on_comboBoxCurrentCalValue_currentIndexChanged\0"
    "updateCalData\0uint32_t*\0cal\0"
    "on_pushButtonQWT500Home_released\0"
    "updateErrorData\0on_pushButtonEVSEHome_released\0"
    "on_pushButtonStartCharging_released\0"
    "on_pushButtonStopCharging_released\0"
    "on_comboBoxPWM2_currentIndexChanged\0"
    "on_comboBoxPWM3_currentIndexChanged\0"
    "on_comboBoxPWM1_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  334,    2, 0x06 /* Public */,
       8,    0,  343,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  344,    2, 0x08 /* Private */,
      10,    0,  345,    2, 0x08 /* Private */,
      11,    1,  346,    2, 0x08 /* Private */,
      13,    0,  349,    2, 0x08 /* Private */,
      14,    1,  350,    2, 0x08 /* Private */,
      17,    1,  353,    2, 0x08 /* Private */,
      19,    2,  356,    2, 0x08 /* Private */,
      22,    0,  361,    2, 0x08 /* Private */,
      23,    0,  362,    2, 0x08 /* Private */,
      24,    0,  363,    2, 0x08 /* Private */,
      25,    0,  364,    2, 0x08 /* Private */,
      26,    0,  365,    2, 0x08 /* Private */,
      27,    0,  366,    2, 0x08 /* Private */,
      28,    0,  367,    2, 0x08 /* Private */,
      29,    0,  368,    2, 0x08 /* Private */,
      30,    0,  369,    2, 0x08 /* Private */,
      31,    0,  370,    2, 0x08 /* Private */,
      32,    0,  371,    2, 0x08 /* Private */,
      33,    0,  372,    2, 0x08 /* Private */,
      34,    0,  373,    2, 0x08 /* Private */,
      35,    0,  374,    2, 0x08 /* Private */,
      36,    0,  375,    2, 0x08 /* Private */,
      37,    0,  376,    2, 0x08 /* Private */,
      38,    1,  377,    2, 0x08 /* Private */,
      40,    1,  380,    2, 0x08 /* Private */,
      41,    0,  383,    2, 0x08 /* Private */,
      42,    0,  384,    2, 0x08 /* Private */,
      43,    0,  385,    2, 0x08 /* Private */,
      44,    0,  386,    2, 0x08 /* Private */,
      45,    0,  387,    2, 0x08 /* Private */,
      46,    0,  388,    2, 0x08 /* Private */,
      47,    0,  389,    2, 0x08 /* Private */,
      48,    0,  390,    2, 0x08 /* Private */,
      49,    0,  391,    2, 0x08 /* Private */,
      50,    0,  392,    2, 0x08 /* Private */,
      51,    1,  393,    2, 0x08 /* Private */,
      52,    0,  396,    2, 0x08 /* Private */,
      53,    0,  397,    2, 0x08 /* Private */,
      54,    1,  398,    2, 0x08 /* Private */,
      56,    1,  401,    2, 0x08 /* Private */,
      57,    0,  404,    2, 0x08 /* Private */,
      58,    0,  405,    2, 0x08 /* Private */,
      59,    0,  406,    2, 0x08 /* Private */,
      60,    0,  407,    2, 0x08 /* Private */,
      61,    0,  408,    2, 0x08 /* Private */,
      62,    0,  409,    2, 0x08 /* Private */,
      63,    0,  410,    2, 0x08 /* Private */,
      64,    1,  411,    2, 0x08 /* Private */,
      65,    0,  414,    2, 0x08 /* Private */,
      66,    0,  415,    2, 0x08 /* Private */,
      67,    0,  416,    2, 0x08 /* Private */,
      68,    1,  417,    2, 0x08 /* Private */,
      69,    1,  420,    2, 0x08 /* Private */,
      70,    1,  423,    2, 0x08 /* Private */,
      73,    0,  426,    2, 0x08 /* Private */,
      74,    4,  427,    2, 0x08 /* Private */,
      75,    0,  436,    2, 0x08 /* Private */,
      76,    0,  437,    2, 0x08 /* Private */,
      77,    0,  438,    2, 0x08 /* Private */,
      78,    1,  439,    2, 0x08 /* Private */,
      79,    1,  442,    2, 0x08 /* Private */,
      80,    1,  445,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, 0x80000000 | 71,   72,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOsci((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 1: _t->harmonicsMeasurementReady(); break;
        case 2: _t->openSerialPort(); break;
        case 3: _t->closeSerialPort(); break;
        case 4: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->readData(); break;
        case 6: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 7: _t->changeStatusbarInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateLoggingInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->newPSOMData(); break;
        case 10: _t->on_pushButtonPanel_released(); break;
        case 11: _t->on_pushButtonHarmonics_released(); break;
        case 12: _t->on_pushButtonLogging_released(); break;
        case 13: _t->on_pushButtonQWT500_released(); break;
        case 14: _t->on_pushButtonCalibration_released(); break;
        case 15: _t->on_pushButtonInformation_released(); break;
        case 16: _t->on_pushButtonExit_released(); break;
        case 17: _t->on_pushButtonEVSE_released(); break;
        case 18: _t->on_pushButtonStartMeasurment_released(); break;
        case 19: _t->on_pushButtonStopMeasurment_released(); break;
        case 20: _t->on_pBClearEnergyL1_released(); break;
        case 21: _t->on_pBClearEnergyL2_released(); break;
        case 22: _t->on_pBClearEnergyL3_released(); break;
        case 23: _t->on_pBClearEnergyLT_released(); break;
        case 24: _t->on_pushButtonPanelHome_released(); break;
        case 25: _t->on_comboBoxCirculationFreq_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_comboBoxErrorStyle_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_pushButtonOsciStart_released(); break;
        case 28: _t->on_pushButtonOsciStop_released(); break;
        case 29: _t->on_pushButtonOsciReset_released(); break;
        case 30: _t->on_pushButtonScope_released(); break;
        case 31: _t->osciTimeout(); break;
        case 32: _t->on_checkBoxOsciEnableL1_released(); break;
        case 33: _t->on_checkBoxOsciEnableL2_released(); break;
        case 34: _t->on_checkBoxOsciEnableL3_released(); break;
        case 35: _t->on_checkBoxOsciEnableLT_released(); break;
        case 36: _t->on_pushButtonScopeHome_released(); break;
        case 37: _t->on_comboBoxOsci_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_pushButtonHarmonicsHome_released(); break;
        case 39: _t->on_pBStartHarmonics_released(); break;
        case 40: _t->on_cBHarmonicsType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->on_cBHarmonicsAxisStyle_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->on_pBSetHarmonicsCount_released(); break;
        case 43: _t->on_pBTriggerHarmonics_released(); break;
        case 44: _t->on_autoHarmonicMeasurement(); break;
        case 45: _t->on_pushButtonStartLogging_released(); break;
        case 46: _t->on_pushButtonLoggingHome_released(); break;
        case 47: _t->on_pushButtonSingleLog_released(); break;
        case 48: _t->on_pushButtonCalibrationHome_released(); break;
        case 49: _t->on_comboBoxCalType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_pushButtonLoadCalibration_released(); break;
        case 51: _t->on_pushButtonCalibrateOffset_released(); break;
        case 52: _t->on_pushButtonCalibrateGain_released(); break;
        case 53: _t->on_comboBoxVoltageCalValue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->on_comboBoxCurrentCalValue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->updateCalData((*reinterpret_cast< uint32_t*(*)>(_a[1]))); break;
        case 56: _t->on_pushButtonQWT500Home_released(); break;
        case 57: _t->updateErrorData((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 58: _t->on_pushButtonEVSEHome_released(); break;
        case 59: _t->on_pushButtonStartCharging_released(); break;
        case 60: _t->on_pushButtonStopCharging_released(); break;
        case 61: _t->on_comboBoxPWM2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->on_comboBoxPWM3_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->on_comboBoxPWM1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mDataHandler* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mDataHandler* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(mDataHandler * , mDataHandler * , mDataHandler * , mDataHandler * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::updateOsci)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::harmonicsMeasurementReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateOsci(mDataHandler * _t1, mDataHandler * _t2, mDataHandler * _t3, mDataHandler * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::harmonicsMeasurementReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
