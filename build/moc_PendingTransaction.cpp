/****************************************************************************
** Meta object code from reading C++ file 'PendingTransaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/PendingTransaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PendingTransaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PendingTransaction_t {
    QByteArrayData data[17];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PendingTransaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PendingTransaction_t qt_meta_stringdata_PendingTransaction = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PendingTransaction"
QT_MOC_LITERAL(1, 19, 6), // "commit"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "status"
QT_MOC_LITERAL(4, 34, 6), // "Status"
QT_MOC_LITERAL(5, 41, 11), // "errorString"
QT_MOC_LITERAL(6, 53, 6), // "amount"
QT_MOC_LITERAL(7, 60, 4), // "dust"
QT_MOC_LITERAL(8, 65, 3), // "fee"
QT_MOC_LITERAL(9, 69, 4), // "txid"
QT_MOC_LITERAL(10, 74, 7), // "txCount"
QT_MOC_LITERAL(11, 82, 9), // "Status_Ok"
QT_MOC_LITERAL(12, 92, 12), // "Status_Error"
QT_MOC_LITERAL(13, 105, 8), // "Priority"
QT_MOC_LITERAL(14, 114, 12), // "Priority_Low"
QT_MOC_LITERAL(15, 127, 15), // "Priority_Medium"
QT_MOC_LITERAL(16, 143, 13) // "Priority_High"

    },
    "PendingTransaction\0commit\0\0status\0"
    "Status\0errorString\0amount\0dust\0fee\0"
    "txid\0txCount\0Status_Ok\0Status_Error\0"
    "Priority\0Priority_Low\0Priority_Medium\0"
    "Priority_High"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PendingTransaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   20, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095009,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::ULongLong, 0x00095001,
       7, QMetaType::ULongLong, 0x00095001,
       8, QMetaType::ULongLong, 0x00095001,
       9, QMetaType::QStringList, 0x00095001,
      10, QMetaType::ULongLong, 0x00095001,

 // enums: name, flags, count, data
       4, 0x0,    2,   49,
      13, 0x0,    3,   53,

 // enum data: key, value
      11, uint(PendingTransaction::Status_Ok),
      12, uint(PendingTransaction::Status_Error),
      14, uint(PendingTransaction::Priority_Low),
      15, uint(PendingTransaction::Priority_Medium),
      16, uint(PendingTransaction::Priority_High),

       0        // eod
};

void PendingTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PendingTransaction *_t = static_cast<PendingTransaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->commit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PendingTransaction *_t = static_cast<PendingTransaction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 2: *reinterpret_cast< quint64*>(_v) = _t->amount(); break;
        case 3: *reinterpret_cast< quint64*>(_v) = _t->dust(); break;
        case 4: *reinterpret_cast< quint64*>(_v) = _t->fee(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->txid(); break;
        case 6: *reinterpret_cast< quint64*>(_v) = _t->txCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PendingTransaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PendingTransaction.data,
      qt_meta_data_PendingTransaction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PendingTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PendingTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PendingTransaction.stringdata0))
        return static_cast<void*>(const_cast< PendingTransaction*>(this));
    return QObject::qt_metacast(_clname);
}

int PendingTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
