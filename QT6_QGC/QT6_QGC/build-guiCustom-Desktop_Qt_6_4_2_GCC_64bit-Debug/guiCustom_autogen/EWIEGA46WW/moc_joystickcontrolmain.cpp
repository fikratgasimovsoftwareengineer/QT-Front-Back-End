/****************************************************************************
** Meta object code from reading C++ file 'joystickcontrolmain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../guiCustom/joystickcontrolmain.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joystickcontrolmain.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_joystickControlMain_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_joystickControlMain_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_joystickControlMain_t qt_meta_stringdata_joystickControlMain = {
    {
        QT_MOC_LITERAL(0, 19),  // "joystickControlMain"
        QT_MOC_LITERAL(20, 11),  // "moveForward"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 8),  // "moveBack"
        QT_MOC_LITERAL(42, 8),  // "moveLeft"
        QT_MOC_LITERAL(51, 9)   // "moveRight"
    },
    "joystickControlMain",
    "moveForward",
    "",
    "moveBack",
    "moveLeft",
    "moveRight"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_joystickControlMain[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject joystickControlMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_joystickControlMain.offsetsAndSizes,
    qt_meta_data_joystickControlMain,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_joystickControlMain_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<joystickControlMain, std::true_type>,
        // method 'moveForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void joystickControlMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<joystickControlMain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveForward(); break;
        case 1: _t->moveBack(); break;
        case 2: _t->moveLeft(); break;
        case 3: _t->moveRight(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *joystickControlMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *joystickControlMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_joystickControlMain.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int joystickControlMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
