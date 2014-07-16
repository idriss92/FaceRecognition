/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FaceRecognition/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[15];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Admin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 8),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 30),
QT_MOC_LITERAL(4, 47, 30),
QT_MOC_LITERAL(5, 78, 29),
QT_MOC_LITERAL(6, 108, 30),
QT_MOC_LITERAL(7, 139, 32),
QT_MOC_LITERAL(8, 172, 31),
QT_MOC_LITERAL(9, 204, 38),
QT_MOC_LITERAL(10, 243, 32),
QT_MOC_LITERAL(11, 276, 3),
QT_MOC_LITERAL(12, 280, 6),
QT_MOC_LITERAL(13, 287, 29),
QT_MOC_LITERAL(14, 317, 5)
    },
    "Admin\0sendData\0\0on_pushButtonRecherche_clicked\0"
    "on_pushButtonConsulter_clicked\0"
    "on_pushButtonModifier_clicked\0"
    "on_pushButtonSupprimer_clicked\0"
    "on_pushButtonConsulter_2_clicked\0"
    "on_pushButtonChargerEmp_clicked\0"
    "on_pushButtonConsulterPresence_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "column\0on_tableViewEmploye_activated\0"
    "index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x08,
       4,    0,   68,    2, 0x08,
       5,    0,   69,    2, 0x08,
       6,    0,   70,    2, 0x08,
       7,    0,   71,    2, 0x08,
       8,    0,   72,    2, 0x08,
       9,    0,   73,    2, 0x08,
      10,    2,   74,    2, 0x08,
      13,    1,   79,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QModelIndex,   14,

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin *_t = static_cast<Admin *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonRecherche_clicked(); break;
        case 2: _t->on_pushButtonConsulter_clicked(); break;
        case 3: _t->on_pushButtonModifier_clicked(); break;
        case 4: _t->on_pushButtonSupprimer_clicked(); break;
        case 5: _t->on_pushButtonConsulter_2_clicked(); break;
        case 6: _t->on_pushButtonChargerEmp_clicked(); break;
        case 7: _t->on_pushButtonConsulterPresence_clicked(); break;
        //case 8: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_tableViewEmploye_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Admin::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Admin::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Admin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Admin.data,
      qt_meta_data_Admin,  qt_static_metacall, 0, 0}
};


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata))
        return static_cast<void*>(const_cast< Admin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Admin::sendData(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
