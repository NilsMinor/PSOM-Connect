/****************************************************************************
** Meta object code from reading C++ file 'qosci.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PowerLAB/qOsci/qosci.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qosci.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qOsci_t {
    QByteArrayData data[16];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qOsci_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qOsci_t qt_meta_stringdata_qOsci = {
    {
QT_MOC_LITERAL(0, 0, 5), // "qOsci"
QT_MOC_LITERAL(1, 6, 12), // "osci_timeout"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "setHarmonics"
QT_MOC_LITERAL(4, 33, 6), // "float*"
QT_MOC_LITERAL(5, 40, 4), // "data"
QT_MOC_LITERAL(6, 45, 4), // "freq"
QT_MOC_LITERAL(7, 50, 5), // "count"
QT_MOC_LITERAL(8, 56, 6), // "active"
QT_MOC_LITERAL(9, 63, 10), // "updateOsci"
QT_MOC_LITERAL(10, 74, 13), // "mDataHandler*"
QT_MOC_LITERAL(11, 88, 2), // "L1"
QT_MOC_LITERAL(12, 91, 2), // "L2"
QT_MOC_LITERAL(13, 94, 2), // "L3"
QT_MOC_LITERAL(14, 97, 2), // "LT"
QT_MOC_LITERAL(15, 100, 16) // "realtimeDataSlot"

    },
    "qOsci\0osci_timeout\0\0setHarmonics\0"
    "float*\0data\0freq\0count\0active\0updateOsci\0"
    "mDataHandler*\0L1\0L2\0L3\0LT\0realtimeDataSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qOsci[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   35,    2, 0x0a /* Public */,
       9,    4,   44,    2, 0x0a /* Public */,
      15,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Float, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,   11,   12,   13,   14,
    QMetaType::Void,

       0        // eod
};

void qOsci::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qOsci *_t = static_cast<qOsci *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->osci_timeout(); break;
        case 1: _t->setHarmonics((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->updateOsci((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 3: _t->realtimeDataSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (qOsci::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qOsci::osci_timeout)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qOsci::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qOsci.data,
      qt_meta_data_qOsci,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qOsci::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qOsci::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qOsci.stringdata0))
        return static_cast<void*>(const_cast< qOsci*>(this));
    return QWidget::qt_metacast(_clname);
}

int qOsci::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void qOsci::osci_timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
