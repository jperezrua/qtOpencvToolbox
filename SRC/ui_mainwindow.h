/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Apr 27 00:17:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QLabel *Image1_1;
    QLabel *Image1_2;
    QLabel *Image1_3;
    QLabel *label_2;
    QComboBox *comboBox1;
    QComboBox *comboBoxColorspace;
    QSlider *noisePowerSlider;
    QLabel *label_14;
    QPushButton *buttonOriginalView1;
    QPushButton *buttonProccessedView1;
    QSlider *noiseStdDev;
    QLabel *label_15;
    QGroupBox *groupBoxPV_1;
    QRadioButton *radioButtonIm;
    QRadioButton *radioButtonHis;
    QCommandLinkButton *resetButton1;
    QSlider *xPositionBar;
    QLabel *label_19;
    QLabel *label_20;
    QSlider *yPositionBar;
    QWidget *tab_2;
    QLabel *Image2_3;
    QLabel *Image2_2;
    QLabel *Image2_1;
    QLabel *label_6;
    QPushButton *buttonOriginalView2;
    QPushButton *buttonProccessedView2;
    QComboBox *comboBox2;
    QComboBox *comboBoxMorpho;
    QLabel *label_16;
    QSlider *filterStrengthSlider;
    QSlider *houghSlider;
    QLabel *label_17;
    QGroupBox *groupBoxPV_2;
    QRadioButton *radioButtonIm2;
    QRadioButton *radioButtonHis2;
    QLabel *label_18;
    QSlider *morphSlider;
    QCommandLinkButton *resetButton2;
    QSlider *cannySlider1;
    QSlider *cannySlider2;
    QLabel *label_21;
    QWidget *tab_3;
    QLabel *Image3_3;
    QLabel *Image3_2;
    QLabel *Image3_1;
    QLabel *label_9;
    QPushButton *buttonOriginalView3;
    QPushButton *buttonProccessedView3;
    QComboBox *comboBox3;
    QSlider *featureSlider;
    QLabel *label_22;
    QComboBox *comboBoxFeatures;
    QCommandLinkButton *resetButton3;
    QGroupBox *groupBoxPV_3;
    QRadioButton *radioButtonIm3;
    QRadioButton *radioButtonHis3;
    QSlider *threshSlider;
    QLabel *label_23;
    QWidget *tab_4;
    QLabel *Image4_3;
    QLabel *Image4_2;
    QLabel *Image4_1;
    QCommandLinkButton *viewButton1;
    QCommandLinkButton *viewButton2;
    QPushButton *calibrateButton;
    QComboBox *comboBox4;
    QComboBox *fundamentalComboBox;
    QPushButton *buttonVisualizeView1;
    QPushButton *buttonVisualizeView2;
    QPushButton *buttonVisualizeView0;
    QGroupBox *groupBox_2;
    QLineEdit *matrix00;
    QLineEdit *matrix01;
    QLineEdit *matrix10;
    QLineEdit *matrix11;
    QLineEdit *matrix21;
    QLineEdit *matrix20;
    QLineEdit *matrix22;
    QFrame *frame;
    QLineEdit *matrix02;
    QLineEdit *matrix12;
    QRadioButton *radioButtonF;
    QRadioButton *radioButtonH;
    QRadioButton *radioButtonE;
    QSlider *featureSlider2;
    QLabel *label_24;
    QCommandLinkButton *resetButton4;
    QGroupBox *groupBoxPV5;
    QRadioButton *radioButtonLeft;
    QRadioButton *radioButtonRight;
    QGroupBox *groupBox;
    QPushButton *buttonCam1;
    QLabel *cameraLabel;
    QPushButton *openImageButton;
    QLabel *frameLabel;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QPlainTextEdit *actionsText;
    QFrame *line_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(712, 529);
        MainWindow->setMinimumSize(QSize(712, 529));
        MainWindow->setMaximumSize(QSize(712, 529));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(false);
        tabWidget->setGeometry(QRect(150, 6, 541, 461));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        Image1_1 = new QLabel(tab_1);
        Image1_1->setObjectName(QString::fromUtf8("Image1_1"));
        Image1_1->setGeometry(QRect(209, 37, 320, 240));
        Image1_1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/hendrix.jpg")));
        Image1_1->setScaledContents(true);
        Image1_2 = new QLabel(tab_1);
        Image1_2->setObjectName(QString::fromUtf8("Image1_2"));
        Image1_2->setGeometry(QRect(209, 280, 160, 120));
        Image1_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/hendrix.jpg")));
        Image1_2->setScaledContents(true);
        Image1_3 = new QLabel(tab_1);
        Image1_3->setObjectName(QString::fromUtf8("Image1_3"));
        Image1_3->setGeometry(QRect(370, 280, 160, 120));
        Image1_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/hendrix.jpg")));
        Image1_3->setScaledContents(true);
        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(332, 20, 81, 16));
        comboBox1 = new QComboBox(tab_1);
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));
        comboBox1->setGeometry(QRect(14, 37, 181, 24));
        comboBoxColorspace = new QComboBox(tab_1);
        comboBoxColorspace->setObjectName(QString::fromUtf8("comboBoxColorspace"));
        comboBoxColorspace->setEnabled(false);
        comboBoxColorspace->setGeometry(QRect(14, 70, 181, 24));
        comboBoxColorspace->setAutoFillBackground(false);
        comboBoxColorspace->setEditable(false);
        noisePowerSlider = new QSlider(tab_1);
        noisePowerSlider->setObjectName(QString::fromUtf8("noisePowerSlider"));
        noisePowerSlider->setEnabled(false);
        noisePowerSlider->setGeometry(QRect(14, 120, 181, 19));
        noisePowerSlider->setSliderPosition(50);
        noisePowerSlider->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(tab_1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(18, 106, 81, 16));
        buttonOriginalView1 = new QPushButton(tab_1);
        buttonOriginalView1->setObjectName(QString::fromUtf8("buttonOriginalView1"));
        buttonOriginalView1->setGeometry(QRect(242, 400, 91, 20));
        buttonOriginalView1->setFlat(true);
        buttonProccessedView1 = new QPushButton(tab_1);
        buttonProccessedView1->setObjectName(QString::fromUtf8("buttonProccessedView1"));
        buttonProccessedView1->setGeometry(QRect(400, 400, 111, 20));
        buttonProccessedView1->setFlat(true);
        noiseStdDev = new QSlider(tab_1);
        noiseStdDev->setObjectName(QString::fromUtf8("noiseStdDev"));
        noiseStdDev->setEnabled(false);
        noiseStdDev->setGeometry(QRect(14, 157, 181, 19));
        noiseStdDev->setSliderPosition(50);
        noiseStdDev->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(tab_1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 144, 171, 16));
        groupBoxPV_1 = new QGroupBox(tab_1);
        groupBoxPV_1->setObjectName(QString::fromUtf8("groupBoxPV_1"));
        groupBoxPV_1->setGeometry(QRect(70, 300, 121, 80));
        radioButtonIm = new QRadioButton(groupBoxPV_1);
        radioButtonIm->setObjectName(QString::fromUtf8("radioButtonIm"));
        radioButtonIm->setGeometry(QRect(20, 20, 71, 19));
        radioButtonIm->setChecked(true);
        radioButtonHis = new QRadioButton(groupBoxPV_1);
        radioButtonHis->setObjectName(QString::fromUtf8("radioButtonHis"));
        radioButtonHis->setGeometry(QRect(20, 50, 91, 19));
        resetButton1 = new QCommandLinkButton(tab_1);
        resetButton1->setObjectName(QString::fromUtf8("resetButton1"));
        resetButton1->setGeometry(QRect(40, 250, 121, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetButton1->setIcon(icon);
        xPositionBar = new QSlider(tab_1);
        xPositionBar->setObjectName(QString::fromUtf8("xPositionBar"));
        xPositionBar->setEnabled(false);
        xPositionBar->setGeometry(QRect(14, 193, 181, 19));
        xPositionBar->setMaximum(100);
        xPositionBar->setValue(95);
        xPositionBar->setSliderPosition(95);
        xPositionBar->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(tab_1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 180, 171, 16));
        label_20 = new QLabel(tab_1);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 217, 171, 16));
        yPositionBar = new QSlider(tab_1);
        yPositionBar->setObjectName(QString::fromUtf8("yPositionBar"));
        yPositionBar->setEnabled(false);
        yPositionBar->setGeometry(QRect(14, 230, 181, 19));
        yPositionBar->setMaximum(100);
        yPositionBar->setValue(95);
        yPositionBar->setSliderPosition(95);
        yPositionBar->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Image2_3 = new QLabel(tab_2);
        Image2_3->setObjectName(QString::fromUtf8("Image2_3"));
        Image2_3->setGeometry(QRect(370, 280, 160, 120));
        Image2_3->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image2_3->setScaledContents(true);
        Image2_2 = new QLabel(tab_2);
        Image2_2->setObjectName(QString::fromUtf8("Image2_2"));
        Image2_2->setGeometry(QRect(209, 280, 160, 120));
        Image2_2->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image2_2->setScaledContents(true);
        Image2_1 = new QLabel(tab_2);
        Image2_1->setObjectName(QString::fromUtf8("Image2_1"));
        Image2_1->setGeometry(QRect(209, 37, 320, 240));
        Image2_1->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image2_1->setScaledContents(true);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(332, 20, 81, 16));
        buttonOriginalView2 = new QPushButton(tab_2);
        buttonOriginalView2->setObjectName(QString::fromUtf8("buttonOriginalView2"));
        buttonOriginalView2->setGeometry(QRect(242, 400, 91, 20));
        buttonOriginalView2->setFlat(true);
        buttonProccessedView2 = new QPushButton(tab_2);
        buttonProccessedView2->setObjectName(QString::fromUtf8("buttonProccessedView2"));
        buttonProccessedView2->setGeometry(QRect(400, 400, 111, 20));
        buttonProccessedView2->setFlat(true);
        comboBox2 = new QComboBox(tab_2);
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setGeometry(QRect(14, 37, 181, 24));
        comboBoxMorpho = new QComboBox(tab_2);
        comboBoxMorpho->setObjectName(QString::fromUtf8("comboBoxMorpho"));
        comboBoxMorpho->setEnabled(false);
        comboBoxMorpho->setGeometry(QRect(14, 70, 181, 24));
        comboBoxMorpho->setAutoFillBackground(false);
        comboBoxMorpho->setEditable(false);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(18, 139, 181, 16));
        filterStrengthSlider = new QSlider(tab_2);
        filterStrengthSlider->setObjectName(QString::fromUtf8("filterStrengthSlider"));
        filterStrengthSlider->setEnabled(false);
        filterStrengthSlider->setGeometry(QRect(14, 153, 181, 19));
        filterStrengthSlider->setMaximum(100);
        filterStrengthSlider->setSliderPosition(50);
        filterStrengthSlider->setOrientation(Qt::Horizontal);
        houghSlider = new QSlider(tab_2);
        houghSlider->setObjectName(QString::fromUtf8("houghSlider"));
        houghSlider->setEnabled(false);
        houghSlider->setGeometry(QRect(14, 189, 181, 19));
        houghSlider->setSliderPosition(50);
        houghSlider->setOrientation(Qt::Horizontal);
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 176, 171, 16));
        groupBoxPV_2 = new QGroupBox(tab_2);
        groupBoxPV_2->setObjectName(QString::fromUtf8("groupBoxPV_2"));
        groupBoxPV_2->setGeometry(QRect(70, 300, 121, 80));
        radioButtonIm2 = new QRadioButton(groupBoxPV_2);
        radioButtonIm2->setObjectName(QString::fromUtf8("radioButtonIm2"));
        radioButtonIm2->setGeometry(QRect(20, 20, 71, 19));
        radioButtonIm2->setChecked(true);
        radioButtonHis2 = new QRadioButton(groupBoxPV_2);
        radioButtonHis2->setObjectName(QString::fromUtf8("radioButtonHis2"));
        radioButtonHis2->setGeometry(QRect(20, 50, 91, 19));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(18, 106, 181, 16));
        morphSlider = new QSlider(tab_2);
        morphSlider->setObjectName(QString::fromUtf8("morphSlider"));
        morphSlider->setEnabled(false);
        morphSlider->setGeometry(QRect(14, 120, 181, 19));
        morphSlider->setSliderPosition(50);
        morphSlider->setOrientation(Qt::Horizontal);
        resetButton2 = new QCommandLinkButton(tab_2);
        resetButton2->setObjectName(QString::fromUtf8("resetButton2"));
        resetButton2->setGeometry(QRect(40, 250, 121, 41));
        resetButton2->setIcon(icon);
        cannySlider1 = new QSlider(tab_2);
        cannySlider1->setObjectName(QString::fromUtf8("cannySlider1"));
        cannySlider1->setEnabled(false);
        cannySlider1->setGeometry(QRect(15, 224, 81, 19));
        cannySlider1->setSliderPosition(50);
        cannySlider1->setOrientation(Qt::Horizontal);
        cannySlider2 = new QSlider(tab_2);
        cannySlider2->setObjectName(QString::fromUtf8("cannySlider2"));
        cannySlider2->setEnabled(false);
        cannySlider2->setGeometry(QRect(110, 224, 81, 19));
        cannySlider2->setSliderPosition(50);
        cannySlider2->setOrientation(Qt::Horizontal);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 210, 171, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        Image3_3 = new QLabel(tab_3);
        Image3_3->setObjectName(QString::fromUtf8("Image3_3"));
        Image3_3->setGeometry(QRect(370, 280, 160, 120));
        Image3_3->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image3_3->setScaledContents(true);
        Image3_2 = new QLabel(tab_3);
        Image3_2->setObjectName(QString::fromUtf8("Image3_2"));
        Image3_2->setGeometry(QRect(209, 280, 160, 120));
        Image3_2->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image3_2->setScaledContents(true);
        Image3_1 = new QLabel(tab_3);
        Image3_1->setObjectName(QString::fromUtf8("Image3_1"));
        Image3_1->setGeometry(QRect(209, 37, 320, 240));
        Image3_1->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image3_1->setScaledContents(true);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(332, 20, 81, 16));
        buttonOriginalView3 = new QPushButton(tab_3);
        buttonOriginalView3->setObjectName(QString::fromUtf8("buttonOriginalView3"));
        buttonOriginalView3->setGeometry(QRect(242, 400, 91, 20));
        buttonOriginalView3->setFlat(true);
        buttonProccessedView3 = new QPushButton(tab_3);
        buttonProccessedView3->setObjectName(QString::fromUtf8("buttonProccessedView3"));
        buttonProccessedView3->setGeometry(QRect(400, 400, 111, 20));
        buttonProccessedView3->setFlat(true);
        comboBox3 = new QComboBox(tab_3);
        comboBox3->setObjectName(QString::fromUtf8("comboBox3"));
        comboBox3->setGeometry(QRect(14, 37, 181, 24));
        featureSlider = new QSlider(tab_3);
        featureSlider->setObjectName(QString::fromUtf8("featureSlider"));
        featureSlider->setEnabled(false);
        featureSlider->setGeometry(QRect(14, 153, 181, 19));
        featureSlider->setSliderPosition(50);
        featureSlider->setOrientation(Qt::Horizontal);
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(14, 139, 181, 16));
        comboBoxFeatures = new QComboBox(tab_3);
        comboBoxFeatures->setObjectName(QString::fromUtf8("comboBoxFeatures"));
        comboBoxFeatures->setEnabled(false);
        comboBoxFeatures->setGeometry(QRect(14, 70, 181, 24));
        comboBoxFeatures->setAutoFillBackground(false);
        comboBoxFeatures->setEditable(false);
        resetButton3 = new QCommandLinkButton(tab_3);
        resetButton3->setObjectName(QString::fromUtf8("resetButton3"));
        resetButton3->setGeometry(QRect(40, 250, 121, 41));
        resetButton3->setIcon(icon);
        groupBoxPV_3 = new QGroupBox(tab_3);
        groupBoxPV_3->setObjectName(QString::fromUtf8("groupBoxPV_3"));
        groupBoxPV_3->setGeometry(QRect(70, 300, 121, 80));
        radioButtonIm3 = new QRadioButton(groupBoxPV_3);
        radioButtonIm3->setObjectName(QString::fromUtf8("radioButtonIm3"));
        radioButtonIm3->setGeometry(QRect(20, 20, 71, 19));
        radioButtonIm3->setChecked(true);
        radioButtonHis3 = new QRadioButton(groupBoxPV_3);
        radioButtonHis3->setObjectName(QString::fromUtf8("radioButtonHis3"));
        radioButtonHis3->setGeometry(QRect(20, 50, 91, 19));
        threshSlider = new QSlider(tab_3);
        threshSlider->setObjectName(QString::fromUtf8("threshSlider"));
        threshSlider->setEnabled(false);
        threshSlider->setGeometry(QRect(14, 120, 181, 19));
        threshSlider->setSliderPosition(50);
        threshSlider->setOrientation(Qt::Horizontal);
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(18, 106, 181, 16));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        Image4_3 = new QLabel(tab_4);
        Image4_3->setObjectName(QString::fromUtf8("Image4_3"));
        Image4_3->setGeometry(QRect(370, 280, 160, 120));
        Image4_3->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image4_3->setScaledContents(true);
        Image4_2 = new QLabel(tab_4);
        Image4_2->setObjectName(QString::fromUtf8("Image4_2"));
        Image4_2->setGeometry(QRect(209, 280, 160, 120));
        Image4_2->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image4_2->setScaledContents(true);
        Image4_1 = new QLabel(tab_4);
        Image4_1->setObjectName(QString::fromUtf8("Image4_1"));
        Image4_1->setGeometry(QRect(209, 37, 320, 240));
        Image4_1->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/hendrix.jpg")));
        Image4_1->setScaledContents(true);
        viewButton1 = new QCommandLinkButton(tab_4);
        viewButton1->setObjectName(QString::fromUtf8("viewButton1"));
        viewButton1->setGeometry(QRect(11, 0, 90, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewButton1->setIcon(icon1);
        viewButton2 = new QCommandLinkButton(tab_4);
        viewButton2->setObjectName(QString::fromUtf8("viewButton2"));
        viewButton2->setGeometry(QRect(111, 0, 90, 40));
        viewButton2->setIcon(icon1);
        calibrateButton = new QPushButton(tab_4);
        calibrateButton->setObjectName(QString::fromUtf8("calibrateButton"));
        calibrateButton->setGeometry(QRect(10, 166, 191, 27));
        calibrateButton->setCheckable(true);
        comboBox4 = new QComboBox(tab_4);
        comboBox4->setObjectName(QString::fromUtf8("comboBox4"));
        comboBox4->setGeometry(QRect(11, 98, 191, 24));
        fundamentalComboBox = new QComboBox(tab_4);
        fundamentalComboBox->setObjectName(QString::fromUtf8("fundamentalComboBox"));
        fundamentalComboBox->setGeometry(QRect(11, 40, 191, 24));
        buttonVisualizeView1 = new QPushButton(tab_4);
        buttonVisualizeView1->setObjectName(QString::fromUtf8("buttonVisualizeView1"));
        buttonVisualizeView1->setGeometry(QRect(242, 400, 91, 20));
        buttonVisualizeView1->setFlat(true);
        buttonVisualizeView2 = new QPushButton(tab_4);
        buttonVisualizeView2->setObjectName(QString::fromUtf8("buttonVisualizeView2"));
        buttonVisualizeView2->setGeometry(QRect(400, 400, 111, 20));
        buttonVisualizeView2->setFlat(true);
        buttonVisualizeView0 = new QPushButton(tab_4);
        buttonVisualizeView0->setObjectName(QString::fromUtf8("buttonVisualizeView0"));
        buttonVisualizeView0->setGeometry(QRect(332, 10, 91, 20));
        buttonVisualizeView0->setFlat(true);
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 191, 161));
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        groupBox_2->setFlat(false);
        matrix00 = new QLineEdit(groupBox_2);
        matrix00->setObjectName(QString::fromUtf8("matrix00"));
        matrix00->setGeometry(QRect(2, 85, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(7);
        matrix00->setFont(font);
        matrix00->setReadOnly(true);
        matrix01 = new QLineEdit(groupBox_2);
        matrix01->setObjectName(QString::fromUtf8("matrix01"));
        matrix01->setGeometry(QRect(64, 85, 61, 16));
        matrix01->setFont(font);
        matrix01->setReadOnly(true);
        matrix10 = new QLineEdit(groupBox_2);
        matrix10->setObjectName(QString::fromUtf8("matrix10"));
        matrix10->setGeometry(QRect(2, 102, 61, 16));
        matrix10->setFont(font);
        matrix10->setReadOnly(true);
        matrix11 = new QLineEdit(groupBox_2);
        matrix11->setObjectName(QString::fromUtf8("matrix11"));
        matrix11->setGeometry(QRect(64, 102, 61, 16));
        matrix11->setFont(font);
        matrix11->setReadOnly(true);
        matrix21 = new QLineEdit(groupBox_2);
        matrix21->setObjectName(QString::fromUtf8("matrix21"));
        matrix21->setGeometry(QRect(64, 119, 61, 16));
        matrix21->setFont(font);
        matrix21->setReadOnly(true);
        matrix20 = new QLineEdit(groupBox_2);
        matrix20->setObjectName(QString::fromUtf8("matrix20"));
        matrix20->setGeometry(QRect(2, 119, 61, 16));
        matrix20->setFont(font);
        matrix20->setReadOnly(true);
        matrix22 = new QLineEdit(groupBox_2);
        matrix22->setObjectName(QString::fromUtf8("matrix22"));
        matrix22->setGeometry(QRect(126, 119, 61, 16));
        matrix22->setFont(font);
        matrix22->setReadOnly(true);
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-7, 80, 201, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        matrix02 = new QLineEdit(frame);
        matrix02->setObjectName(QString::fromUtf8("matrix02"));
        matrix02->setGeometry(QRect(133, 5, 61, 16));
        matrix02->setFont(font);
        matrix02->setReadOnly(true);
        matrix12 = new QLineEdit(frame);
        matrix12->setObjectName(QString::fromUtf8("matrix12"));
        matrix12->setGeometry(QRect(133, 22, 61, 16));
        matrix12->setFont(font);
        matrix12->setReadOnly(true);
        radioButtonF = new QRadioButton(groupBox_2);
        radioButtonF->setObjectName(QString::fromUtf8("radioButtonF"));
        radioButtonF->setGeometry(QRect(10, 20, 121, 19));
        radioButtonF->setChecked(true);
        radioButtonH = new QRadioButton(groupBox_2);
        radioButtonH->setObjectName(QString::fromUtf8("radioButtonH"));
        radioButtonH->setGeometry(QRect(10, 37, 121, 19));
        radioButtonH->setChecked(false);
        radioButtonE = new QRadioButton(groupBox_2);
        radioButtonE->setObjectName(QString::fromUtf8("radioButtonE"));
        radioButtonE->setGeometry(QRect(10, 55, 121, 19));
        radioButtonE->setChecked(false);
        frame->raise();
        matrix00->raise();
        matrix01->raise();
        matrix10->raise();
        matrix11->raise();
        matrix21->raise();
        matrix20->raise();
        matrix22->raise();
        radioButtonF->raise();
        matrix02->raise();
        radioButtonH->raise();
        radioButtonE->raise();
        featureSlider2 = new QSlider(tab_4);
        featureSlider2->setObjectName(QString::fromUtf8("featureSlider2"));
        featureSlider2->setEnabled(false);
        featureSlider2->setGeometry(QRect(14, 77, 181, 19));
        featureSlider2->setSliderPosition(50);
        featureSlider2->setOrientation(Qt::Horizontal);
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(15, 63, 181, 16));
        resetButton4 = new QCommandLinkButton(tab_4);
        resetButton4->setObjectName(QString::fromUtf8("resetButton4"));
        resetButton4->setGeometry(QRect(40, 380, 121, 41));
        QFont font1;
        font1.setKerning(true);
        resetButton4->setFont(font1);
        resetButton4->setIcon(icon);
        groupBoxPV5 = new QGroupBox(tab_4);
        groupBoxPV5->setObjectName(QString::fromUtf8("groupBoxPV5"));
        groupBoxPV5->setGeometry(QRect(20, 124, 171, 41));
        radioButtonLeft = new QRadioButton(groupBoxPV5);
        radioButtonLeft->setObjectName(QString::fromUtf8("radioButtonLeft"));
        radioButtonLeft->setGeometry(QRect(10, 20, 71, 19));
        radioButtonLeft->setChecked(true);
        radioButtonRight = new QRadioButton(groupBoxPV5);
        radioButtonRight->setObjectName(QString::fromUtf8("radioButtonRight"));
        radioButtonRight->setGeometry(QRect(90, 20, 71, 19));
        tabWidget->addTab(tab_4, QString());
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 131, 451));
        buttonCam1 = new QPushButton(groupBox);
        buttonCam1->setObjectName(QString::fromUtf8("buttonCam1"));
        buttonCam1->setGeometry(QRect(10, 19, 111, 27));
        cameraLabel = new QLabel(groupBox);
        cameraLabel->setObjectName(QString::fromUtf8("cameraLabel"));
        cameraLabel->setGeometry(QRect(2, 49, 131, 16));
        openImageButton = new QPushButton(groupBox);
        openImageButton->setObjectName(QString::fromUtf8("openImageButton"));
        openImageButton->setGeometry(QRect(10, 70, 111, 27));
        frameLabel = new QLabel(groupBox);
        frameLabel->setObjectName(QString::fromUtf8("frameLabel"));
        frameLabel->setGeometry(QRect(3, 99, 131, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 346, 131, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/UB.png")));
        label->setScaledContents(true);
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 330, 131, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 434, 131, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        actionsText = new QPlainTextEdit(groupBox);
        actionsText->setObjectName(QString::fromUtf8("actionsText"));
        actionsText->setGeometry(QRect(0, 143, 131, 181));
        actionsText->setReadOnly(true);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 0, 131, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        mainToolBar->setMinimumSize(QSize(712, 15));
        mainToolBar->setMaximumSize(QSize(712, 15));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Image1_1->setText(QString());
        Image1_2->setText(QString());
        Image1_3->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Current View", 0, QApplication::UnicodeUTF8));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pick an option...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Add Salt & Pepper Noise", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Add Gaussian Noise", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Change Colorspace", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Grayscale", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Histogram Equalization", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Add Logo", 0, QApplication::UnicodeUTF8)
        );
        comboBoxColorspace->clear();
        comboBoxColorspace->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "RGB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HSV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HLS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "YCbCr", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CIE XYZ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CIE Lab", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Luv", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("MainWindow", "Noise power", 0, QApplication::UnicodeUTF8));
        buttonOriginalView1->setText(QApplication::translate("MainWindow", "Original View", 0, QApplication::UnicodeUTF8));
        buttonProccessedView1->setText(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Noise Standard Deviation", 0, QApplication::UnicodeUTF8));
        groupBoxPV_1->setTitle(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        radioButtonIm->setText(QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
        radioButtonHis->setText(QApplication::translate("MainWindow", "Histogram", 0, QApplication::UnicodeUTF8));
        resetButton1->setText(QApplication::translate("MainWindow", "RESET ACTIONS", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Logo: X Position", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Logo: Y Position", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Noise and Color", 0, QApplication::UnicodeUTF8));
        Image2_3->setText(QString());
        Image2_2->setText(QString());
        Image2_1->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Current View", 0, QApplication::UnicodeUTF8));
        buttonOriginalView2->setText(QApplication::translate("MainWindow", "Original View", 0, QApplication::UnicodeUTF8));
        buttonProccessedView2->setText(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        comboBox2->clear();
        comboBox2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pick an option...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Morphological Operations", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Blur", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sharp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sobel Operator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Laplacian Operator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Edge Detection (CANNY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Extract Lines (Hough)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Extract Circles (Hough)", 0, QApplication::UnicodeUTF8)
        );
        comboBoxMorpho->clear();
        comboBoxMorpho->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Morph Type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Dilate", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Erode", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8)
        );
        label_16->setText(QApplication::translate("MainWindow", "Filter strength", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Hough threshold", 0, QApplication::UnicodeUTF8));
        groupBoxPV_2->setTitle(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        radioButtonIm2->setText(QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
        radioButtonHis2->setText(QApplication::translate("MainWindow", "Histogram", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Sctructurant Element Size", 0, QApplication::UnicodeUTF8));
        resetButton2->setText(QApplication::translate("MainWindow", "RESET ACTIONS", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Canny threshold 1 and 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Space Domain", 0, QApplication::UnicodeUTF8));
        Image3_3->setText(QString());
        Image3_2->setText(QString());
        Image3_1->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Current View", 0, QApplication::UnicodeUTF8));
        buttonOriginalView3->setText(QApplication::translate("MainWindow", "Original View", 0, QApplication::UnicodeUTF8));
        buttonProccessedView3->setText(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        comboBox3->clear();
        comboBox3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pick an option...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Connected Objects", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Contours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Bounding Box", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Minimum Enclosing Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Centroids", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Feature...", 0, QApplication::UnicodeUTF8)
        );
        label_22->setText(QApplication::translate("MainWindow", "Feature Parameter", 0, QApplication::UnicodeUTF8));
        comboBoxFeatures->clear();
        comboBoxFeatures->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Feature Type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "MSER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HARRIS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HARRIS NMS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "STAR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "FAST", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SIFT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SURF", 0, QApplication::UnicodeUTF8)
        );
        resetButton3->setText(QApplication::translate("MainWindow", "RESET ACTIONS", 0, QApplication::UnicodeUTF8));
        groupBoxPV_3->setTitle(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        radioButtonIm3->setText(QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
        radioButtonHis3->setText(QApplication::translate("MainWindow", "Histogram", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Thresholding Parameter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Features", 0, QApplication::UnicodeUTF8));
        Image4_3->setText(QString());
        Image4_2->setText(QString());
        Image4_1->setText(QString());
        viewButton1->setText(QApplication::translate("MainWindow", "VIEW 1", 0, QApplication::UnicodeUTF8));
        viewButton2->setText(QApplication::translate("MainWindow", "VIEW 2", 0, QApplication::UnicodeUTF8));
        calibrateButton->setText(QApplication::translate("MainWindow", "CALIBRATE CAM", 0, QApplication::UnicodeUTF8));
        comboBox4->clear();
        comboBox4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pick an option...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Draw epipolar lines", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Find homography", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Mosaic ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Matches", 0, QApplication::UnicodeUTF8)
        );
        fundamentalComboBox->clear();
        fundamentalComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FUNDAMENTAL MATRIX...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7 point method", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8 point method", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "RANSAC", 0, QApplication::UnicodeUTF8)
        );
        buttonVisualizeView1->setText(QApplication::translate("MainWindow", "View 1", 0, QApplication::UnicodeUTF8));
        buttonVisualizeView2->setText(QApplication::translate("MainWindow", "View 2", 0, QApplication::UnicodeUTF8));
        buttonVisualizeView0->setText(QApplication::translate("MainWindow", "Current View", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "MATRIX VIEW", 0, QApplication::UnicodeUTF8));
        radioButtonF->setText(QApplication::translate("MainWindow", "Fundamental", 0, QApplication::UnicodeUTF8));
        radioButtonH->setText(QApplication::translate("MainWindow", "Homography", 0, QApplication::UnicodeUTF8));
        radioButtonE->setText(QApplication::translate("MainWindow", "Calibration", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Feature Parameter", 0, QApplication::UnicodeUTF8));
        resetButton4->setText(QApplication::translate("MainWindow", "RESET ACTIONS", 0, QApplication::UnicodeUTF8));
        groupBoxPV5->setTitle(QApplication::translate("MainWindow", "Proccessed View", 0, QApplication::UnicodeUTF8));
        radioButtonLeft->setText(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        radioButtonRight->setText(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Stereo", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Input Config", 0, QApplication::UnicodeUTF8));
        buttonCam1->setText(QApplication::translate("MainWindow", "Start CAM", 0, QApplication::UnicodeUTF8));
        cameraLabel->setText(QApplication::translate("MainWindow", "No camera enabled", 0, QApplication::UnicodeUTF8));
        openImageButton->setText(QApplication::translate("MainWindow", "Open File...", 0, QApplication::UnicodeUTF8));
        frameLabel->setText(QApplication::translate("MainWindow", "No File selected", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
