/****************************************************************************
** Meta object code from reading C++ file 'qwt_designer_plotdialog.h'
**
** Created: Wed Oct 16 16:48:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwt_designer_plotdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_designer_plotdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QwtDesignerPlugin__PlotDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QwtDesignerPlugin__PlotDialog[] = {
    "QwtDesignerPlugin::PlotDialog\0\0"
    "edited(QString)\0"
};

void QwtDesignerPlugin::PlotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlotDialog *_t = static_cast<PlotDialog *>(_o);
        switch (_id) {
        case 0: _t->edited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QwtDesignerPlugin::PlotDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QwtDesignerPlugin::PlotDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QwtDesignerPlugin__PlotDialog,
      qt_meta_data_QwtDesignerPlugin__PlotDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QwtDesignerPlugin::PlotDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QwtDesignerPlugin::PlotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QwtDesignerPlugin::PlotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QwtDesignerPlugin__PlotDialog))
        return static_cast<void*>(const_cast< PlotDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QwtDesignerPlugin::PlotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QwtDesignerPlugin::PlotDialog::edited(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
