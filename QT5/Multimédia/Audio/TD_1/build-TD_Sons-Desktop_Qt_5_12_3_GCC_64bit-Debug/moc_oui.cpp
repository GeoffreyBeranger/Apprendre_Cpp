/****************************************************************************
** Meta object code from reading C++ file 'oui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TD_Sons/oui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_oui_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oui_t qt_meta_stringdata_oui = {
    {
QT_MOC_LITERAL(0, 0, 3), // "oui"
QT_MOC_LITERAL(1, 4, 32), // "on_pushButton_ChooseFile_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 39), // "on_pushButton_PlayExternalSou..."
QT_MOC_LITERAL(4, 78, 27), // "onQMediaPlayer_stateChanged"
QT_MOC_LITERAL(5, 106, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(6, 126, 5), // "state"
QT_MOC_LITERAL(7, 132, 20), // "onQMediaPlayer_error"
QT_MOC_LITERAL(8, 153, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(9, 173, 5) // "error"

    },
    "oui\0on_pushButton_ChooseFile_clicked\0"
    "\0on_pushButton_PlayExternalSound_clicked\0"
    "onQMediaPlayer_stateChanged\0"
    "QMediaPlayer::State\0state\0"
    "onQMediaPlayer_error\0QMediaPlayer::Error\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void oui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<oui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ChooseFile_clicked(); break;
        case 1: _t->on_pushButton_PlayExternalSound_clicked(); break;
        case 2: _t->onQMediaPlayer_stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->onQMediaPlayer_error((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject oui::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_oui.data,
    qt_meta_data_oui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *oui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oui.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
