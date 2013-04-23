/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Apr 23 00:33:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      85,   79,   11,   11, 0x08,
     129,  123,   11,   11, 0x08,
     167,   11,   11,   11, 0x08,
     200,   11,   11,   11, 0x08,
     235,  123,   11,   11, 0x08,
     268,   79,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     344,   79,   11,   11, 0x08,
     382,   79,   11,   11, 0x08,
     425,  123,   11,   11, 0x08,
     458,  123,   11,   11, 0x08,
     492,  123,   11,   11, 0x08,
     526,   11,   11,   11, 0x08,
     552,   11,   11,   11, 0x08,
     578,  123,   11,   11, 0x08,
     628,  620,   11,   11, 0x08,
     659,  620,   11,   11, 0x08,
     691,  123,   11,   11, 0x08,
     725,  123,   11,   11, 0x08,
     759,  123,   11,   11, 0x08,
     792,   11,   11,   11, 0x08,
     825,   11,   11,   11, 0x08,
     860,   79,   11,   11, 0x08,
     898,  123,   11,   11, 0x08,
     932,   11,   11,   11, 0x08,
     958,   79,   11,   11, 0x08,
    1003,  123,   11,   11, 0x08,
    1038,  620,   11,   11, 0x08,
    1070,  620,   11,   11, 0x08,
    1107,  620,   11,   11, 0x08,
    1146,   11,   11,   11, 0x08,
    1171,   11,   11,   11, 0x08,
    1196,  620,   11,   11, 0x08,
    1234,  620,   11,   11, 0x08,
    1272,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_buttonCam1_clicked()\0"
    "update_image_label()\0check_video_playing()\0"
    "index\0on_comboBox1_currentIndexChanged(int)\0"
    "value\0on_noisePowerSlider_valueChanged(int)\0"
    "on_buttonOriginalView1_clicked()\0"
    "on_buttonProccessedView1_clicked()\0"
    "on_noiseStdDev_valueChanged(int)\0"
    "on_comboBoxColorspace_currentIndexChanged(int)\0"
    "on_openImageButton_clicked()\0"
    "on_comboBox2_currentIndexChanged(int)\0"
    "on_comboBoxMorpho_currentIndexChanged(int)\0"
    "on_morphSlider_valueChanged(int)\0"
    "on_yPositionBar_valueChanged(int)\0"
    "on_xPositionBar_valueChanged(int)\0"
    "on_resetButton1_clicked()\0"
    "on_resetButton2_clicked()\0"
    "on_filterStrengthSlider_valueChanged(int)\0"
    "checked\0on_radioButtonIm_toggled(bool)\0"
    "on_radioButtonIm2_toggled(bool)\0"
    "on_cannySlider1_valueChanged(int)\0"
    "on_cannySlider2_valueChanged(int)\0"
    "on_houghSlider_valueChanged(int)\0"
    "on_buttonOriginalView2_clicked()\0"
    "on_buttonProccessedView2_clicked()\0"
    "on_comboBox3_currentIndexChanged(int)\0"
    "on_threshSlider_valueChanged(int)\0"
    "on_resetButton3_clicked()\0"
    "on_comboBoxFeatures_currentIndexChanged(int)\0"
    "on_featureSlider_valueChanged(int)\0"
    "on_radioButtonIm3_toggled(bool)\0"
    "on_buttonOriginalView3_clicked(bool)\0"
    "on_buttonProccessedView3_clicked(bool)\0"
    "on_viewButton1_clicked()\0"
    "on_viewButton2_clicked()\0"
    "on_buttonVisualizeView1_clicked(bool)\0"
    "on_buttonVisualizeView2_clicked(bool)\0"
    "on_buttonVisualizeView0_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_buttonCam1_clicked(); break;
        case 1: _t->update_image_label(); break;
        case 2: _t->check_video_playing(); break;
        case 3: _t->on_comboBox1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_noisePowerSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_buttonOriginalView1_clicked(); break;
        case 6: _t->on_buttonProccessedView1_clicked(); break;
        case 7: _t->on_noiseStdDev_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboBoxColorspace_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_openImageButton_clicked(); break;
        case 10: _t->on_comboBox2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboBoxMorpho_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_morphSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_yPositionBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_xPositionBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_resetButton1_clicked(); break;
        case 16: _t->on_resetButton2_clicked(); break;
        case 17: _t->on_filterStrengthSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_radioButtonIm_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_radioButtonIm2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_cannySlider1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_cannySlider2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_houghSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_buttonOriginalView2_clicked(); break;
        case 24: _t->on_buttonProccessedView2_clicked(); break;
        case 25: _t->on_comboBox3_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_threshSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_resetButton3_clicked(); break;
        case 28: _t->on_comboBoxFeatures_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_featureSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_radioButtonIm3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_buttonOriginalView3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_buttonProccessedView3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_viewButton1_clicked(); break;
        case 34: _t->on_viewButton2_clicked(); break;
        case 35: _t->on_buttonVisualizeView1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_buttonVisualizeView2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_buttonVisualizeView0_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
