/****************************************************************************
** Meta object code from reading C++ file 'psomQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PSOM Connect/source/psomQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psomQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PSOM_t {
    QByteArrayData data[20];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PSOM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PSOM_t qt_meta_stringdata_PSOM = {
    {
QT_MOC_LITERAL(0, 0, 4), // "PSOM"
QT_MOC_LITERAL(1, 5, 13), // "statusBarInfo"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "information"
QT_MOC_LITERAL(4, 32, 12), // "stateChanged"
QT_MOC_LITERAL(5, 45, 11), // "newPSOMData"
QT_MOC_LITERAL(6, 57, 16), // "newHarmonicsData"
QT_MOC_LITERAL(7, 74, 6), // "float*"
QT_MOC_LITERAL(8, 81, 4), // "data"
QT_MOC_LITERAL(9, 86, 4), // "freq"
QT_MOC_LITERAL(10, 91, 5), // "count"
QT_MOC_LITERAL(11, 97, 6), // "active"
QT_MOC_LITERAL(12, 104, 23), // "harmonicMeasurmentReady"
QT_MOC_LITERAL(13, 128, 14), // "m_timerTimeout"
QT_MOC_LITERAL(14, 143, 20), // "assignEntirePSOMData"
QT_MOC_LITERAL(15, 164, 9), // "uint32_t*"
QT_MOC_LITERAL(16, 174, 4), // "int&"
QT_MOC_LITERAL(17, 179, 9), // "dataCount"
QT_MOC_LITERAL(18, 189, 20), // "statusBarInfoHandler"
QT_MOC_LITERAL(19, 210, 12) // "psomAnswered"

    },
    "PSOM\0statusBarInfo\0\0information\0"
    "stateChanged\0newPSOMData\0newHarmonicsData\0"
    "float*\0data\0freq\0count\0active\0"
    "harmonicMeasurmentReady\0m_timerTimeout\0"
    "assignEntirePSOMData\0uint32_t*\0int&\0"
    "dataCount\0statusBarInfoHandler\0"
    "psomAnswered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PSOM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    4,   64,    2, 0x06 /* Public */,
      12,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   74,    2, 0x08 /* Private */,
      14,    2,   75,    2, 0x08 /* Private */,
      18,    1,   80,    2, 0x08 /* Private */,
      19,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Float, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    8,   17,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void PSOM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PSOM *_t = static_cast<PSOM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusBarInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stateChanged(); break;
        case 2: _t->newPSOMData(); break;
        case 3: _t->newHarmonicsData((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->harmonicMeasurmentReady(); break;
        case 5: _t->m_timerTimeout(); break;
        case 6: _t->assignEntirePSOMData((*reinterpret_cast< uint32_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->statusBarInfoHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->psomAnswered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PSOM::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM::statusBarInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PSOM::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PSOM::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM::newPSOMData)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PSOM::*_t)(float * , float , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM::newHarmonicsData)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PSOM::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM::harmonicMeasurmentReady)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PSOM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PSOM.data,
      qt_meta_data_PSOM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PSOM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PSOM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PSOM.stringdata0))
        return static_cast<void*>(const_cast< PSOM*>(this));
    return QObject::qt_metacast(_clname);
}

int PSOM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PSOM::statusBarInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PSOM::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PSOM::newPSOMData()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PSOM::newHarmonicsData(float * _t1, float _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PSOM::harmonicMeasurmentReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
