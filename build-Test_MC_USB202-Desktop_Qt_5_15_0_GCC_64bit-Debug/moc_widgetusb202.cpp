/****************************************************************************
** Meta object code from reading C++ file 'widgetusb202.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Test_MC_USB202/widgetusb202.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetusb202.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetUSB202_t {
    QByteArrayData data[13];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetUSB202_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetUSB202_t qt_meta_stringdata_WidgetUSB202 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WidgetUSB202"
QT_MOC_LITERAL(1, 13, 28), // "on_checkBoxDIO0_stateChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "arg1"
QT_MOC_LITERAL(4, 48, 28), // "on_checkBoxDIO1_stateChanged"
QT_MOC_LITERAL(5, 77, 28), // "on_checkBoxDIO2_stateChanged"
QT_MOC_LITERAL(6, 106, 28), // "on_checkBoxDIO3_stateChanged"
QT_MOC_LITERAL(7, 135, 28), // "on_checkBoxDIO4_stateChanged"
QT_MOC_LITERAL(8, 164, 28), // "on_checkBoxDIO5_stateChanged"
QT_MOC_LITERAL(9, 193, 28), // "on_checkBoxDIO6_stateChanged"
QT_MOC_LITERAL(10, 222, 28), // "on_checkBoxDIO7_stateChanged"
QT_MOC_LITERAL(11, 251, 30), // "on_pushButtonClignoter_clicked"
QT_MOC_LITERAL(12, 282, 9) // "clignoter"

    },
    "WidgetUSB202\0on_checkBoxDIO0_stateChanged\0"
    "\0arg1\0on_checkBoxDIO1_stateChanged\0"
    "on_checkBoxDIO2_stateChanged\0"
    "on_checkBoxDIO3_stateChanged\0"
    "on_checkBoxDIO4_stateChanged\0"
    "on_checkBoxDIO5_stateChanged\0"
    "on_checkBoxDIO6_stateChanged\0"
    "on_checkBoxDIO7_stateChanged\0"
    "on_pushButtonClignoter_clicked\0clignoter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetUSB202[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetUSB202::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetUSB202 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBoxDIO0_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_checkBoxDIO1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBoxDIO2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBoxDIO3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBoxDIO4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_checkBoxDIO5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxDIO6_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxDIO7_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButtonClignoter_clicked(); break;
        case 9: _t->clignoter(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetUSB202::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetUSB202.data,
    qt_meta_data_WidgetUSB202,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetUSB202::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetUSB202::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetUSB202.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetUSB202::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
