/****************************************************************************
** Meta object code from reading C++ file 'QCaInteger.h'
**
** Created: Wed Oct 16 16:50:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/include/QCaInteger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaInteger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCaInteger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      52,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,  105,   11,   11, 0x0a,
     155,  129,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QCaInteger[] = {
    "QCaInteger\0\0value,alarmInfo,timeStamp,variableIndex\0"
    "integerChanged(long,QCaAlarmInfo&,QCaDateTime&,uint)\0"
    "data\0writeInteger(long)\0"
    "value,alarmInfo,timeStamp\0"
    "convertVariant(QVariant,QCaAlarmInfo&,QCaDateTime&)\0"
};

void QCaInteger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCaInteger *_t = static_cast<QCaInteger *>(_o);
        switch (_id) {
        case 0: _t->integerChanged((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 1: _t->writeInteger((*reinterpret_cast< const long(*)>(_a[1]))); break;
        case 2: _t->convertVariant((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCaInteger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCaInteger::staticMetaObject = {
    { &qcaobject::QCaObject::staticMetaObject, qt_meta_stringdata_QCaInteger,
      qt_meta_data_QCaInteger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCaInteger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCaInteger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCaInteger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCaInteger))
        return static_cast<void*>(const_cast< QCaInteger*>(this));
    typedef qcaobject::QCaObject QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int QCaInteger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef qcaobject::QCaObject QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
void QCaInteger::integerChanged(const long & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE