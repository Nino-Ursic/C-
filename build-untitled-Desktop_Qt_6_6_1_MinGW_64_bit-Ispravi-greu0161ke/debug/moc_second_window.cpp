/****************************************************************************
** Meta object code from reading C++ file 'second_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled/second_window.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'second_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSsecond_windowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSsecond_windowENDCLASS = QtMocHelpers::stringData(
    "second_window",
    "on_actionnew_triggered",
    "",
    "on_actionopen_triggered",
    "on_actionsave_triggered",
    "on_pushButton_clicked",
    "on_actionsave_as_triggered",
    "on_actionundo_triggered",
    "on_actionredo_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSsecond_windowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[22];
    char stringdata6[27];
    char stringdata7[24];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSsecond_windowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSsecond_windowENDCLASS_t qt_meta_stringdata_CLASSsecond_windowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "second_window"
        QT_MOC_LITERAL(14, 22),  // "on_actionnew_triggered"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 23),  // "on_actionopen_triggered"
        QT_MOC_LITERAL(62, 23),  // "on_actionsave_triggered"
        QT_MOC_LITERAL(86, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(108, 26),  // "on_actionsave_as_triggered"
        QT_MOC_LITERAL(135, 23),  // "on_actionundo_triggered"
        QT_MOC_LITERAL(159, 23)   // "on_actionredo_triggered"
    },
    "second_window",
    "on_actionnew_triggered",
    "",
    "on_actionopen_triggered",
    "on_actionsave_triggered",
    "on_pushButton_clicked",
    "on_actionsave_as_triggered",
    "on_actionundo_triggered",
    "on_actionredo_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsecond_windowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject second_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSsecond_windowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsecond_windowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsecond_windowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<second_window, std::true_type>,
        // method 'on_actionnew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionopen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionsave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionsave_as_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionundo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionredo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void second_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<second_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionnew_triggered(); break;
        case 1: _t->on_actionopen_triggered(); break;
        case 2: _t->on_actionsave_triggered(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_actionsave_as_triggered(); break;
        case 5: _t->on_actionundo_triggered(); break;
        case 6: _t->on_actionredo_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *second_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *second_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsecond_windowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int second_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
