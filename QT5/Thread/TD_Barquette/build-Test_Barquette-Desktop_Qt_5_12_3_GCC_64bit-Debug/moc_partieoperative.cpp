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
    QByteArrayData data[15];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartieOperative_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartieOperative_t qt_meta_stringdata_PartieOperative = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PartieOperative"
QT_MOC_LITERAL(1, 16, 13), // "CapteurChange"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "octet"
QT_MOC_LITERAL(4, 37, 14), // "EjecteurTrouve"
QT_MOC_LITERAL(5, 52, 34), // "on_pushButton_NewBarquette_cl..."
QT_MOC_LITERAL(6, 87, 37), // "on_pushButton_DebutProduction..."
QT_MOC_LITERAL(7, 125, 37), // "on_pushButton_ArretProduction..."
QT_MOC_LITERAL(8, 163, 17), // "onTimerPo_TimeOut"
QT_MOC_LITERAL(9, 181, 16), // "onEjecteurTrouve"
QT_MOC_LITERAL(10, 198, 33), // "on_checkBox_Capteur1_stateCha..."
QT_MOC_LITERAL(11, 232, 4), // "arg1"
QT_MOC_LITERAL(12, 237, 33), // "on_checkBox_Capteur2_stateCha..."
QT_MOC_LITERAL(13, 271, 33), // "on_checkBox_Capteur3_stateCha..."
QT_MOC_LITERAL(14, 305, 33) // "on_checkBox_Capteur4_stateCha..."

    },
    "PartieOperative\0CapteurChange\0\0octet\0"
    "EjecteurTrouve\0on_pushButton_NewBarquette_clicked\0"
    "on_pushButton_DebutProduction_clicked\0"
    "on_pushButton_ArretProduction_clicked\0"
    "onTimerPo_TimeOut\0onEjecteurTrouve\0"
    "on_checkBox_Capteur1_stateChanged\0"
    "arg1\0on_checkBox_Capteur2_stateChanged\0"
    "on_checkBox_Capteur3_stateChanged\0"
    "on_checkBox_Capteur4_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartieOperative[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void PartieOperative::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartieOperative *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CapteurChange((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->EjecteurTrouve(); break;
        case 2: _t->on_pushButton_NewBarquette_clicked(); break;
        case 3: _t->on_pushButton_DebutProduction_clicked(); break;
        case 4: _t->on_pushButton_ArretProduction_clicked(); break;
        case 5: _t->onTimerPo_TimeOut(); break;
        case 6: _t->onEjecteurTrouve(); break;
        case 7: _t->on_checkBox_Capteur1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_Capteur2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_Capteur3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_checkBox_Capteur4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartieOperative::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartieOperative::CapteurChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartieOperative::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartieOperative::EjecteurTrouve)) {
                *result = 1;
                return;
            }
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PartieOperative::CapteurChange(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartieOperative::EjecteurTrouve()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
