/****************************************************************************
** Meta object code from reading C++ file 'Wallet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/Wallet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wallet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Wallet_t {
    QByteArrayData data[84];
    char stringdata0[1168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wallet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wallet_t qt_meta_stringdata_Wallet = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Wallet"
QT_MOC_LITERAL(1, 7, 7), // "updated"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "refreshed"
QT_MOC_LITERAL(4, 26, 10), // "moneySpent"
QT_MOC_LITERAL(5, 37, 4), // "txId"
QT_MOC_LITERAL(6, 42, 6), // "amount"
QT_MOC_LITERAL(7, 49, 13), // "moneyReceived"
QT_MOC_LITERAL(8, 63, 8), // "newBlock"
QT_MOC_LITERAL(9, 72, 6), // "height"
QT_MOC_LITERAL(10, 79, 19), // "historyModelChanged"
QT_MOC_LITERAL(11, 99, 18), // "transactionCreated"
QT_MOC_LITERAL(12, 118, 19), // "PendingTransaction*"
QT_MOC_LITERAL(13, 138, 11), // "transaction"
QT_MOC_LITERAL(14, 150, 7), // "address"
QT_MOC_LITERAL(15, 158, 9), // "paymentId"
QT_MOC_LITERAL(16, 168, 10), // "mixinCount"
QT_MOC_LITERAL(17, 179, 15), // "setSeedLanguage"
QT_MOC_LITERAL(18, 195, 4), // "lang"
QT_MOC_LITERAL(19, 200, 11), // "setPassword"
QT_MOC_LITERAL(20, 212, 8), // "password"
QT_MOC_LITERAL(21, 221, 5), // "store"
QT_MOC_LITERAL(22, 227, 4), // "path"
QT_MOC_LITERAL(23, 232, 4), // "init"
QT_MOC_LITERAL(24, 237, 13), // "daemonAddress"
QT_MOC_LITERAL(25, 251, 21), // "upperTransactionLimit"
QT_MOC_LITERAL(26, 273, 12), // "isRecovering"
QT_MOC_LITERAL(27, 286, 13), // "restoreHeight"
QT_MOC_LITERAL(28, 300, 9), // "initAsync"
QT_MOC_LITERAL(29, 310, 15), // "connectToDaemon"
QT_MOC_LITERAL(30, 326, 16), // "setTrustedDaemon"
QT_MOC_LITERAL(31, 343, 3), // "arg"
QT_MOC_LITERAL(32, 347, 7), // "balance"
QT_MOC_LITERAL(33, 355, 15), // "unlockedBalance"
QT_MOC_LITERAL(34, 371, 16), // "blockChainHeight"
QT_MOC_LITERAL(35, 388, 22), // "daemonBlockChainHeight"
QT_MOC_LITERAL(36, 411, 28), // "daemonBlockChainTargetHeight"
QT_MOC_LITERAL(37, 440, 7), // "refresh"
QT_MOC_LITERAL(38, 448, 12), // "refreshAsync"
QT_MOC_LITERAL(39, 461, 22), // "setAutoRefreshInterval"
QT_MOC_LITERAL(40, 484, 7), // "seconds"
QT_MOC_LITERAL(41, 492, 19), // "autoRefreshInterval"
QT_MOC_LITERAL(42, 512, 17), // "createTransaction"
QT_MOC_LITERAL(43, 530, 8), // "dst_addr"
QT_MOC_LITERAL(44, 539, 10), // "payment_id"
QT_MOC_LITERAL(45, 550, 11), // "mixin_count"
QT_MOC_LITERAL(46, 562, 28), // "PendingTransaction::Priority"
QT_MOC_LITERAL(47, 591, 8), // "priority"
QT_MOC_LITERAL(48, 600, 22), // "createTransactionAsync"
QT_MOC_LITERAL(49, 623, 20), // "createTransactionAll"
QT_MOC_LITERAL(50, 644, 25), // "createTransactionAllAsync"
QT_MOC_LITERAL(51, 670, 31), // "createSweepUnmixableTransaction"
QT_MOC_LITERAL(52, 702, 36), // "createSweepUnmixableTransacti..."
QT_MOC_LITERAL(53, 739, 18), // "disposeTransaction"
QT_MOC_LITERAL(54, 758, 1), // "t"
QT_MOC_LITERAL(55, 760, 17), // "generatePaymentId"
QT_MOC_LITERAL(56, 778, 17), // "integratedAddress"
QT_MOC_LITERAL(57, 796, 11), // "signMessage"
QT_MOC_LITERAL(58, 808, 7), // "message"
QT_MOC_LITERAL(59, 816, 8), // "filename"
QT_MOC_LITERAL(60, 825, 19), // "verifySignedMessage"
QT_MOC_LITERAL(61, 845, 9), // "signature"
QT_MOC_LITERAL(62, 855, 11), // "setUserNote"
QT_MOC_LITERAL(63, 867, 4), // "txid"
QT_MOC_LITERAL(64, 872, 4), // "note"
QT_MOC_LITERAL(65, 877, 11), // "getUserNote"
QT_MOC_LITERAL(66, 889, 8), // "getTxKey"
QT_MOC_LITERAL(67, 898, 4), // "seed"
QT_MOC_LITERAL(68, 903, 12), // "seedLanguage"
QT_MOC_LITERAL(69, 916, 6), // "status"
QT_MOC_LITERAL(70, 923, 6), // "Status"
QT_MOC_LITERAL(71, 930, 9), // "connected"
QT_MOC_LITERAL(72, 940, 16), // "ConnectionStatus"
QT_MOC_LITERAL(73, 957, 12), // "synchronized"
QT_MOC_LITERAL(74, 970, 11), // "errorString"
QT_MOC_LITERAL(75, 982, 7), // "history"
QT_MOC_LITERAL(76, 990, 19), // "TransactionHistory*"
QT_MOC_LITERAL(77, 1010, 12), // "historyModel"
QT_MOC_LITERAL(78, 1023, 34), // "TransactionHistorySortFilterM..."
QT_MOC_LITERAL(79, 1058, 9), // "Status_Ok"
QT_MOC_LITERAL(80, 1068, 12), // "Status_Error"
QT_MOC_LITERAL(81, 1081, 26), // "ConnectionStatus_Connected"
QT_MOC_LITERAL(82, 1108, 29), // "ConnectionStatus_Disconnected"
QT_MOC_LITERAL(83, 1138, 29) // "ConnectionStatus_WrongVersion"

    },
    "Wallet\0updated\0\0refreshed\0moneySpent\0"
    "txId\0amount\0moneyReceived\0newBlock\0"
    "height\0historyModelChanged\0"
    "transactionCreated\0PendingTransaction*\0"
    "transaction\0address\0paymentId\0mixinCount\0"
    "setSeedLanguage\0lang\0setPassword\0"
    "password\0store\0path\0init\0daemonAddress\0"
    "upperTransactionLimit\0isRecovering\0"
    "restoreHeight\0initAsync\0connectToDaemon\0"
    "setTrustedDaemon\0arg\0balance\0"
    "unlockedBalance\0blockChainHeight\0"
    "daemonBlockChainHeight\0"
    "daemonBlockChainTargetHeight\0refresh\0"
    "refreshAsync\0setAutoRefreshInterval\0"
    "seconds\0autoRefreshInterval\0"
    "createTransaction\0dst_addr\0payment_id\0"
    "mixin_count\0PendingTransaction::Priority\0"
    "priority\0createTransactionAsync\0"
    "createTransactionAll\0createTransactionAllAsync\0"
    "createSweepUnmixableTransaction\0"
    "createSweepUnmixableTransactionAsync\0"
    "disposeTransaction\0t\0generatePaymentId\0"
    "integratedAddress\0signMessage\0message\0"
    "filename\0verifySignedMessage\0signature\0"
    "setUserNote\0txid\0note\0getUserNote\0"
    "getTxKey\0seed\0seedLanguage\0status\0"
    "Status\0connected\0ConnectionStatus\0"
    "synchronized\0errorString\0history\0"
    "TransactionHistory*\0historyModel\0"
    "TransactionHistorySortFilterModel*\0"
    "Status_Ok\0Status_Error\0"
    "ConnectionStatus_Connected\0"
    "ConnectionStatus_Disconnected\0"
    "ConnectionStatus_WrongVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wallet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
      12,  410, // properties
       2,  458, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x06 /* Public */,
       3,    0,  235,    2, 0x06 /* Public */,
       4,    2,  236,    2, 0x06 /* Public */,
       7,    2,  241,    2, 0x06 /* Public */,
       8,    1,  246,    2, 0x06 /* Public */,
      10,    0,  249,    2, 0x06 /* Public */,
      11,    4,  250,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      17,    1,  259,    2, 0x02 /* Public */,
      19,    1,  262,    2, 0x02 /* Public */,
      21,    1,  265,    2, 0x02 /* Public */,
      21,    0,  268,    2, 0x22 /* Public | MethodCloned */,
      23,    4,  269,    2, 0x02 /* Public */,
      23,    3,  278,    2, 0x22 /* Public | MethodCloned */,
      23,    2,  285,    2, 0x22 /* Public | MethodCloned */,
      28,    4,  290,    2, 0x02 /* Public */,
      28,    3,  299,    2, 0x22 /* Public | MethodCloned */,
      28,    2,  306,    2, 0x22 /* Public | MethodCloned */,
      29,    0,  311,    2, 0x02 /* Public */,
      30,    1,  312,    2, 0x02 /* Public */,
      32,    0,  315,    2, 0x02 /* Public */,
      33,    0,  316,    2, 0x02 /* Public */,
      34,    0,  317,    2, 0x02 /* Public */,
      35,    0,  318,    2, 0x02 /* Public */,
      36,    0,  319,    2, 0x02 /* Public */,
      37,    0,  320,    2, 0x02 /* Public */,
      38,    0,  321,    2, 0x02 /* Public */,
      39,    1,  322,    2, 0x02 /* Public */,
      41,    0,  325,    2, 0x02 /* Public */,
      42,    5,  326,    2, 0x02 /* Public */,
      48,    5,  337,    2, 0x02 /* Public */,
      49,    4,  348,    2, 0x02 /* Public */,
      50,    4,  357,    2, 0x02 /* Public */,
      51,    0,  366,    2, 0x02 /* Public */,
      52,    0,  367,    2, 0x02 /* Public */,
      53,    1,  368,    2, 0x02 /* Public */,
      55,    0,  371,    2, 0x02 /* Public */,
      56,    1,  372,    2, 0x02 /* Public */,
      57,    2,  375,    2, 0x02 /* Public */,
      57,    1,  380,    2, 0x22 /* Public | MethodCloned */,
      60,    4,  383,    2, 0x02 /* Public */,
      60,    3,  392,    2, 0x22 /* Public | MethodCloned */,
      62,    2,  399,    2, 0x02 /* Public */,
      65,    1,  404,    2, 0x02 /* Public */,
      66,    1,  407,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::ULongLong,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   13,   14,   15,   16,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Bool, QMetaType::QString,   20,
    QMetaType::Bool, QMetaType::QString,   22,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool, QMetaType::ULongLong,   24,   25,   26,   27,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool,   24,   25,   26,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool, QMetaType::ULongLong,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool,   24,   25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,   24,   25,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Int,
    0x80000000 | 12, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong, QMetaType::UInt, 0x80000000 | 46,   43,   44,    6,   45,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong, QMetaType::UInt, 0x80000000 | 46,   43,   44,    6,   45,   47,
    0x80000000 | 12, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 46,   43,   44,   45,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 46,   43,   44,   45,   47,
    0x80000000 | 12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   54,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,   58,   59,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   58,   14,   61,   59,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   58,   14,   61,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   63,   64,
    QMetaType::QString, QMetaType::QString,   63,
    QMetaType::QString, QMetaType::QString,   63,

 // properties: name, type, flags
      67, QMetaType::QString, 0x00095001,
      68, QMetaType::QString, 0x00095001,
      69, 0x80000000 | 70, 0x00095009,
      71, 0x80000000 | 72, 0x00095009,
      73, QMetaType::Bool, 0x00095001,
      74, QMetaType::QString, 0x00095001,
      14, QMetaType::QString, 0x00095001,
      32, QMetaType::ULongLong, 0x00095001,
      33, QMetaType::ULongLong, 0x00095001,
      75, 0x80000000 | 76, 0x00095009,
      15, QMetaType::QString, 0x00095103,
      77, 0x80000000 | 78, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       5,

 // enums: name, flags, count, data
      70, 0x0,    2,  466,
      72, 0x0,    3,  470,

 // enum data: key, value
      79, uint(Wallet::Status_Ok),
      80, uint(Wallet::Status_Error),
      81, uint(Wallet::ConnectionStatus_Connected),
      82, uint(Wallet::ConnectionStatus_Disconnected),
      83, uint(Wallet::ConnectionStatus_WrongVersion),

       0        // eod
};

