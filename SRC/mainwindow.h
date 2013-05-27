/*
    @file: mainwindow.cpp
    @license: GNU General Public License
    @author: Juan Manuel Perez Rua
    @note: Code written for th practical module of
    Visual Perception at the Université de Bourgogne
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QTimer>
#include "lib/computervisioninterface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void start_computervision_thread();
    void start_timer_image(void);
    void start_timer_video(void);
    
private slots:
    void on_buttonCam1_clicked();
    void update_image_label();
    void check_video_playing();

    void on_comboBox1_currentIndexChanged(int index);
    void on_noisePowerSlider_valueChanged(int value);
    void on_buttonOriginalView1_clicked();
    void on_buttonProccessedView1_clicked();
    void on_noiseStdDev_valueChanged(int value);
    void on_comboBoxColorspace_currentIndexChanged(int index);
    void on_openImageButton_clicked();
    void on_comboBox2_currentIndexChanged(int index);
    void on_comboBoxMorpho_currentIndexChanged(int index);
    void on_morphSlider_valueChanged(int value);
    void on_yPositionBar_valueChanged(int value);
    void on_xPositionBar_valueChanged(int value);
    void on_resetButton1_clicked();
    void on_resetButton2_clicked();
    void on_filterStrengthSlider_valueChanged(int value);
    void on_radioButtonIm_toggled(bool checked);
    void on_radioButtonIm2_toggled(bool checked);
    void on_cannySlider1_valueChanged(int value);
    void on_cannySlider2_valueChanged(int value);
    void on_houghSlider_valueChanged(int value);
    void on_buttonOriginalView2_clicked();
    void on_buttonProccessedView2_clicked();
    void on_comboBox3_currentIndexChanged(int index);
    void on_threshSlider_valueChanged(int value);
    void on_resetButton3_clicked();
    void on_comboBoxFeatures_currentIndexChanged(int index);
    void on_featureSlider_valueChanged(int value);
    void on_radioButtonIm3_toggled(bool checked);
    void on_viewButton1_clicked();
    void on_viewButton2_clicked();
    void on_buttonVisualizeView0_clicked();
    void on_fundamentalComboBox_currentIndexChanged(int index);
    void on_featureSlider2_valueChanged(int value);
    void on_resetButton4_clicked();
    void on_buttonOriginalView3_clicked();
    void on_buttonProccessedView3_clicked();
    void on_buttonVisualizeView1_clicked();
    void on_buttonVisualizeView2_clicked();
    void on_comboBox4_currentIndexChanged(int index);
    void on_radioButtonLeft_toggled(bool checked);
    void on_calibrateButton_clicked(bool checked);
    void on_radioButtonF_clicked();
    void on_radioButtonH_clicked();
    void on_radioButtonE_clicked();
    void on_buttonSpecial11_clicked();
    void on_buttonSpecial12_clicked();
    void on_buttonSpecial1_clicked(bool checked);
    void on_transparencyBar_valueChanged(int value);
    void on_buttonSpecial2_clicked(bool checked);
    void on_buttonSpecial21_clicked();
    void on_buttonSpecial22_clicked();
    void on_buttonSpecial13_clicked();
    void on_buttonSpecial23_clicked();

private:
    bool viewImage1Exist;
    bool viewImage2Exist;
    QImage *viewImage1;
    QImage *viewImage2;
    Ui::MainWindow *ui;
    QThread* visionThread;
    ComputerVisionInterface *computerVision;
    QTimer *timerImage; //show image yet?
    QTimer *timerVideo; //are there still video frames?
    int currentView; /*0=original, 1=proccessed*/
    int stereoView;/*0: original, 1: view 1, 2: view 2*/
    int matrixview; /*0=F,1=H,2=E*/
    bool camState;
    bool frameState;
    void setTab1ToDefault();
    void setTab2ToDefault();
    void setTab3ToDefault();
    void setTab4ToDefault();
    void setAllToDefault();
    int counterIms;
};

#endif // MAINWINDOW_H
