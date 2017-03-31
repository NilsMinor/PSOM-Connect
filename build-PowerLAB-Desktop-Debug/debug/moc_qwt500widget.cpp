/****************************************************************************
** Meta object code from reading C++ file 'qwt500widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QWT500/QWT500/qwt500widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt500widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWT500Widget_t {
    QByteArrayData data[19];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWT500Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWT500Widget_t qt_meta_stringdata_QWT500Widget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QWT500Widget"
QT_MOC_LITERAL(1, 13, 15), // "newDataMeasured"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "mDataHandler*"
QT_MOC_LITERAL(4, 44, 2), // "L1"
QT_MOC_LITERAL(5, 47, 2), // "L2"
QT_MOC_LITERAL(6, 50, 2), // "L3"
QT_MOC_LITERAL(7, 53, 2), // "LT"
QT_MOC_LITERAL(8, 56, 34), // "on_pushButtonQWT500Search_rel..."
QT_MOC_LITERAL(9, 91, 33), // "on_pushButtonQWT500Start_rele..."
QT_MOC_LITERAL(10, 125, 33), // "on_pushButtonQWT500Reset_rele..."
QT_MOC_LITERAL(11, 159, 49), // "on_comboBoxQWT500CurrentRange..."
QT_MOC_LITERAL(12, 209, 4), // "arg1"
QT_MOC_LITERAL(13, 214, 49), // "on_comboBoxQWT500VoltageRange..."
QT_MOC_LITERAL(14, 264, 43), // "on_comboBoxQWT500Period_curre..."
QT_MOC_LITERAL(15, 308, 26), // "on_pushButtonInfo_released"
QT_MOC_LITERAL(16, 335, 16), // "newDataAvailable"
QT_MOC_LITERAL(17, 352, 42), // "on_comboBoxQWT500Style_curren..."
QT_MOC_LITERAL(18, 395, 5) // "index"

    },
    "QWT500Widget\0newDataMeasured\0\0"
    "mDataHandler*\0L1\0L2\0L3\0LT\0"
    "on_pushButtonQWT500Search_released\0"
    "on_pushButtonQWT500Start_released\0"
    "on_pushButtonQWT500Reset_released\0"
    "on_comboBoxQWT500CurrentRange_currentIndexChanged\0"
    "arg1\0on_comboBoxQWT500VoltageRange_currentIndexChanged\0"
    "on_comboBoxQWT500Period_currentIndexChanged\0"
    "on_pushButtonInfo_released\0newDataAvailable\0"
    "on_comboBoxQWT500Style_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWT500Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void QWT500Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWT500Widget *_t = static_cast<QWT500Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newDataMeasured((*reinterpret_cast< mDataHandler*(*)>(_a[1])),(*reinterpret_cast< mDataHandler*(*)>(_a[2])),(*reinterpret_cast< mDataHandler*(*)>(_a[3])),(*reinterpret_cast< mDataHandler*(*)>(_a[4]))); break;
        case 1: _t->on_pushButtonQWT500Search_released(); break;
        case 2: _t->on_pushButtonQWT500Start_released(); break;
        case 3: _t->on_pushButtonQWT500Reset_released(); break;
        case 4: _t->on_comboBoxQWT500CurrentRange_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBoxQWT500VoltageRange_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxQWT500Period_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonInfo_released(); break;
        case 8: _t->newDataAvailable(); break;
        case 9: _t->on_comboBoxQWT500Style_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
            typedef void (QWT500Widget::*_t)(mDataHandler * , mDataHandler * , mDataHandler * , mDataHandler * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWT500Widget::newDataMeasured)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QWT500Widget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QWT500Widget.data,
      qt_meta_data_QWT500Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWT500Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWT500Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWT500Widget.stringdata0))
        return static_cast<void*>(const_cast< QWT500Widget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QWT500Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QWT500Widget::newDataMeasured(mDataHandler * _t1, mDataHandler * _t2, mDataHandler * _t3, mDataHandler * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
