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
    QByteArrayData data[62];
    char stringdata0[1437];
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
QT_MOC_LITERAL(10, 80, 5), // "about"
QT_MOC_LITERAL(11, 86, 9), // "writeData"
QT_MOC_LITERAL(12, 96, 4), // "data"
QT_MOC_LITERAL(13, 101, 8), // "readData"
QT_MOC_LITERAL(14, 110, 11), // "osciTimeout"
QT_MOC_LITERAL(15, 122, 11), // "handleError"
QT_MOC_LITERAL(16, 134, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(17, 163, 5), // "error"
QT_MOC_LITERAL(18, 169, 26), // "changeStatusbarInformation"
QT_MOC_LITERAL(19, 196, 14), // "newInformation"
QT_MOC_LITERAL(20, 211, 24), // "updateLoggingInformation"
QT_MOC_LITERAL(21, 236, 11), // "actual_line"
QT_MOC_LITERAL(22, 248, 9), // "file_size"
QT_MOC_LITERAL(23, 258, 11), // "newPSOMData"
QT_MOC_LITERAL(24, 270, 37), // "on_pushButtonStartMeasurment_..."
QT_MOC_LITERAL(25, 308, 36), // "on_pushButtonStopMeasurment_r..."
QT_MOC_LITERAL(26, 345, 28), // "on_pBStartHarmonics_released"
QT_MOC_LITERAL(27, 374, 38), // "on_cBHarmonicsType_currentInd..."
QT_MOC_LITERAL(28, 413, 4), // "arg1"
QT_MOC_LITERAL(29, 418, 43), // "on_cBHarmonicsAxisStyle_curre..."
QT_MOC_LITERAL(30, 462, 31), // "on_pBSetHarmonicsCount_released"
QT_MOC_LITERAL(31, 494, 24), // "handleActionOscilloscope"
QT_MOC_LITERAL(32, 519, 21), // "handleActionHarmonics"
QT_MOC_LITERAL(33, 541, 30), // "on_pBTriggerHarmonics_released"
QT_MOC_LITERAL(34, 572, 27), // "on_pBClearEnergyL1_released"
QT_MOC_LITERAL(35, 600, 27), // "on_pBClearEnergyL2_released"
QT_MOC_LITERAL(36, 628, 27), // "on_pBClearEnergyL3_released"
QT_MOC_LITERAL(37, 656, 27), // "on_pBClearEnergyLT_released"
QT_MOC_LITERAL(38, 684, 46), // "on_comboBoxCirculationFreq_cu..."
QT_MOC_LITERAL(39, 731, 5), // "index"
QT_MOC_LITERAL(40, 737, 31), // "on_pushButtonOsciStart_released"
QT_MOC_LITERAL(41, 769, 30), // "on_pushButtonOsciStop_released"
QT_MOC_LITERAL(42, 800, 31), // "on_pushButtonOsciReset_released"
QT_MOC_LITERAL(43, 832, 27), // "on_pushButtonPanel_released"
QT_MOC_LITERAL(44, 860, 27), // "on_pushButtonScope_released"
QT_MOC_LITERAL(45, 888, 31), // "on_pushButtonHarmonics_released"
QT_MOC_LITERAL(46, 920, 29), // "on_pushButtonLogging_released"
QT_MOC_LITERAL(47, 950, 18), // "on_QWT500_released"
QT_MOC_LITERAL(48, 969, 33), // "on_pushButtonCalibration_rele..."
QT_MOC_LITERAL(49, 1003, 33), // "on_pushButtonInformation_rele..."
QT_MOC_LITERAL(50, 1037, 26), // "on_pushButtonExit_released"
QT_MOC_LITERAL(51, 1064, 26), // "on_pushButtonEVSE_released"
QT_MOC_LITERAL(52, 1091, 34), // "on_pushButtonStartLogging_rel..."
QT_MOC_LITERAL(53, 1126, 31), // "on_pushButtonPanelHome_released"
QT_MOC_LITERAL(54, 1158, 31), // "on_pushButtonScopeHome_released"
QT_MOC_LITERAL(55, 1190, 35), // "on_pushButtonHarmonicsHome_re..."
QT_MOC_LITERAL(56, 1226, 33), // "on_pushButtonLoggingHome_rele..."
QT_MOC_LITERAL(57, 1260, 32), // "on_pushButtonQWT500Home_released"
QT_MOC_LITERAL(58, 1293, 30), // "on_pushButtonEVSEHome_released"
QT_MOC_LITERAL(59, 1324, 37), // "on_pushButtonCalibrationHome_..."
QT_MOC_LITERAL(60, 1362, 35), // "on_comboBoxOsci_currentIndexC..."
QT_MOC_LITERAL(61, 1398, 38) // "on_comboBoxCalType_currentInd..."

    },
    "MainWindow\0updateOsci\0\0mDataHandler*\0"
    "L1\0L2\0L3\0LT\0openSerialPort\0closeSerialPort\0"
    "about\0writeData\0data\0readData\0osciTimeout\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "error\0changeStatusbarInformation\0"
    "newInformation\0updateLoggingInformation\0"
    "actual_line\0file_size\0newPSOMData\0"
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
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  254,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  263,    2, 0x08 /* Private */,
       9,    0,  264,    2, 0x08 /* Private */,
      10,    0,  265,    2, 0x08 /* Private */,
      11,    1,  266,    2, 0x08 /* Private */,
      13,    0,  269,    2, 0x08 /* Private */,
      14,    0,  270,    2, 0x08 /* Private */,
      15,    1,  271,    2, 0x08 /* Private */,
      18,    1,  274,    2, 0x08 /* Private */,
      20,    2,  277,    2, 0x08 /* Private */,
      23,    0,  282,    2, 0x08 /* Private */,
      24,    0,  283,    2, 0x08 /* Private */,
      25,    0,  284,    2, 0x08 /* Private */,
      26,    0,  285,    2, 0x08 /* Private */,
      27,    1,  286,    2, 0x08 /* Private */,
      29,    1,  289,    2, 0x08 /* Private */,
      30,    0,  292,    2, 0x08 /* Private */,
      31,    0,  293,    2, 0x08 /* Private */,
      32,    0,  294,    2, 0x08 /* Private */,
      33,    0,  295,    2, 0x08 /* Private */,
      34,    0,  296,    2, 0x08 /* Private */,
      35,    0,  297,    2, 0x08 /* Private */,
      36,    0,  298,    2, 0x08 /* Private */,
      37,    0,  299,    2, 0x08 /* Private */,
      38,    1,  300,    2, 0x08 /* Private */,
      40,    0,  303,    2, 0x08 /* Private */,
      41,    0,  304,    2, 0x08 /* Private */,
      42,    0,  305,    2, 0x08 /* Private */,
      43,    0,  306,    2, 0x08 /* Private */,
      44,    0,  307,    2, 0x08 /* Private */,
      45,    0,  308,    2, 0x08 /* Private */,
      46,    0,  309,    2, 0x08 /* Private */,
      47,    0,  310,    2, 0x08 /* Private */,
      48,    0,  311,    2, 0x08 /* Private */,
      49,    0,  312,    2, 0x08 /* Private */,
      50,    0,  313,    2, 0x08 /* Private */,
      51,    0,  314,    2, 0x08 /* Private */,
      52,    0,  315,    2, 0x08 /* Private */,
      53,    0,  316,    2, 0x08 /* Private */,
      54,    0,  317,    2, 0x08 /* Private */,
      55,    0,  318,    2, 0x08 /* Private */,
      56,    0,  319,    2, 0x08 /* Private */,
      57,    0,  320,    2, 0x08 /* Private */,
      58,    0,  321,    2, 0x08 /* Private */,
      59,    0,  322,    2, 0x08 /* Private */,
      60,    1,  323,    2, 0x08 /* Private */,
      61,    1,  326,    2, 0x08 /* Private */,
      60,    1,  329,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
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
    QMetaType::Void, QMetaType::QString,   28,
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
        case 1: _t->openSerialPort(); break;
        case 2: _t->closeSerialPort(); break;
        case 3: _t->about(); break;
        case 4: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->readData(); break;
        case 6: _t->osciTimeout(); break;
        case 7: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 8: _t->changeStatusbarInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->updateLoggingInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: _t->newPSOMData(); break;
        case 11: _t->on_pushButtonStartMeasurment_released(); break;
        case 12: _t->on_pushButtonStopMeasurment_released(); break;
        case 13: _t->on_pBStartHarmonics_released(); break;
        case 14: _t->on_cBHarmonicsType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_cBHarmonicsAxisStyle_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_pBSetHarmonicsCount_released(); break;
        case 17: _t->handleActionOscilloscope(); break;
        case 18: _t->handleActionHarmonics(); break;
        case 19: _t->on_pBTriggerHarmonics_released(); break;
        case 20: _t->on_pBClearEnergyL1_released(); break;
        case 21: _t->on_pBClearEnergyL2_released(); break;
        case 22: _t->on_pBClearEnergyL3_released(); break;
        case 23: _t->on_pBClearEnergyLT_released(); break;
        case 24: _t->on_comboBoxCirculationFreq_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_pushButtonOsciStart_released(); break;
        case 26: _t->on_pushButtonOsciStop_released(); break;
        case 27: _t->on_pushButtonOsciReset_released(); break;
        case 28: _t->on_pushButtonPanel_released(); break;
        case 29: _t->on_pushButtonScope_released(); break;
        case 30: _t->on_pushButtonHarmonics_released(); break;
        case 31: _t->on_pushButtonLogging_released(); break;
        case 32: _t->on_QWT500_released(); break;
        case 33: _t->on_pushButtonCalibration_released(); break;
        case 34: _t->on_pushButtonInformation_released(); break;
        case 35: _t->on_pushButtonExit_released(); break;
        case 36: _t->on_pushButtonEVSE_released(); break;
        case 37: _t->on_pushButtonStartLogging_released(); break;
        case 38: _t->on_pushButtonPanelHome_released(); break;
        case 39: _t->on_pushButtonScopeHome_released(); break;
        case 40: _t->on_pushButtonHarmonicsHome_released(); break;
        case 41: _t->on_pushButtonLoggingHome_released(); break;
        case 42: _t->on_pushButtonQWT500Home_released(); break;
        case 43: _t->on_pushButtonEVSEHome_released(); break;
        case 44: _t->on_pushButtonCalibrationHome_released(); break;
        case 45: _t->on_comboBoxOsci_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->on_comboBoxCalType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_comboBoxOsci_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
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
