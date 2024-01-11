/****************************************************************************
** Meta object code from reading C++ file 'science.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "science.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'science.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCIENCE_t {
    QByteArrayData data[12];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCIENCE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCIENCE_t qt_meta_stringdata_SCIENCE = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SCIENCE"
QT_MOC_LITERAL(1, 8, 8), // "spinOnce"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "updateDiagram"
QT_MOC_LITERAL(4, 32, 14), // "updateDiagram1"
QT_MOC_LITERAL(5, 47, 7), // "MQ135_1"
QT_MOC_LITERAL(6, 55, 7), // "MQ135_2"
QT_MOC_LITERAL(7, 63, 6), // "BMP180"
QT_MOC_LITERAL(8, 70, 9), // "Loadcell1"
QT_MOC_LITERAL(9, 80, 7), // "SHT10_1"
QT_MOC_LITERAL(10, 88, 7), // "SHT10_2"
QT_MOC_LITERAL(11, 96, 2) // "UM"

    },
    "SCIENCE\0spinOnce\0\0updateDiagram\0"
    "updateDiagram1\0MQ135_1\0MQ135_2\0BMP180\0"
    "Loadcell1\0SHT10_1\0SHT10_2\0UM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCIENCE[] = {

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
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SCIENCE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCIENCE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->spinOnce(); break;
        case 1: _t->updateDiagram(); break;
        case 2: _t->updateDiagram1(); break;
        case 3: _t->MQ135_1(); break;
        case 4: _t->MQ135_2(); break;
        case 5: _t->BMP180(); break;
        case 6: _t->Loadcell1(); break;
        case 7: _t->SHT10_1(); break;
        case 8: _t->SHT10_2(); break;
        //case 9: _t->UM(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SCIENCE::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_SCIENCE.data,
    qt_meta_data_SCIENCE,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SCIENCE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCIENCE::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCIENCE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SCIENCE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
