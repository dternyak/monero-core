/****************************************************************************
** Meta object code from reading C++ file 'TransactionInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/TransactionInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionInfo_t {
    QByteArrayData data[18];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionInfo_t qt_meta_stringdata_TransactionInfo = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionInfo"
QT_MOC_LITERAL(1, 16, 9), // "direction"
QT_MOC_LITERAL(2, 26, 9), // "Direction"
QT_MOC_LITERAL(3, 36, 9), // "isPending"
QT_MOC_LITERAL(4, 46, 8), // "isFailed"
QT_MOC_LITERAL(5, 55, 6), // "amount"
QT_MOC_LITERAL(6, 62, 12), // "atomicAmount"
QT_MOC_LITERAL(7, 75, 13), // "displayAmount"
QT_MOC_LITERAL(8, 89, 3), // "fee"
QT_MOC_LITERAL(9, 93, 11), // "blockHeight"
QT_MOC_LITERAL(10, 105, 4), // "hash"
QT_MOC_LITERAL(11, 110, 9), // "timestamp"
QT_MOC_LITERAL(12, 120, 4), // "date"
QT_MOC_LITERAL(13, 125, 4), // "time"
QT_MOC_LITERAL(14, 130, 9), // "paymentId"
QT_MOC_LITERAL(15, 140, 12), // "Direction_In"
QT_MOC_LITERAL(16, 153, 13), // "Direction_Out"
QT_MOC_LITERAL(17, 167, 14) // "Direction_Both"

    },
    "TransactionInfo\0direction\0Direction\0"
    "isPending\0isFailed\0amount\0atomicAmount\0"
    "displayAmount\0fee\0blockHeight\0hash\0"
    "timestamp\0date\0time\0paymentId\0"
    "Direction_In\0Direction_Out\0Direction_Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       1,   53, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, QMetaType::Bool, 0x00095001,
       4, QMetaType::Bool, 0x00095001,
       5, QMetaType::Double, 0x00095001,
       6, QMetaType::ULongLong, 0x00095001,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::QString, 0x00095001,
       9, QMetaType::ULongLong, 0x00095001,
      10, QMetaType::QString, 0x00095001,
      11, QMetaType::QDateTime, 0x00095001,
      12, QMetaType::QString, 0x00095001,
      13, QMetaType::QString, 0x00095001,
      14, QMetaType::QString, 0x00095001,

 // enums: name, flags, count, data
       2, 0x0,    3,   57,

 // enum data: key, value
      15, uint(TransactionInfo::Direction_In),
      16, uint(TransactionInfo::Direction_Out),
      17, uint(TransactionInfo::Direction_Both),

       0        // eod
};

void TransactionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        TransactionInfo *_t = static_cast<TransactionInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPending(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isFailed(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->amount(); break;
        case 4: *reinterpret_cast< quint64*>(_v) = _t->atomicAmount(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->displayAmount(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->fee(); break;
        case 7: *reinterpret_cast< quint64*>(_v) = _t->blockHeight(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->hash(); break;
        case 9: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->date(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->time(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->paymentId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TransactionInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TransactionInfo.data,
      qt_meta_data_TransactionInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransactionInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionInfo.stringdata0))
        return static_cast<void*>(const_cast< TransactionInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int TransactionInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
