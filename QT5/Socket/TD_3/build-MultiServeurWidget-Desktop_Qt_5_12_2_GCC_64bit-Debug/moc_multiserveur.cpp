/****************************************************************************
** Meta object code from reading C++ file 'multiserveur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MultiServeurWidget/multiserveur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiserveur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiServeur_t {
    QByteArrayData data[7];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiServeur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiServeur_t qt_meta_stringdata_MultiServeur = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MultiServeur"
QT_MOC_LITERAL(1, 13, 34), // "on_pushButtonLancerServeur_cl..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 26), // "onQTcpServer_newConnection"
QT_MOC_LITERAL(4, 76, 22), // "onQTcpSocket_readyRead"
QT_MOC_LITERAL(5, 99, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(6, 125, 34) // "onQProcess_readyReadStandardO..."

    },
    "MultiServeur\0on_pushButtonLancerServeur_clicked\0"
    "\0onQTcpServer_newConnection\0"
    "onQTcpSocket_readyRead\0onQTcpSocket_disconnected\0"
    "onQProcess_readyReadStandardOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiServeur[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiServeur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiServeur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonLancerServeur_clicked(); break;
        case 1: _t->onQTcpServer_newConnection(); break;
        case 2: _t->onQTcpSocket_readyRead(); break;
        case 3: _t->onQTcpSocket_disconnected(); break;
        case 4: _t->onQProcess_readyReadStandardOutput(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MultiServeur::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MultiServeur.data,
    qt_meta_data_MultiServeur,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultiServeur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiServeur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiServeur.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MultiServeur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
