/****************************************************************************
** Meta object code from reading C++ file 'partieoperative.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Test_Barquette/partieoperative.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partieoperative.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartieOperative_t {
    QByteArrayData data[9];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartieOperative_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartieOperative_t qt_meta_stringdata_PartieOperative = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PartieOperative"
QT_MOC_LITERAL(1, 16, 34), // "on_pushButton_NewBarquette_cl..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 37), // "on_pushButton_DebutProduction..."
QT_MOC_LITERAL(4, 90, 17), // "onTimerPo_TimeOut"
QT_MOC_LITERAL(5, 108, 16), // "onEjecteurTrouve"
QT_MOC_LITERAL(6, 125, 9), // "Barquette"
QT_MOC_LITERAL(7, 135, 10), // "pBarquette"
QT_MOC_LITERAL(8, 146, 37) // "on_pushButton_ArretProduction..."

    },
    "PartieOperative\0on_pushButton_NewBarquette_clicked\0"
    "\0on_pushButton_DebutProduction_clicked\0"
    "onTimerPo_TimeOut\0onEjecteurTrouve\0"
    "Barquette\0pBarquette\0"
    "on_pushButton_ArretProduction_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartieOperative[] = {

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
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void PartieOperative::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartieOperative *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_NewBarquette_clicked(); break;
        case 1: _t->on_pushButton_DebutProduction_clicked(); break;
        case 2: _t->onTimerPo_TimeOut(); break;
        case 3: _t->onEjecteurTrouve((*reinterpret_cast< Barquette(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_ArretProduction_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartieOperative::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PartieOperative.data,
    qt_meta_data_PartieOperative,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartieOperative::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartieOperative::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartieOperative.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartieOperative::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