void Wallet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->refreshed(); break;
        case 2: _t->moneySpent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 3: _t->moneyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->newBlock((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 5: _t->historyModelChanged(); break;
        case 6: _t->transactionCreated((*reinterpret_cast< PendingTransaction*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 7: _t->setSeedLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { bool _r = _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->store((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->store();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 15: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 17: { bool _r = _t->connectToDaemon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setTrustedDaemon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: { quint64 _r = _t->balance();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 20: { quint64 _r = _t->unlockedBalance();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 21: { quint64 _r = _t->blockChainHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 22: { quint64 _r = _t->daemonBlockChainHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 23: { quint64 _r = _t->daemonBlockChainTargetHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->refresh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->refreshAsync(); break;
        case 26: _t->setAutoRefreshInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: { int _r = _t->autoRefreshInterval();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { PendingTransaction* _r = _t->createTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = _r; }  break;
        case 29: _t->createTransactionAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[5]))); break;
        case 30: { PendingTransaction* _r = _t->createTransactionAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = _r; }  break;
        case 31: _t->createTransactionAllAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[4]))); break;
        case 32: { PendingTransaction* _r = _t->createSweepUnmixableTransaction();
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = _r; }  break;
        case 33: _t->createSweepUnmixableTransactionAsync(); break;
        case 34: _t->disposeTransaction((*reinterpret_cast< PendingTransaction*(*)>(_a[1]))); break;
        case 35: { QString _r = _t->generatePaymentId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->integratedAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->signMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->signMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->verifySignedMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->verifySignedMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->setUserNote((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { QString _r = _t->getUserNote((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->getTxKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PendingTransaction* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PendingTransaction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Wallet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::refreshed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(const QString & , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::moneySpent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(const QString & , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::moneyReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::newBlock)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::historyModelChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(PendingTransaction * , QString , QString , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wallet::transactionCreated)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSeed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSeedLanguage(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 3: *reinterpret_cast< ConnectionStatus*>(_v) = _t->connected(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->synchronized(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 7: *reinterpret_cast< quint64*>(_v) = _t->balance(); break;
        case 8: *reinterpret_cast< quint64*>(_v) = _t->unlockedBalance(); break;
        case 9: *reinterpret_cast< TransactionHistory**>(_v) = _t->history(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->paymentId(); break;
        case 11: *reinterpret_cast< TransactionHistorySortFilterModel**>(_v) = _t->historyModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setPaymentId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Wallet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Wallet.data,
      qt_meta_data_Wallet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Wallet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wallet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Wallet.stringdata0))
        return static_cast<void*>(const_cast< Wallet*>(this));
    return QObject::qt_metacast(_clname);
}

int Wallet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Wallet::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Wallet::refreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Wallet::moneySpent(const QString & _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Wallet::moneyReceived(const QString & _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Wallet::newBlock(quint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Wallet::historyModelChanged()const
{
    QMetaObject::activate(const_cast< Wallet *>(this), &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Wallet::transactionCreated(PendingTransaction * _t1, QString _t2, QString _t3, quint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
