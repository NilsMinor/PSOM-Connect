/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PowerLAB/source/mainwindow.h"
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
    QByteArrayData data[55];
    char stringdata0[1388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "openSerialPort"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "closeSerialPort"
QT_MOC_LITERAL(4, 43, 5), // "about"
QT_MOC_LITERAL(5, 49, 9), // "writeData"
QT_MOC_LITERAL(6, 59, 4), // "data"
QT_MOC_LITERAL(7, 64, 8), // "readData"
QT_MOC_LITERAL(8, 73, 11), // "handleError"
QT_MOC_LITERAL(9, 85, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(10, 114, 5), // "error"
QT_MOC_LITERAL(11, 120, 26), // "changeStatusbarInformation"
QT_MOC_LITERAL(12, 147, 14), // "newInformation"
QT_MOC_LITERAL(13, 162, 24), // "updateLoggingInformation"
QT_MOC_LITERAL(14, 187, 11), // "actual_line"
QT_MOC_LITERAL(15, 199, 9), // "file_size"
QT_MOC_LITERAL(16, 209, 11), // "newPSOMData"
QT_MOC_LITERAL(17, 221, 37), // "on_pushButtonStartMeasurment_..."
QT_MOC_LITERAL(18, 259, 36), // "on_pushButtonStopMeasurment_r..."
QT_MOC_LITERAL(19, 296, 28), // "on_pBStartHarmonics_released"
QT_MOC_LITERAL(20, 325, 38), // "on_cBHarmonicsType_currentInd..."
QT_MOC_LITERAL(21, 364, 4), // "arg1"
QT_MOC_LITERAL(22, 369, 43), // "on_cBHarmonicsAxisStyle_curre..."
QT_MOC_LITERAL(23, 413, 31), // "on_pBSetHarmonicsCount_released"
QT_MOC_LITERAL(24, 445, 24), // "handleActionOscilloscope"
QT_MOC_LITERAL(25, 470, 21), // "handleActionHarmonics"
QT_MOC_LITERAL(26, 492, 30), // "on_pBTriggerHarmonics_released"
QT_MOC_LITERAL(27, 523, 27), // "on_pBClearEnergyL1_released"
QT_MOC_LITERAL(28, 551, 27), // "on_pBClearEnergyL2_released"
QT_MOC_LITERAL(29, 579, 27), // "on_pBClearEnergyL3_released"
QT_MOC_LITERAL(30, 607, 27), // "on_pBClearEnergyLT_released"
QT_MOC_LITERAL(31, 635, 46), // "on_comboBoxCirculationFreq_cu..."
QT_MOC_LITERAL(32, 682, 5), // "index"
QT_MOC_LITERAL(33, 688, 31), // "on_pushButtonOsciStart_released"
QT_MOC_LITERAL(34, 720, 30), // "on_pushButtonOsciStop_released"
QT_MOC_LITERAL(35, 751, 31), // "on_pushButtonOsciReset_released"
QT_MOC_LITERAL(36, 783, 27), // "on_pushButtonPanel_released"
QT_MOC_LITERAL(37, 811, 27), // "on_pushButtonScope_released"
QT_MOC_LITERAL(38, 839, 31), // "on_pushButtonHarmonics_released"
QT_MOC_LITERAL(39, 871, 29), // "on_pushButtonLogging_released"
QT_MOC_LITERAL(40, 901, 18), // "on_QWT500_released"
QT_MOC_LITERAL(41, 920, 33), // "on_pushButtonCalibration_rele..."
QT_MOC_LITERAL(42, 954, 33), // "on_pushButtonInformation_rele..."
QT_MOC_LITERAL(43, 988, 26), // "on_pushButtonExit_released"
QT_MOC_LITERAL(44, 1015, 26), // "on_pushButtonEVSE_released"
QT_MOC_LITERAL(45, 1042, 34), // "on_pushButtonStartLogging_rel..."
QT_MOC_LITERAL(46, 1077, 31), // "on_pushButtonPanelHome_released"
QT_MOC_LITERAL(47, 1109, 31), // "on_pushButtonScopeHome_released"
QT_MOC_LITERAL(48, 1141, 35), // "on_pushButtonHarmonicsHome_re..."
QT_MOC_LITERAL(49, 1177, 33), // "on_pushButtonLoggingHome_rele..."
QT_MOC_LITERAL(50, 1211, 32), // "on_pushButtonQWT500Home_released"
QT_MOC_LITERAL(51, 1244, 30), // "on_pushButtonEVSEHome_released"
QT_MOC_LITERAL(52, 1275, 37), // "on_pushButtonCalibrationHome_..."
QT_MOC_LITERAL(53, 1313, 35), // "on_comboBoxOsci_currentIndexC..."
QT_MOC_LITERAL(54, 1349, 38) // "on_comboBoxCalType_currentInd..."

    },
    "MainWindow\0openSerialPort\0\0closeSerialPort\0"
    "about\0writeData\0data\0readData\0handleError\0"
    "QSerialPort::SerialPortError\0error\0"
    "changeStatusbarInformation\0newInformation\0"
    "updateLoggingInformation\0actual_line\0"
    "file_size\0newPSOMData\0"
    "on_pushButtonStartMeasurment_released\0"
    "on_pushButtonStopMeasurment_released\0"
    "on_pBStartHarmonics_released\0"
    "on_cBHarmonicsType_currentIndexChanged\0"
    "arg1\0on_cBHarmonicsAxisStyle_currentIndexChanged\0"
    "on_pBSetHarmonicsCount_released\0"
    "handleActionOscilloscope\0handleActionHarmonics\0"
    "on_pBTriggerHarmonics_released\0"
    "on_pBClearEnergyL1_released\0"
    "on_pBClearEnergyL2_released\0"
    "on_pBClearEnergyL3_released\0"
    "on_pBClearEnergyLT_released\0"
    "on_comboBoxCirculationFreq_currentIndexChanged\0"
    "index\0on_pushButtonOsciStart_released\0"
    "on_pushButtonOsciStop_released\0"
    "on_pushButtonOsciReset_released\0"
    "on_pushButtonPanel_released\0"
    "on_pushButtonScope_released\0"
    "on_pushButtonHarmonics_released\0"
    "on_pushButtonLogging_released\0"
    "on_QWT500_released\0on_pushButtonCalibration_released\0"
    "on_pushButtonInformation_released\0"
    "on_pushButtonExit_released\0"
    "on_pushButtonEVSE_released\0"
    "on_pushButtonStartLogging_released\0"
    "on_pushButtonPanelHome_released\0"
    "on_pushButtonScopeHome_released\0"
    "on_pushButtonHarmonicsHome_released\0"
    "on_pushButtonLoggingHome_released\0"
    "on_pushButtonQWT500Home_released\0"
    "on_pushButtonEVSEHome_released\0"
    "on_pushButtonCalibrationHome_released\0"
    "on_comboBoxOsci_currentIndexChanged\0"
    "on_comboBoxCalType_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  239,    2, 0x08 /* Private */,
       3,    0,  240,    2, 0x08 /* Private */,
       4,    0,  241,    2, 0x08 /* Private */,
       5,    1,  242,    2, 0x08 /* Private */,
       7,    0,  245,    2, 0x08 /* Private */,
       8,    1,  246,    2, 0x08 /* Private */,
      11,    1,  249,    2, 0x08 /* Private */,
      13,    2,  252,    2, 0x08 /* Private */,
      16,    0,  257,    2, 0x08 /* Private */,
      17,    0,  258,    2, 0x08 /* Private */,
      18,    0,  259,    2, 0x08 /* Private */,
      19,    0,  260,    2, 0x08 /* Private */,
      20,    1,  261,    2, 0x08 /* Private */,
      22,    1,  264,    2, 0x08 /* Private */,
      23,    0,  267,    2, 0x08 /* Private */,
      24,    0,  268,    2, 0x08 /* Private */,
      25,    0,  269,    2, 0x08 /* Private */,
      26,    0,  270,    2, 0x08 /* Private */,
      27,    0,  271,    2, 0x08 /* Private */,
      28,    0,  272,    2, 0x08 /* Private */,
      29,    0,  273,    2, 0x08 /* Private */,
      30,    0,  274,    2, 0x08 /* Private */,
      31,    1,  275,    2, 0x08 /* Private */,
      33,    0,  278,    2, 0x08 /* Private */,
      34,    0,  279,    2, 0x08 /* Private */,
      35,    0,  280,    2, 0x08 /* Private */,
      36,    0,  281,    2, 0x08 /* Private */,
      37,    0,  282,    2, 0x08 /* Private */,
      38,    0,  283,    2, 0x08 /* Private */,
      39,    0,  284,    2, 0x08 /* Private */,
      40,    0,  285,    2, 0x08 /* Private */,
      41,    0,  286,    2, 0x08 /* Private */,
      42,    0,  287,    2, 0x08 /* Private */,
      43,    0,  288,    2, 0x08 /* Private */,
      44,    0,  289,    2, 0x08 /* Private */,
      45,    0,  290,    2, 0x08 /* Private */,
      46,    0,  291,    2, 0x08 /* Private */,
      47,    0,  292,    2, 0x08 /* Private */,
      48,    0,  293,    2, 0x08 /* Private */,
      49,    0,  294,    2, 0x08 /* Private */,
      50,    0,  295,    2, 0x08 /* Private */,
      51,    0,  296,    2, 0x08 /* Private */,
      52,    0,  297,    2, 0x08 /* Private */,
      53,    1,  298,    2, 0x08 /* Private */,
      54,    1,  301,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Int,   32,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openSerialPort(); break;
        case 1: _t->closeSerialPort(); break;
        case 2: _t->about(); break;
        case 3: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 6: _t->changeStatusbarInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->updateLoggingInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->newPSOMData(); break;
        case 9: _t->on_pushButtonStartMeasurment_released(); break;
        case 10: _t->on_pushButtonStopMeasurment_released(); break;
        case 11: _t->on_pBStartHarmonics_released(); break;
        case 12: _t->on_cBHarmonicsType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_cBHarmonicsAxisStyle_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_pBSetHarmonicsCount_released(); break;
        case 15: _t->handleActionOscilloscope(); break;
        case 16: _t->handleActionHarmonics(); break;
        case 17: _t->on_pBTriggerHarmonics_released(); break;
        case 18: _t->on_pBClearEnergyL1_released(); break;
        case 19: _t->on_pBClearEnergyL2_released(); break;
        case 20: _t->on_pBClearEnergyL3_released(); break;
        case 21: _t->on_pBClearEnergyLT_released(); break;
        case 22: _t->on_comboBoxCirculationFreq_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_pushButtonOsciStart_released(); break;
        case 24: _t->on_pushButtonOsciStop_released(); break;
        case 25: _t->on_pushButtonOsciReset_released(); break;
        case 26: _t->on_pushButtonPanel_released(); break;
        case 27: _t->on_pushButtonScope_released(); break;
        case 28: _t->on_pushButtonHarmonics_released(); break;
        case 29: _t->on_pushButtonLogging_released(); break;
        case 30: _t->on_QWT500_released(); break;
        case 31: _t->on_pushButtonCalibration_released(); break;
        case 32: _t->on_pushButtonInformation_released(); break;
        case 33: _t->on_pushButtonExit_released(); break;
        case 34: _t->on_pushButtonEVSE_released(); break;
        case 35: _t->on_pushButtonStartLogging_released(); break;
        case 36: _t->on_pushButtonPanelHome_released(); break;
        case 37: _t->on_pushButtonScopeHome_released(); break;
        case 38: _t->on_pushButtonHarmonicsHome_released(); break;
        case 39: _t->on_pushButtonLoggingHome_released(); break;
        case 40: _t->on_pushButtonQWT500Home_released(); break;
        case 41: _t->on_pushButtonEVSEHome_released(); break;
        case 42: _t->on_pushButtonCalibrationHome_released(); break;
        case 43: _t->on_comboBoxOsci_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->on_comboBoxCalType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
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
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 45;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
