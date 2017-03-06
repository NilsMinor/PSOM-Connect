/****************************************************************************
** Meta object code from reading C++ file 'psomQt_HAL.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PowerLAB/source/psomQt_HAL.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psomQt_HAL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PSOM_HAL_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PSOM_HAL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PSOM_HAL_t qt_meta_stringdata_PSOM_HAL = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PSOM_HAL"
QT_MOC_LITERAL(1, 9, 12), // "stateChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "newPSOMData"
QT_MOC_LITERAL(4, 35, 9), // "uint32_t*"
QT_MOC_LITERAL(5, 45, 4), // "data"
QT_MOC_LITERAL(6, 50, 4), // "int&"
QT_MOC_LITERAL(7, 55, 9), // "dataCount"
QT_MOC_LITERAL(8, 65, 13), // "statusBarInfo"
QT_MOC_LITERAL(9, 79, 11), // "information"
QT_MOC_LITERAL(10, 91, 12), // "psomAnswered"
QT_MOC_LITERAL(11, 104, 17), // "recvNewSerialData"
QT_MOC_LITERAL(12, 122, 20), // "newSerialDataHandler"
QT_MOC_LITERAL(13, 143, 25) // "newSerialDataHandlerLinux"

    },
    "PSOM_HAL\0stateChanged\0\0newPSOMData\0"
    "uint32_t*\0data\0int&\0dataCount\0"
    "statusBarInfo\0information\0psomAnswered\0"
    "recvNewSerialData\0newSerialDataHandler\0"
    "newSerialDataHandlerLinux"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PSOM_HAL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       8,    1,   55,    2, 0x06 /* Public */,
      10,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x08 /* Private */,
      12,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray,    5,

       0        // eod
};

void PSOM_HAL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PSOM_HAL *_t = static_cast<PSOM_HAL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->newPSOMData((*reinterpret_cast< uint32_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->statusBarInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->psomAnswered(); break;
        case 4: _t->recvNewSerialData(); break;
        case 5: _t->newSerialDataHandler((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->newSerialDataHandlerLinux((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PSOM_HAL::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM_HAL::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PSOM_HAL::*_t)(uint32_t * , int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM_HAL::newPSOMData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PSOM_HAL::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM_HAL::statusBarInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PSOM_HAL::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PSOM_HAL::psomAnswered)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PSOM_HAL::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PSOM_HAL.data,
      qt_meta_data_PSOM_HAL,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PSOM_HAL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PSOM_HAL::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PSOM_HAL.stringdata0))
        return static_cast<void*>(const_cast< PSOM_HAL*>(this));
    return QObject::qt_metacast(_clname);
}

int PSOM_HAL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PSOM_HAL::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PSOM_HAL::newPSOMData(uint32_t * _t1, int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PSOM_HAL::statusBarInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PSOM_HAL::psomAnswered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
