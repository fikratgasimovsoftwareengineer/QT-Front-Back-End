/****************************************************************************
** Meta object code from reading C++ file 'dronetypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../guiCustom/dronetypes.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dronetypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_droneTypes_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_droneTypes_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_droneTypes_t qt_meta_stringdata_droneTypes = {
    {
        QT_MOC_LITERAL(0, 10),  // "droneTypes"
        QT_MOC_LITERAL(11, 13),  // "choose_copter"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 5),  // "index"
        QT_MOC_LITERAL(32, 11),  // "tree_copter"
        QT_MOC_LITERAL(44, 10)   // "ugv_robots"
    },
    "droneTypes",
    "choose_copter",
    "",
    "index",
    "tree_copter",
    "ugv_robots"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_droneTypes[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    1,   35,    2, 0x08,    3 /* Private */,
       5,    1,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject droneTypes::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_droneTypes.offsetsAndSizes,
    qt_meta_data_droneTypes,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_droneTypes_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<droneTypes, std::true_type>,
        // method 'choose_copter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tree_copter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ugv_robots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void droneTypes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<droneTypes *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->choose_copter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tree_copter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->ugv_robots((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *droneTypes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *droneTypes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_droneTypes.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int droneTypes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
