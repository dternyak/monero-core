/****************************************************************************
** Meta object code from reading C++ file 'WalletManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/WalletManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WalletManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletManager_t {
    QByteArrayData data[51];
    char stringdata0[549];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletManager_t qt_meta_stringdata_WalletManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WalletManager"
QT_MOC_LITERAL(1, 14, 12), // "walletOpened"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Wallet*"
QT_MOC_LITERAL(4, 36, 6), // "wallet"
QT_MOC_LITERAL(5, 43, 12), // "walletClosed"
QT_MOC_LITERAL(6, 56, 13), // "walletAddress"
QT_MOC_LITERAL(7, 70, 12), // "createWallet"
QT_MOC_LITERAL(8, 83, 4), // "path"
QT_MOC_LITERAL(9, 88, 8), // "password"
QT_MOC_LITERAL(10, 97, 8), // "language"
QT_MOC_LITERAL(11, 106, 7), // "testnet"
QT_MOC_LITERAL(12, 114, 10), // "openWallet"
QT_MOC_LITERAL(13, 125, 15), // "openWalletAsync"
QT_MOC_LITERAL(14, 141, 14), // "recoveryWallet"
QT_MOC_LITERAL(15, 156, 4), // "memo"
QT_MOC_LITERAL(16, 161, 13), // "restoreHeight"
QT_MOC_LITERAL(17, 175, 11), // "closeWallet"
QT_MOC_LITERAL(18, 187, 16), // "closeWalletAsync"
QT_MOC_LITERAL(19, 204, 12), // "walletExists"
QT_MOC_LITERAL(20, 217, 11), // "findWallets"
QT_MOC_LITERAL(21, 229, 11), // "errorString"
QT_MOC_LITERAL(22, 241, 10), // "moveWallet"
QT_MOC_LITERAL(23, 252, 3), // "src"
QT_MOC_LITERAL(24, 256, 3), // "dst"
QT_MOC_LITERAL(25, 260, 14), // "walletLanguage"
QT_MOC_LITERAL(26, 275, 6), // "locale"
QT_MOC_LITERAL(27, 282, 13), // "displayAmount"
QT_MOC_LITERAL(28, 296, 6), // "amount"
QT_MOC_LITERAL(29, 303, 16), // "amountFromString"
QT_MOC_LITERAL(30, 320, 16), // "amountFromDouble"
QT_MOC_LITERAL(31, 337, 20), // "maximumAllowedAmount"
QT_MOC_LITERAL(32, 358, 27), // "maximumAllowedAmountAsSting"
QT_MOC_LITERAL(33, 386, 14), // "paymentIdValid"
QT_MOC_LITERAL(34, 401, 10), // "payment_id"
QT_MOC_LITERAL(35, 412, 12), // "addressValid"
QT_MOC_LITERAL(36, 425, 7), // "address"
QT_MOC_LITERAL(37, 433, 20), // "paymentIdFromAddress"
QT_MOC_LITERAL(38, 454, 12), // "checkPayment"
QT_MOC_LITERAL(39, 467, 4), // "txid"
QT_MOC_LITERAL(40, 472, 5), // "txkey"
QT_MOC_LITERAL(41, 478, 14), // "daemon_address"
QT_MOC_LITERAL(42, 493, 14), // "urlToLocalPath"
QT_MOC_LITERAL(43, 508, 3), // "url"
QT_MOC_LITERAL(44, 512, 14), // "localPathToUrl"
QT_MOC_LITERAL(45, 527, 3), // "add"
QT_MOC_LITERAL(46, 531, 1), // "x"
QT_MOC_LITERAL(47, 533, 1), // "y"
QT_MOC_LITERAL(48, 535, 3), // "sub"
QT_MOC_LITERAL(49, 539, 4), // "addi"
QT_MOC_LITERAL(50, 544, 4) // "subi"

    },
    "WalletManager\0walletOpened\0\0Wallet*\0"
    "wallet\0walletClosed\0walletAddress\0"
    "createWallet\0path\0password\0language\0"
    "testnet\0openWallet\0openWalletAsync\0"
    "recoveryWallet\0memo\0restoreHeight\0"
    "closeWallet\0closeWalletAsync\0walletExists\0"
    "findWallets\0errorString\0moveWallet\0"
    "src\0dst\0walletLanguage\0locale\0"
    "displayAmount\0amount\0amountFromString\0"
    "amountFromDouble\0maximumAllowedAmount\0"
    "maximumAllowedAmountAsSting\0paymentIdValid\0"
    "payment_id\0addressValid\0address\0"
    "paymentIdFromAddress\0checkPayment\0"
    "txid\0txkey\0daemon_address\0urlToLocalPath\0"
    "url\0localPathToUrl\0add\0x\0y\0sub\0addi\0"
    "subi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       5,    1,  182,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    4,  185,    2, 0x02 /* Public */,
       7,    3,  194,    2, 0x22 /* Public | MethodCloned */,
      12,    3,  201,    2, 0x02 /* Public */,
      12,    2,  208,    2, 0x22 /* Public | MethodCloned */,
      13,    3,  213,    2, 0x02 /* Public */,
      13,    2,  220,    2, 0x22 /* Public | MethodCloned */,
      14,    4,  225,    2, 0x02 /* Public */,
      14,    3,  234,    2, 0x22 /* Public | MethodCloned */,
      14,    2,  241,    2, 0x22 /* Public | MethodCloned */,
      17,    1,  246,    2, 0x02 /* Public */,
      18,    1,  249,    2, 0x02 /* Public */,
      19,    1,  252,    2, 0x02 /* Public */,
      20,    1,  255,    2, 0x02 /* Public */,
      21,    0,  258,    2, 0x02 /* Public */,
      22,    2,  259,    2, 0x02 /* Public */,
      25,    1,  264,    2, 0x02 /* Public */,
      27,    1,  267,    2, 0x02 /* Public */,
      29,    1,  270,    2, 0x02 /* Public */,
      30,    1,  273,    2, 0x02 /* Public */,
      31,    0,  276,    2, 0x02 /* Public */,
      32,    0,  277,    2, 0x02 /* Public */,
      33,    1,  278,    2, 0x02 /* Public */,
      35,    2,  281,    2, 0x02 /* Public */,
      37,    2,  286,    2, 0x02 /* Public */,
      38,    4,  291,    2, 0x02 /* Public */,
      42,    1,  300,    2, 0x02 /* Public */,
      44,    1,  303,    2, 0x02 /* Public */,
      45,    2,  306,    2, 0x02 /* Public */,
      48,    2,  311,    2, 0x02 /* Public */,
      49,    2,  316,    2, 0x02 /* Public */,
      50,    2,  321,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,   11,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   11,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::ULongLong,    8,   15,   11,   16,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,   15,   11,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,    8,   15,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::QStringList, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::QString, QMetaType::QString,   26,
    QMetaType::QString, QMetaType::ULongLong,   28,
    QMetaType::ULongLong, QMetaType::QString,   28,
    QMetaType::ULongLong, QMetaType::Double,   28,
    QMetaType::ULongLong,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   34,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   36,   11,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,   36,   11,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   39,   40,   41,
    QMetaType::QString, QMetaType::QUrl,   43,
    QMetaType::QUrl, QMetaType::QString,    8,
    QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,   46,   47,
    QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,   46,   47,
    QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,   46,   47,
    QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,   46,   47,

       0        // eod
};

void WalletManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletManager *_t = static_cast<WalletManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletOpened((*reinterpret_cast< Wallet*(*)>(_a[1]))); break;
        case 1: _t->walletClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { Wallet* _r = _t->createWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 3: { Wallet* _r = _t->createWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 4: { Wallet* _r = _t->openWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 5: { Wallet* _r = _t->openWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 6: _t->openWalletAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->openWalletAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 9: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 10: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->closeWallet((*reinterpret_cast< Wallet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->closeWalletAsync((*reinterpret_cast< Wallet*(*)>(_a[1]))); break;
        case 13: { bool _r = _t->walletExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QStringList _r = _t->findWallets((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->moveWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->walletLanguage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->displayAmount((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { quint64 _r = _t->amountFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 20: { quint64 _r = _t->amountFromDouble((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 21: { quint64 _r = _t->maximumAllowedAmount();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->maximumAllowedAmountAsSting();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->paymentIdValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->addressValid((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->paymentIdFromAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->checkPayment((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->urlToLocalPath((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { QUrl _r = _t->localPathToUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 29: { quint64 _r = _t->add((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 30: { quint64 _r = _t->sub((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 31: { qint64 _r = _t->addi((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 32: { qint64 _r = _t->subi((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletManager::*_t)(Wallet * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletManager::walletOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletManager::walletClosed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletManager.data,
      qt_meta_data_WalletManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletManager.stringdata0))
        return static_cast<void*>(const_cast< WalletManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void WalletManager::walletOpened(Wallet * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletManager::walletClosed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
