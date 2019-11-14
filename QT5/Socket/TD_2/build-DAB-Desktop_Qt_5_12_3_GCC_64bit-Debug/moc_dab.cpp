/****************************************************************************
** Meta object code from reading C++ file 'dab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DAB/dab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dab_t {
    QByteArrayData data[8];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dab_t qt_meta_stringdata_Dab = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Dab"
QT_MOC_LITERAL(1, 4, 31), // "on_pushButton_Connexion_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "onQTcpSocket_connected"
QT_MOC_LITERAL(4, 60, 25), // "onQtcpSocket_disconnected"
QT_MOC_LITERAL(5, 86, 22), // "onQTcpSocket_readyRead"
QT_MOC_LITERAL(6, 109, 34), // "on_pushButton_NumeroCompte_cl..."
QT_MOC_LITERAL(7, 144, 27) // "on_pushButton_Envoi_clicked"

    },
    "Dab\0on_pushButton_Connexion_clicked\0"
    "\0onQTcpSocket_connected\0"
    "onQtcpSocket_disconnected\0"
    "onQTcpSocket_readyRead\0"
    "on_pushButton_NumeroCompte_clicked\0"
    "on_pushButton_Envoi_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Connexion_clicked(); break;
        case 1: _t->onQTcpSocket_connected(); break;
        case 2: _t->onQtcpSocket_disconnected(); break;
        case 3: _t->onQTcpSocket_readyRead(); break;
        case 4: _t->on_pushButton_NumeroCompte_clicked(); break;
        case 5: _t->on_pushButton_Envoi_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Dab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Dab.data,
    qt_meta_data_Dab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Dab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
