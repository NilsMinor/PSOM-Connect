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
    QByteArrayData data[76];
    char stringdata0[1921];
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
QT_MOC_LITERAL(8, 49, 14), // "openSerialPort"
QT_MOC_LITERAL(9, 64, 15), // "closeSerialPort"
QT_MOC_LITERAL(10, 80, 9), // "writeData"
QT_MOC_LITERAL(11, 90, 4), // "data"
QT_MOC_LITERAL(12, 95, 8), // "readData"
QT_MOC_LITERAL(13, 104, 11), // "handleError"
QT_MOC_LITERAL(14, 116, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(15, 145, 5), // "error"
QT_MOC_LITERAL(16, 151, 26), // "changeStatusbarInformation"
QT_MOC_LITERAL(17, 178, 14), // "newInformation"
QT_MOC_LITERAL(18, 193, 24), // "updateLoggingInformation"
QT_MOC_LITERAL(19, 218, 11), // "actual_line"
QT_MOC_LITERAL(20, 230, 9), // "file_size"
QT_MOC_LITERAL(21, 240, 11), // "newPSOMData"
QT_MOC_LITERAL(22, 252, 27), // "on_pushButtonPanel_released"
QT_MOC_LITERAL(23, 280, 31), // "on_pushButtonHarmonics_released"
QT_MOC_LITERAL(24, 312, 29), // "on_pushButtonLogging_released"
QT_MOC_LITERAL(25, 342, 28), // "on_pushButtonQWT500_released"
QT_MOC_LITERAL(26, 371, 33), // "on_pushButtonCalibration_rele..."
QT_MOC_LITERAL(27, 405, 33), // "on_pushButtonInformation_rele..."
QT_MOC_LITERAL(28, 439, 26), // "on_pushButtonExit_released"
QT_MOC_LITERAL(29, 466, 26), // "on_pushButtonEVSE_released"
QT_MOC_LITERAL(30, 493, 37), // "on_pushButtonStartMeasurment_..."
QT_MOC_LITERAL(31, 531, 36), // "on_pushButtonStopMeasurment_r..."
QT_MOC_LITERAL(32, 568, 27), // "on_pBClearEnergyL1_released"
QT_MOC_LITERAL(33, 596, 27), // "on_pBClearEnergyL2_released"
QT_MOC_LITERAL(34, 624, 27), // "on_pBClearEnergyL3_released"
QT_MOC_LITERAL(35, 652, 27), // "on_pBClearEnergyLT_released"
QT_MOC_LITERAL(36, 680, 31), // "on_pushButtonPanelHome_released"
QT_MOC_LITERAL(37, 712, 46), // "on_comboBoxCirculationFreq_cu..."
QT_MOC_LITERAL(38, 759, 5), // "index"
QT_MOC_LITERAL(39, 765, 41), // "on_comboBoxErrorStyle_current..."
QT_MOC_LITERAL(40, 807, 31), // "on_pushButtonOsciStart_released"
QT_MOC_LITERAL(41, 839, 30), // "on_pushButtonOsciStop_released"
QT_MOC_LITERAL(42, 870, 31), // "on_pushButtonOsciReset_released"
QT_MOC_LITERAL(43, 902, 27), // "on_pushButtonScope_released"
QT_MOC_LITERAL(44, 930, 11), // "osciTimeout"
QT_MOC_LITERAL(45, 942, 32), // "on_checkBoxOsciEnableL1_released"
QT_MOC_LITERAL(46, 975, 32), // "on_checkBoxOsciEnableL2_released"
QT_MOC_LITERAL(47, 1008, 32), // "on_checkBoxOsciEnableL3_released"
QT_MOC_LITERAL(48, 1041, 32), // "on_checkBoxOsciEnableLT_released"
QT_MOC_LITERAL(49, 1074, 31), // "on_pushButtonScopeHome_released"
QT_MOC_LITERAL(50, 1106, 35), // "on_comboBoxOsci_currentIndexC..."
QT_MOC_LITERAL(51, 1142, 35), // "on_pushButtonHarmonicsHome_re..."
QT_MOC_LITERAL(52, 1178, 28), // "on_pBStartHarmonics_released"
QT_MOC_LITERAL(53, 1207, 38), // "on_cBHarmonicsType_currentInd..."
QT_MOC_LITERAL(54, 1246, 4), // "arg1"
QT_MOC_LITERAL(55, 1251, 43), // "on_cBHarmonicsAxisStyle_curre..."
QT_MOC_LITERAL(56, 1295, 31), // "on_pBSetHarmonicsCount_released"
QT_MOC_LITERAL(57, 1327, 30), // "on_pBTriggerHarmonics_released"
QT_MOC_LITERAL(58, 1358, 34), // "on_pushButtonStartLogging_rel..."
QT_MOC_LITERAL(59, 1393, 33), // "on_pushButtonLoggingHome_rele..."
QT_MOC_LITERAL(60, 1427, 31), // "on_pushButtonSingleLog_released"
QT_MOC_LITERAL(61, 1459, 37), // "on_pushButtonCalibrationHome_..."
QT_MOC_LITERAL(62, 1497, 38), // "on_comboBoxCalType_currentInd..."
QT_MOC_LITERAL(63, 1536, 37), // "on_pushButtonLoadCalibration_..."
QT_MOC_LITERAL(64, 1574, 37), // "on_pushButtonCalibrateOffset_..."
QT_MOC_LITERAL(65, 1612, 35), // "on_pushButtonCalibrateGain_re..."
QT_MOC_LITERAL(66, 1648, 46), // "on_comboBoxVoltageCalValue_cu..."
QT_MOC_LITERAL(67, 1695, 46), // "on_comboBoxCurrentCalValue_cu..."
QT_MOC_LITERAL(68, 1742, 13), // "updateCalData"
QT_MOC_LITERAL(69, 1756, 9), // "uint32_t*"
QT_MOC_LITERAL(70, 1766, 3), // "cal"
QT_MOC_LITERAL(71, 1770, 32), // "on_pushButtonQWT500Home_released"
QT_MOC_LITERAL(72, 1803, 15), // "updateErrorData"
QT_MOC_LITERAL(73, 1819, 30), // "on_pushButtonEVSEHome_released"
QT_MOC_LITERAL(74, 1850, 35), // "on_pushButtonStartCharging_re..."
QT_MOC_LITERAL(75, 1886, 34) // "on_pushButtonStopCharging_rel..."

    },
    "MainWindow\0updateOsci\0\0mDataHandler*\0"
    "L1\0L2\0L3\0LT\0openSerialPort\0closeSerialPort\0"
    "writeData\0data\0readData\0handleError\0"
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
    "on_pushButtonStopCharging_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  309,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  318,    2, 0x08 /* Private */,
       9,    0,  319,    2, 0x08 /* Private */,
      10,    1,  320,    2, 0x08 /* Private */,
      12,    0,  323,    2, 0x08 /* Private */,
      13,    1,  324,    2, 0x08 /* Private */,
      16,    1,  327,    2, 0x08 /* Private */,
      18,    2,  330,    2, 0x08 /* Private */,
      21,    0,  335,    2, 0x08 /* Private */,
      22,    0,  336,    2, 0x08 /* Private */,
      23,    0,  337,    2, 0x08 /* Private */,
      24,    0,  338,    2, 0x08 /* Private */,
      25,    0,  339,    2, 0x08 /* Private */,
      26,    0,  340,    2, 0x08 /* Private */,
      27,    0,  341,    2, 0x08 /* Private */,
      28,    0,  342,    2, 0x08 /* Private */,
      29,    0,  343,    2, 0x08 /* Private */,
      30,    0,  344,    2, 0x08 /* Private */,
      31,    0,  345,    2, 0x08 /* Private */,
      32,    0,  346,    2, 0x08 /* Private */,
      33,    0,  347,    2, 0x08 /* Private */,
      34,    0,  348,    2, 0x08 /* Private */,
      35,    0,  349,    2, 0x08 /* Private */,
      36,    0,  350,    2, 0x08 /* Private */,
      37,    1,  351,    2, 0x08 /* Private */,
      39,    1,  354,    2, 0x08 /* Private */,
      40,    0,  357,    2, 0x08 /* Private */,
      41,    0,  358,    2, 0x08 /* Private */,
      42,    0,  359,    2, 0x08 /* Private */,
      43,    0,  360,    2, 0x08 /* Private */,
      44,    0,  361,    2, 0x08 /* Private */,
      45,    0,  362,    2, 0x08 /* Private */,
      46,    0,  363,    2, 0x08 /* Private */,
      47,    0,  364,    2, 0x08 /* Private */,
      48,    0,  365,    2, 0x08 /* Private */,
      49,    0,  366,    2, 0x08 /* Private */,
      50,    1,  367,    2, 0x08 /* Private */,
      51,    0,  370,    2, 0x08 /* Private */,
      52,    0,  371,    2, 0x08 /* Private */,
      53,    1,  372,    2, 0x08 /* Private */,
      55,    1,  375,    2, 0x08 /* Private */,
      56,    0,  378,    2, 0x08 /* Private */,
      57,    0,  379,    2, 0x08 /* Private */,
      58,    0,  380,    2, 0x08 /* Private */,
      59,    0,  381,    2, 0x08 /* Private */,
      60,    0,  382,    2, 0x08 /* Private */,
      61,    0,  383,    2, 0x08 /* Private */,
      62,    1,  384,    2, 0x08 /* Private */,
      63,    0,  387,    2, 0x08 /* Private */,
      64,    0,  388,    2, 0x08 /* Private */,
      65,    0,  389,    2, 0x08 /* Private */,
      66,    1,  390,    2, 0x08 /* Private */,
      67,    1,  393,    2, 0x08 /* Private */,
      68,    1,  396,    2, 0x08 /* Private */,
      71,    0,  399,    2, 0x08 /* Private */,
      72,    4,  400,    2, 0x08 /* Private */,
      73,    0,  409,    2, 0x08 /* Private */,
      74,    0,  410,    2, 0x08 /* Private */,
      75,    0,  411,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   19,   20,
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
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   38,
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
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOsci((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 1: _t->openSerialPort(); break;
        case 2: _t->closeSerialPort(); break;
        case 3: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 6: _t->changeStatusbarInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->updateLoggingInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->newPSOMData(); break;
        case 9: _t->on_pushButtonPanel_released(); break;
        case 10: _t->on_pushButtonHarmonics_released(); break;
        case 11: _t->on_pushButtonLogging_released(); break;
        case 12: _t->on_pushButtonQWT500_released(); break;
        case 13: _t->on_pushButtonCalibration_released(); break;
        case 14: _t->on_pushButtonInformation_released(); break;
        case 15: _t->on_pushButtonExit_released(); break;
        case 16: _t->on_pushButtonEVSE_released(); break;
        case 17: _t->on_pushButtonStartMeasurment_released(); break;
        case 18: _t->on_pushButtonStopMeasurment_released(); break;
        case 19: _t->on_pBClearEnergyL1_released(); break;
        case 20: _t->on_pBClearEnergyL2_released(); break;
        case 21: _t->on_pBClearEnergyL3_released(); break;
        case 22: _t->on_pBClearEnergyLT_released(); break;
        case 23: _t->on_pushButtonPanelHome_released(); break;
        case 24: _t->on_comboBoxCirculationFreq_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_comboBoxErrorStyle_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_pushButtonOsciStart_released(); break;
        case 27: _t->on_pushButtonOsciStop_released(); break;
        case 28: _t->on_pushButtonOsciReset_released(); break;
        case 29: _t->on_pushButtonScope_released(); break;
        case 30: _t->osciTimeout(); break;
        case 31: _t->on_checkBoxOsciEnableL1_released(); break;
        case 32: _t->on_checkBoxOsciEnableL2_released(); break;
        case 33: _t->on_checkBoxOsciEnableL3_released(); break;
        case 34: _t->on_checkBoxOsciEnableLT_released(); break;
        case 35: _t->on_pushButtonScopeHome_released(); break;
        case 36: _t->on_comboBoxOsci_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_pushButtonHarmonicsHome_released(); break;
        case 38: _t->on_pBStartHarmonics_released(); break;
        case 39: _t->on_cBHarmonicsType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->on_cBHarmonicsAxisStyle_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->on_pBSetHarmonicsCount_released(); break;
        case 42: _t->on_pBTriggerHarmonics_released(); break;
        case 43: _t->on_pushButtonStartLogging_released(); break;
        case 44: _t->on_pushButtonLoggingHome_released(); break;
        case 45: _t->on_pushButtonSingleLog_released(); break;
        case 46: _t->on_pushButtonCalibrationHome_released(); break;
        case 47: _t->on_comboBoxCalType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_pushButtonLoadCalibration_released(); break;
        case 49: _t->on_pushButtonCalibrateOffset_released(); break;
        case 50: _t->on_pushButtonCalibrateGain_released(); break;
        case 51: _t->on_comboBoxVoltageCalValue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->on_comboBoxCurrentCalValue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->updateCalData((*reinterpret_cast< uint32_t*(*)>(_a[1]))); break;
        case 54: _t->on_pushButtonQWT500Home_released(); break;
        case 55: _t->updateErrorData((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 56: _t->on_pushButtonEVSEHome_released(); break;
        case 57: _t->on_pushButtonStartCharging_released(); break;
        case 58: _t->on_pushButtonStopCharging_released(); break;
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
        case 55:
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
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateOsci(mDataHandler * _t1, mDataHandler * _t2, mDataHandler * _t3, mDataHandler * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
