/****************************************************************************
** Meta object code from reading C++ file 'computervisioninterface.h'
**
** Created: Mon Apr 22 16:04:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lib/computervisioninterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computervisioninterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComputerVisionInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      40,   36,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ComputerVisionInterface[] = {
    "ComputerVisionInterface\0\0finished()\0"
    "err\0error(QString)\0process()\0"
};

void ComputerVisionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComputerVisionInterface *_t = static_cast<ComputerVisionInterface *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->process(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComputerVisionInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComputerVisionInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ComputerVisionInterface,
      qt_meta_data_ComputerVisionInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComputerVisionInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComputerVisionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComputerVisionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerVisionInterface))
        return static_cast<void*>(const_cast< ComputerVisionInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int ComputerVisionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ComputerVisionInterface::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ComputerVisionInterface::error(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
