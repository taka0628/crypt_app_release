/****************************************************************************
** Meta object code from reading C++ file 'sha2_wind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../crypt_qt/sha2_wind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sha2_wind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sha2_wind_t {
    QByteArrayData data[9];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sha2_wind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sha2_wind_t qt_meta_stringdata_sha2_wind = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sha2_wind"
QT_MOC_LITERAL(1, 10, 26), // "on_radioButton_224_toggled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "checked"
QT_MOC_LITERAL(4, 46, 26), // "on_radioButton_256_toggled"
QT_MOC_LITERAL(5, 73, 26), // "on_radioButton_384_toggled"
QT_MOC_LITERAL(6, 100, 26), // "on_radioButton_512_toggled"
QT_MOC_LITERAL(7, 127, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(8, 151, 4) // "arg1"

    },
    "sha2_wind\0on_radioButton_224_toggled\0"
    "\0checked\0on_radioButton_256_toggled\0"
    "on_radioButton_384_toggled\0"
    "on_radioButton_512_toggled\0"
    "on_lineEdit_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sha2_wind[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void sha2_wind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sha2_wind *_t = static_cast<sha2_wind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButton_224_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_radioButton_256_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_radioButton_384_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_radioButton_512_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject sha2_wind::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_sha2_wind.data,
      qt_meta_data_sha2_wind,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sha2_wind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sha2_wind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sha2_wind.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sha2_wind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
