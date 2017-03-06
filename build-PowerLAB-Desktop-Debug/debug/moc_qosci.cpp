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
    QByteArrayData data[10];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qOsci_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qOsci_t qt_meta_stringdata_qOsci = {
    {
QT_MOC_LITERAL(0, 0, 5), // "qOsci"
QT_MOC_LITERAL(1, 6, 12), // "setHarmonics"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "float*"
QT_MOC_LITERAL(4, 27, 4), // "data"
QT_MOC_LITERAL(5, 32, 4), // "freq"
QT_MOC_LITERAL(6, 37, 5), // "count"
QT_MOC_LITERAL(7, 43, 6), // "active"
QT_MOC_LITERAL(8, 50, 11), // "update_osci"
QT_MOC_LITERAL(9, 62, 16) // "realtimeDataSlot"

    },
    "qOsci\0setHarmonics\0\0float*\0data\0freq\0"
    "count\0active\0update_osci\0realtimeDataSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qOsci[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x0a /* Public */,
       8,    0,   38,    2, 0x08 /* Private */,
       9,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Float, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qOsci::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qOsci *_t = static_cast<qOsci *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setHarmonics((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->update_osci(); break;
        case 2: _t->realtimeDataSlot(); break;
        default: ;
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
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
