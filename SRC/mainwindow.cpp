#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    this->timerImage = new QTimer();
    this->timerVideo = new QTimer();
    this->currentView = 1;
    this->stereoView = 0;
    this->matrixview = 0;
    this->counterIms = 0;
    this->camState = false;
    this->frameState = false;

    this->viewImage1Exist=false;
    this->viewImage2Exist=false;

    ui->actionsText->appendPlainText("Program started.");
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::start_computervision_thread(){
    this->visionThread = new QThread();
    this->computerVision = new ComputerVisionInterface();
    this->computerVision->moveToThread(this->visionThread);
    //this->computerVision->setLoopLock(true);

    connect(this->visionThread, SIGNAL(started()),
            this->computerVision, SLOT(process()));
    connect(this->computerVision, SIGNAL(finished()),
            this->visionThread, SLOT(quit()));
    connect(this->computerVision, SIGNAL(finished()),
            this->computerVision, SLOT(deleteLater()));
    connect(this->visionThread, SIGNAL(finished()),
            this->visionThread, SLOT(deleteLater()));
    this->visionThread->start();
}

/* Working on CAM */
void MainWindow::on_buttonCam1_clicked(){
    this->camState=!this->camState;

    if (this->camState){
        /*
        Steps to start video processing:
        1. start computer vision thread
        2. start image updater
        3. set workingoncam flag to true
        */
        ui->actionsText->appendPlainText("Camera Started.");
        ui->buttonCam1->setText("Stop CAM");
        ui->cameraLabel->setText("Camera Open");
        start_computervision_thread();
        start_timer_image();
        computerVision->setWorkingOnCam(true);
        computerVision->setWorkingOnFrame(false);
        ui->tabWidget->setEnabled(true);
        ui->openImageButton->setEnabled(false);
        this->setAllToDefault();
    }else{
        ui->actionsText->setPlainText("Camera Stopped.");
        computerVision->setWorkingOnCam(false);
        ui->buttonCam1->setText("Start CAM");
        ui->cameraLabel->setText("Camera Closed");
        ui->comboBoxColorspace->setCurrentIndex(0);
        ui->comboBox1->setCurrentIndex(0);
        this->computerVision->stopThis();
        this->visionThread->quit();
        ui->tabWidget->setEnabled(false);
        ui->openImageButton->setEnabled(true);
    }
}

/* Working on FRAME */
void MainWindow::on_openImageButton_clicked(){
    this->frameState=!this->frameState;

    if (this->frameState){
        /*
        Steps to start image processing:
        1. open image
        2. start computer vision thread
        3. start image updater
        4. set workingoncam flag to true
        */
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open image"), "/home", tr("Multimedia (*.jpg *.png *.mp4 *.avi *.mkv)"));
        QStringList partedList = fileName.split(".", QString::SkipEmptyParts);
        QString extension = partedList.at(partedList.size()-1);

        if (extension.compare(extension,"jpg",Qt::CaseInsensitive)==0 ||
            extension.compare(extension,"png",Qt::CaseInsensitive)==0){
            ui->actionsText->appendPlainText(QString("File ").append(fileName).append(" opened."));
            ui->buttonCam1->setEnabled(false);
            ui->openImageButton->setText("Stop File");
            ui->frameLabel->setText("Image Opened");
            start_computervision_thread();
            start_timer_image();
            computerVision->setFrameFilename(fileName);
            computerVision->setWorkingOnFrame(true);
            computerVision->setWorkingOnCam(false);
            computerVision->setWorkingOnVideo(false);
            start_timer_video();
            ui->tabWidget->setEnabled(true);
            this->setAllToDefault();
        }else if(extension.compare(extension,"mp4",Qt::CaseInsensitive)==0 ||
                 extension.compare(extension,"avi",Qt::CaseInsensitive)==0 ||
                 extension.compare(extension,"mkv",Qt::CaseInsensitive)==0){
            ui->actionsText->appendPlainText(QString("File ").append(fileName).append(" opened."));
            ui->buttonCam1->setEnabled(false);
            ui->openImageButton->setText("Stop File");
            ui->frameLabel->setText("Video Opened");
            start_computervision_thread();
            start_timer_image();
            computerVision->setWorkingOnVideo(true);
            computerVision->setVideoFilename(fileName);
            computerVision->setWorkingOnFrame(false);
            computerVision->setWorkingOnCam(false);
            start_timer_video();
            ui->tabWidget->setEnabled(true);
            this->setAllToDefault();
        }
    }else{
        ui->actionsText->setPlainText("File closed.");
        computerVision->setWorkingOnFrame(false);
        computerVision->setWorkingOnVideo(false);
        ui->openImageButton->setText("Open File...");
        ui->frameLabel->setText("File Closed");
        ui->comboBoxColorspace->setCurrentIndex(0);
        ui->comboBox1->setCurrentIndex(0);
        this->computerVision->stopThis();
        this->visionThread->quit();
        ui->tabWidget->setEnabled(false);
        ui->buttonCam1->setEnabled(true);
        this->timerVideo->stop();
    }
}

void MainWindow::check_video_playing(){
    if ( this->computerVision->getEndVideo() ){

        computerVision->setWorkingOnFrame(false);
        computerVision->setWorkingOnVideo(false);
        computerVision->setWorkingOnCam(false);

        this->computerVision->setLoopLock(false);
        this->computerVision->stopThis();
        this->visionThread->quit();

        this->frameState=!this->frameState;
        ui->openImageButton->setText("Open File...");
        ui->openImageButton->setEnabled(true);
        ui->frameLabel->setText("File Finished");
        ui->tabWidget->setEnabled(false);
        ui->buttonCam1->setEnabled(true);
        ui->openImageButton->setEnabled(true);
        timerVideo->stop();
    }
}

void MainWindow::update_image_label(){
    extern QImage qImage1;
    extern QImage qProccessedImage;
    extern QImage qImage1Histogram;

    if (ui->tabWidget->currentIndex()==0){
        ui->Image1_2->setPixmap(QPixmap::fromImage(qImage1));
        ui->Image1_2->show();
        if (ui->radioButtonIm->isChecked()){
            ui->Image1_3->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image1_3->show();
        }else{
            ui->Image1_3->setPixmap(QPixmap::fromImage(qImage1Histogram));
            ui->Image1_3->show();
        }
        if (currentView){
            ui->Image1_1->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image1_1->show();
        }else{
            ui->Image1_1->setPixmap(QPixmap::fromImage(qImage1));
            ui->Image1_1->show();
        }
    }
    if (ui->tabWidget->currentIndex()==1){
        ui->Image2_2->setPixmap(QPixmap::fromImage(qImage1));
        ui->Image2_2->show();
        ui->Image2_3->setPixmap(QPixmap::fromImage(qProccessedImage));
        ui->Image2_3->show();
        if (ui->radioButtonIm2->isChecked()){
            ui->Image2_3->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image2_3->show();
        }else{
            ui->Image2_3->setPixmap(QPixmap::fromImage(qImage1Histogram));
            ui->Image2_3->show();
        }
        if (currentView){
            ui->Image2_1->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image2_1->show();
        }else{
            ui->Image2_1->setPixmap(QPixmap::fromImage(qImage1));
            ui->Image2_1->show();
        }
    }
    if (ui->tabWidget->currentIndex()==2){
        ui->Image3_2->setPixmap(QPixmap::fromImage(qImage1));
        ui->Image3_2->show();
        ui->Image3_3->setPixmap(QPixmap::fromImage(qProccessedImage));
        ui->Image3_3->show();
        if (ui->radioButtonIm3->isChecked()){
            ui->Image3_3->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image3_3->show();
        }else{
            ui->Image3_3->setPixmap(QPixmap::fromImage(qImage1Histogram));
            ui->Image3_3->show();
        }
        if (currentView){
            ui->Image3_1->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image3_1->show();
        }else{
            ui->Image3_1->setPixmap(QPixmap::fromImage(qImage1));
            ui->Image3_1->show();
        }
    }
    if (ui->tabWidget->currentIndex()==3){
        if (this->stereoView==0){
            ui->Image4_1->setPixmap(QPixmap::fromImage(qProccessedImage));
            ui->Image4_1->show();
        }
        if (this->stereoView==1){
            ui->Image4_1->setPixmap(QPixmap::fromImage(*viewImage1));
            ui->Image4_1->show();
        }if (this->stereoView==2){
            ui->Image4_1->setPixmap(QPixmap::fromImage(*viewImage2));
            ui->Image4_1->show();
        }

        extern double FM[3][3];
        char text[100]; //You always need C :)

        switch (this->matrixview){
        case 0:{
            sprintf(text, "%.4g", FM[0][0]);
            ui->matrix00->setText(QString(text));
            sprintf(text, "%.4g", FM[0][1]);
            ui->matrix01->setText(QString(text));
            sprintf(text, "%.4g", FM[0][2]);
            ui->matrix02->setText(QString(text));
            sprintf(text, "%.4g", FM[1][0]);
            ui->matrix10->setText(QString(text));
            sprintf(text, "%.4g", FM[1][1]);
            ui->matrix11->setText(QString(text));
            sprintf(text, "%.4g", FM[1][2]);
            ui->matrix12->setText(QString(text));
            sprintf(text, "%.4g", FM[2][0]);
            ui->matrix20->setText(QString(text));
            sprintf(text, "%.4g", FM[2][1]);
            ui->matrix21->setText(QString(text));
            sprintf(text, "%.4g", FM[2][2]);
            ui->matrix22->setText(QString(text));
            }break;
        case 1:{
            extern double HG[3][3];
            sprintf(text, "%.4g", HG[0][0]);
            ui->matrix00->setText(QString(text));
            sprintf(text, "%.4g", HG[0][1]);
            ui->matrix01->setText(QString(text));
            sprintf(text, "%.4g", HG[0][2]);
            ui->matrix02->setText(QString(text));
            sprintf(text, "%.4g", HG[1][0]);
            ui->matrix10->setText(QString(text));
            sprintf(text, "%.4g", HG[1][1]);
            ui->matrix11->setText(QString(text));
            sprintf(text, "%.4g", HG[1][2]);
            ui->matrix12->setText(QString(text));
            sprintf(text, "%.4g", HG[2][0]);
            ui->matrix20->setText(QString(text));
            sprintf(text, "%.4g", HG[2][1]);
            ui->matrix21->setText(QString(text));
            sprintf(text, "%.4g", HG[2][2]);
            ui->matrix22->setText(QString(text));
            }break;
        case 2:{
            extern double EC[3][3];
            sprintf(text, "%.4g", EC[0][0]);
            ui->matrix00->setText(QString(text));
            sprintf(text, "%.4g", EC[0][1]);
            ui->matrix01->setText(QString(text));
            sprintf(text, "%.4g", EC[0][2]);
            ui->matrix02->setText(QString(text));
            sprintf(text, "%.4g", EC[1][0]);
            ui->matrix10->setText(QString(text));
            sprintf(text, "%.4g", EC[1][1]);
            ui->matrix11->setText(QString(text));
            sprintf(text, "%.4g", EC[1][2]);
            ui->matrix12->setText(QString(text));
            sprintf(text, "%.4g", EC[2][0]);
            ui->matrix20->setText(QString(text));
            sprintf(text, "%.4g", EC[2][1]);
            ui->matrix21->setText(QString(text));
            sprintf(text, "%.4g", EC[2][2]);
            ui->matrix22->setText(QString(text));
            }break;
        }
    }
    if (ui->tabWidget->currentIndex()==4){
        ui->ImageSpecial->setPixmap(QPixmap::fromImage(qProccessedImage));
        ui->ImageSpecial->show();
    }
}

void MainWindow::start_timer_image(){
    connect(timerImage, SIGNAL(timeout()), this, SLOT(update_image_label()));
    timerImage->start(10);
}

void MainWindow::start_timer_video(){
    connect(timerVideo, SIGNAL(timeout()), this, SLOT(check_video_playing()));
    timerVideo->start(50);
}

void MainWindow::on_comboBox1_currentIndexChanged(int index){
    /* Restore values */
    //this->setAllToDefault();

    switch (index){
    case 1: //SALT AND PEPPER NOISE
        /* Set Values */
        computerVision->setSaltPepperNoise(true);
        ui->noisePowerSlider->setEnabled(true);
        ui->noiseStdDev->setEnabled(false);
        ui->actionsText->appendPlainText("* Salt/Pepper noise added.");
        break;
    case 2: //GAUSSIAN NOISE
        /* Set Values */
        computerVision->setGaussianNoise(true);
        ui->noisePowerSlider->setEnabled(true);
        ui->noiseStdDev->setEnabled(true);
        ui->actionsText->appendPlainText("* Gaussian noise added.");
        break;
    case 3: //CHANGE COLORSPACE
        ui->comboBoxColorspace->setEnabled(true);
        break;

    case 4: //CONVERT TO GRAYSCALE
        ui->actionsText->appendPlainText("* Grayscale applied.");
        computerVision->rgbToGray(true);
        break;

    case 5: //HISTOGRAM EQUALIZATION
        ui->actionsText->appendPlainText("* Histogram equalization.");
        computerVision->setHistogramEqualization(true);
        break;

    case 6:{ //ADD LOGO
        ui->actionsText->appendPlainText("* Adding LOGO.");
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open image"), "/home", tr("JPG Files (*.jpg)"));
        computerVision->setLogo(true,fileName,ui->xPositionBar->value(), ui->yPositionBar->value());
        ui->xPositionBar->setEnabled(true);
        ui->yPositionBar->setEnabled(true);
        ui->transparencyBar->setEnabled(true);
    }break;

    default:
        break;
    }
}

void MainWindow::on_noisePowerSlider_valueChanged(int value){
    computerVision->setNoisePower(value);
}

void MainWindow::on_buttonOriginalView1_clicked(){
    this->currentView = 0;
}

void MainWindow::on_buttonProccessedView1_clicked(){
    this->currentView = 1;
}

void MainWindow::on_buttonOriginalView2_clicked(){
    this->currentView = 0;
}

void MainWindow::on_buttonProccessedView2_clicked(){
    this->currentView = 1;
}

void MainWindow::on_buttonOriginalView3_clicked(){
    this->currentView = 0;
}

void MainWindow::on_buttonProccessedView3_clicked(){
    this->currentView = 1;
}


void MainWindow::on_buttonVisualizeView1_clicked(){
    this->stereoView = 1;
}

void MainWindow::on_buttonVisualizeView2_clicked(){
    this->stereoView = 2;
}

void MainWindow::on_buttonVisualizeView0_clicked(){
    this->stereoView = 0;
}

void MainWindow::on_noiseStdDev_valueChanged(int value){
    computerVision->setNoiseStdDev(value);
}

void MainWindow::on_radioButtonIm_toggled(bool checked){
    computerVision->setUpdateHistogram(!checked);
}

void MainWindow::on_radioButtonIm2_toggled(bool checked){
    computerVision->setUpdateHistogram(!checked);
}


void MainWindow::on_radioButtonIm3_toggled(bool checked){
    computerVision->setUpdateHistogram(!checked);
}

void MainWindow::on_comboBoxColorspace_currentIndexChanged(int index){
    computerVision->setRGBToHLS(false);
    computerVision->setRGBToHSV(false);
    computerVision->setRGBToXYZ(false);
    computerVision->setRGBToYCbCr(false);
    computerVision->setRGBToLAB(false);
    computerVision->setRGBToLUV(false);
    switch (index){
    case 1: //HSV
        computerVision->setRGBToHSV(true);
        ui->actionsText->appendPlainText("RGB to HSV.");
        break;

    case 2: //HLS
        computerVision->setRGBToHLS(true);
        ui->actionsText->appendPlainText("RGB to HLS.");
        break;

    case 3: //YCbCr
        computerVision->setRGBToYCbCr(true);
        ui->actionsText->appendPlainText("RGB to YCbCr.");
        break;

    case 4: //CIE XYZ
        computerVision->setRGBToXYZ(true);
        ui->actionsText->appendPlainText("RGB to XYZ.");
        break;

    case 5: //CIE LAB
        computerVision->setRGBToLAB(true);
        ui->actionsText->appendPlainText("RGB to LAB.");
        break;
    case 6: //LUV
        computerVision->setRGBToLUV(true);
        ui->actionsText->appendPlainText("RGB to LUV.");
        break;
    }
}

void MainWindow::on_comboBox2_currentIndexChanged(int index){

    switch (index){
    case 1: //MORPHOLOGICAL
        /* Set Values */
        ui->morphSlider->setEnabled(true);
        ui->comboBoxMorpho->setEnabled(true);
        break;
    case 2: //BLUR
        computerVision->applyFilter("BLUR",ui->filterStrengthSlider->value());
        ui->filterStrengthSlider->setEnabled(true);
        ui->actionsText->appendPlainText("* Blurred");
        break;
    case 3: //SHARP
        computerVision->applyFilter("SHARP",ui->filterStrengthSlider->value());
        ui->filterStrengthSlider->setEnabled(true);
        ui->actionsText->appendPlainText("* Sharpened");
        break;
    case 4: //SOBEL
        computerVision->applyFilter("SOBEL",ui->filterStrengthSlider->value());
        ui->filterStrengthSlider->setEnabled(true);
        ui->actionsText->appendPlainText("* Sobel applied");
        break;
    case 5: //LAPLACIAN
        computerVision->applyFilter("LAPLACIAN",ui->filterStrengthSlider->value());
        ui->filterStrengthSlider->setEnabled(true);
        ui->actionsText->appendPlainText("* Laplacian applied");
        break;
    case 6: //CANNY
        ui->cannySlider1->setEnabled(true);
        ui->cannySlider2->setEnabled(true);
        computerVision->applyCanny(true,ui->cannySlider1->value(), ui->cannySlider2->value());
        ui->actionsText->appendPlainText("* CANNY applied");
        break;
    case 7: //HOUGH LINES
        ui->cannySlider1->setEnabled(true);
        ui->cannySlider2->setEnabled(true);
        ui->houghSlider->setEnabled(true);
        computerVision->applyHough("LINES",ui->filterStrengthSlider->value());
        ui->actionsText->setPlainText("* HOUGH Lines");
        break;
    case 8: //HOUGH CIRCLES
        ui->cannySlider1->setEnabled(true);
        ui->cannySlider2->setEnabled(true);
        ui->houghSlider->setEnabled(true);
        computerVision->applyHough("CIRCLES",ui->filterStrengthSlider->value());
        ui->actionsText->setPlainText("* HOUGH Circles");
        break;
    }
}

void MainWindow::on_comboBox3_currentIndexChanged(int index){
    switch (index){
    case 1:// CONNECTED OBJS
        computerVision->findConObjs(true);
        ui->threshSlider->setEnabled(true);
        ui->actionsText->setPlainText("* CONNECTED Objects");
        break;
    case 2: //CONTOURS
        computerVision->findContours(true);
        ui->threshSlider->setEnabled(true);
        ui->actionsText->setPlainText("* CONTOURS Objects");
        break;
    case 3: //BOUNDING BOX
        computerVision->findShapeDescriptor("BOX");
        ui->threshSlider->setEnabled(true);
        ui->actionsText->setPlainText("* Bounding Box");
        break;
    case 4: //MINIMUM ENCLOSING CIRCLES
        computerVision->findShapeDescriptor("CIRCLE");
        ui->threshSlider->setEnabled(true);
        ui->actionsText->setPlainText("* Minimum enclosing circles");
        break;
    case 5: //CENTROIDS
        computerVision->findShapeDescriptor("CENTER");
        ui->threshSlider->setEnabled(true);
        ui->actionsText->setPlainText("* Centroids");
        break;
    case 6: //Features
        ui->featureSlider->setEnabled(true);
        ui->comboBoxFeatures->setEnabled(true);
        break;
    }
}

void MainWindow::on_comboBoxMorpho_currentIndexChanged(int index){
    computerVision->applyMorpho("NONE",0);
    switch (index){
    case 1: //DILATE
        /* Set Values */
        computerVision->applyMorpho("DILATE",25);
        ui->actionsText->appendPlainText("* Dilated (Morph)");
        break;
    case 2: //ERODE
        /* Set Values */
        computerVision->applyMorpho("ERODE",25);
        ui->actionsText->appendPlainText("* Eroded (Morph)");
        break;
    case 3: //OPEN
        /* Set Values */
        computerVision->applyMorpho("OPEN",25);
        ui->actionsText->appendPlainText("* Opening (Morph)");
        break;
    case 4: //CLOSE
        /* Set Values */
        computerVision->applyMorpho("CLOSE",25);
        ui->actionsText->appendPlainText("* Closing (Morph)");
        break;
    }
}

void MainWindow::on_comboBoxFeatures_currentIndexChanged(int index){
    computerVision->findFeature("NONE");
    switch (index){
        case 1: //MSER
            ui->actionsText->appendPlainText("* MSER");
            computerVision->findFeature("MSER");
            break;
        case 2: //HARRIS
            ui->actionsText->appendPlainText("* HARRIS");
            computerVision->findFeature("HARRIS");
            break;
        case 3: //HARRIS NMS
            ui->actionsText->appendPlainText("* HARRIS_NMS");
            computerVision->findFeature("HARRIS_NMS");
            break;
        case 4: //STAR
            ui->actionsText->appendPlainText("* STAR");
            computerVision->findFeature("STAR");
            break;
        case 5: //FAST
            ui->actionsText->appendPlainText("* FAST");
            computerVision->findFeature("FAST");
            break;
        case 6: //SIFT
            ui->actionsText->appendPlainText("* SIFT");
            computerVision->findFeature("SIFT");
            break;
        case 7: //SURF
            ui->actionsText->appendPlainText("* SURF");
            computerVision->findFeature("SURF");
            break;
    }
}

void MainWindow::on_fundamentalComboBox_currentIndexChanged(int index){
    ui->featureSlider2->setEnabled(true);
    switch (index){
        case 1: // 7 POINT
            ui->actionsText->appendPlainText("* FUND: 7POINT");
            computerVision->computeFundamentalMatrix("7POINT");
            break;
        case 2: // 8 POINT
            ui->actionsText->appendPlainText("* FUND: 8POINT");
            computerVision->computeFundamentalMatrix("8POINT");
            break;
        case 3: // RANSAC
            ui->actionsText->appendPlainText("* FUND: RANSAC");
            computerVision->computeFundamentalMatrix("RANSAC");
            break;
        default:
            computerVision->computeFundamentalMatrix("NONE");
    }
}

void MainWindow::on_comboBox4_currentIndexChanged(int index){
    ui->featureSlider2->setEnabled(true);
    computerVision->computeFundamentalMatrix("NONE");

    switch (index){
        case 1: // EPIPOLAR
            ui->actionsText->appendPlainText("* EPIPOLAR");
            computerVision->applyStereoFun("EPIPOLAR");
            break;
        case 2: // HOMOGRAPHY
            ui->actionsText->appendPlainText("* HOMOGRAPHY");
            computerVision->applyStereoFun("HOMOGRAPHY");
            break;
        case 3: // MOSAIC
            ui->actionsText->appendPlainText("* MOSAIC");
            computerVision->applyStereoFun("MOSAIC");
            break;
        case 4: //MATCHES
            ui->actionsText->appendPlainText("* MATCHES");
            computerVision->applyStereoFun("MATCHES");
            break;
        default:
            computerVision->computeFundamentalMatrix("NONE");
    }
}

void MainWindow::setTab1ToDefault(){
    ui->noisePowerSlider->setValue(50);
    ui->noiseStdDev->setValue(50);
    ui->noisePowerSlider->setEnabled(false);
    ui->noiseStdDev->setEnabled(false);
    ui->comboBoxColorspace->setEnabled(false);
    ui->comboBox1->setCurrentIndex(0);
    ui->comboBoxColorspace->setCurrentIndex(0);
    ui->xPositionBar->setValue(95);
    ui->yPositionBar->setValue(95);
    ui->xPositionBar->setEnabled(false);
    ui->yPositionBar->setEnabled(false);
    ui->transparencyBar->setEnabled(false);

    computerVision->setSaltPepperNoise(false);
    computerVision->setGaussianNoise(false);
    computerVision->rgbToGray(false);
    computerVision->setHistogramEqualization(false);
    computerVision->setRGBToHLS(false);
    computerVision->setRGBToHSV(false);
    computerVision->setRGBToXYZ(false);
    computerVision->setRGBToYCbCr(false);
    computerVision->setRGBToLAB(false);
    computerVision->setRGBToLUV(false);
    computerVision->setLogo(false,"",0,0);
    computerVision->setLogoTransparency(50);
}

void MainWindow::setTab2ToDefault(){
    ui->comboBoxMorpho->setEnabled(false);
    ui->morphSlider->setEnabled(false);
    ui->filterStrengthSlider->setEnabled(false);
    ui->houghSlider->setEnabled(false);
    ui->morphSlider->setValue(50);
    ui->houghSlider->setValue(50);
    ui->cannySlider1->setEnabled(false);
    ui->cannySlider2->setEnabled(false);
    ui->cannySlider1->setValue(50);
    ui->cannySlider2->setValue(50);
    ui->filterStrengthSlider->setValue(50);
    ui->comboBox2->setCurrentIndex(0);
    ui->comboBoxMorpho->setCurrentIndex(0);

    computerVision->applyFilter("NONE",0);
    computerVision->applyMorpho("NONE",0);
    computerVision->applyHough("NONE",0);
    computerVision->applyCanny(false,50, 50);
}

void MainWindow::setTab3ToDefault(){
    ui->comboBoxFeatures->setEnabled(false);
    ui->featureSlider->setEnabled(false);
    ui->threshSlider->setEnabled(false);
    ui->comboBox3->setCurrentIndex(0);
    ui->comboBoxFeatures->setCurrentIndex(0);

    computerVision->findConObjs(false);
    computerVision->findContours(false);
    computerVision->findShapeDescriptor("NONE");
}

void MainWindow::setTab4ToDefault(){
    ui->fundamentalComboBox->setCurrentIndex(0);
    ui->comboBox4->setCurrentIndex(0);
    ui->featureSlider2->setEnabled(false);

    computerVision->computeFundamentalMatrix("NONE");
    computerVision->applyStereoFun("NONE");
    computerVision->calibrateCam(false);
}

void MainWindow::setAllToDefault(){
    setTab1ToDefault();
    setTab2ToDefault();
    setTab3ToDefault();
    setTab4ToDefault();
}

void MainWindow::on_morphSlider_valueChanged(int value){
    computerVision->setMorphoSize(value/2);
}

void MainWindow::on_yPositionBar_valueChanged(int value){
    computerVision->setLogoPosition(ui->xPositionBar->value(), value);
}

void MainWindow::on_xPositionBar_valueChanged(int value){
    computerVision->setLogoPosition(value, ui->yPositionBar->value());
}


void MainWindow::on_transparencyBar_valueChanged(int value){
    computerVision->setLogoTransparency(value);
}

void MainWindow::on_resetButton1_clicked(){
    setTab1ToDefault();
    ui->actionsText->setPlainText("Noise/Color reset.");
}

void MainWindow::on_resetButton2_clicked(){
    setTab2ToDefault();
    ui->actionsText->setPlainText("Space reset.");
}

void MainWindow::on_resetButton3_clicked(){
    setTab3ToDefault();
    ui->actionsText->setPlainText("Feature reset.");
}

void MainWindow::on_resetButton4_clicked(){
    setTab4ToDefault();
    ui->actionsText->setPlainText("Stereo reset.");
}

void MainWindow::on_filterStrengthSlider_valueChanged(int value){
    computerVision->setFilterParam(value);
}

void MainWindow::on_cannySlider1_valueChanged(int value){
    computerVision->setCannyParams(value, ui->cannySlider2->value());
}

void MainWindow::on_cannySlider2_valueChanged(int value){
    computerVision->setCannyParams(ui->cannySlider1->value(),value);
}

void MainWindow::on_houghSlider_valueChanged(int value){
    computerVision->setHoughParams(value);
}

void MainWindow::on_threshSlider_valueChanged(int value){
    computerVision->setThreshold(value);
}

void MainWindow::on_featureSlider_valueChanged(int value){
    computerVision->setFeatureParam(value);
}

void MainWindow::on_featureSlider2_valueChanged(int value){
    computerVision->setFeatureParam(value);
}

void MainWindow::on_viewButton1_clicked(){
    extern QImage qImage1;
    computerVision->selectView1();
    this->viewImage1 = new QImage(qImage1);
    ui->Image4_2->setPixmap(QPixmap::fromImage(*viewImage1));
    ui->Image4_2->show();
    this->viewImage1Exist=true;
    if (this->viewImage1Exist && this->viewImage2Exist){
        ui->buttonVisualizeView0->setEnabled(true);
        ui->buttonVisualizeView1->setEnabled(true);
        ui->buttonVisualizeView2->setEnabled(true);
        ui->fundamentalComboBox->setEnabled(true);
        ui->comboBox4->setEnabled(true);
    }
}

void MainWindow::on_viewButton2_clicked(){
    extern QImage qImage1;
    computerVision->selectView2();
    this->viewImage2 = new QImage(qImage1);
    ui->Image4_3->setPixmap(QPixmap::fromImage(*viewImage2));
    ui->Image4_3->show();
    this->viewImage2Exist=true;
    if (this->viewImage1Exist && this->viewImage2Exist){
        ui->buttonVisualizeView0->setEnabled(true);
        ui->buttonVisualizeView1->setEnabled(true);
        ui->buttonVisualizeView2->setEnabled(true);
        ui->fundamentalComboBox->setEnabled(true);
        ui->comboBox4->setEnabled(true);
    }
}


void MainWindow::on_radioButtonLeft_toggled(bool checked){
    if (checked)
        computerVision->setIm2Show(1);
    else
        computerVision->setIm2Show(2);
}

void MainWindow::on_calibrateButton_clicked(bool checked){
    ui->actionsText->appendPlainText("* Calibrating camera.");
    computerVision->calibrateCam(checked);
}


void MainWindow::on_radioButtonF_clicked(){
    if (ui->radioButtonE->isChecked()){
        this->matrixview=2;
    }
    if (ui->radioButtonH->isChecked()){
        this->matrixview=1;
    }
    if (ui->radioButtonF->isChecked()){
        this->matrixview=0;
    }
}
void MainWindow::on_radioButtonH_clicked(){
    if (ui->radioButtonE->isChecked()){
        this->matrixview=2;
    }
    if (ui->radioButtonH->isChecked()){
        this->matrixview=1;
    }
    if (ui->radioButtonF->isChecked()){
        this->matrixview=0;
    }
}
void MainWindow::on_radioButtonE_clicked(){
    if (ui->radioButtonE->isChecked()){
        this->matrixview=2;
    }
    if (ui->radioButtonH->isChecked()){
        this->matrixview=1;
    }
    if (ui->radioButtonF->isChecked()){
        this->matrixview=0;
    }
}

void MainWindow::on_buttonSpecial1_clicked(){

}

void MainWindow::on_buttonSpecial11_clicked(){
    computerVision->addFrameToStitcher();
    this->counterIms++;
    char text[200]="";
    sprintf(text, "%d Images Selected",this->counterIms);
    ui->numimagesLabel->setText(text);
}

void MainWindow::on_buttonSpecial12_clicked(){
    computerVision->startStitcher(true);
}

void MainWindow::on_buttonSpecial1_clicked(bool checked){
    if (checked){
        // Restart everything
        this->setAllToDefault();
        ui->buttonSpecial1->setText("Stop and Clear");
        ui->buttonSpecial11->setEnabled(true);
        ui->buttonSpecial12->setEnabled(true);
    }else{
        ui->buttonSpecial1->setText("Robust Mosaic");
        ui->buttonSpecial11->setEnabled(false);
        ui->buttonSpecial12->setEnabled(false);
        this->counterIms = 0;
        char text[200]="";
        sprintf(text, "%d Images Selected",this->counterIms);
        ui->numimagesLabel->setText(text);
        computerVision->startStitcher(false);
        computerVision->clearStitcher();
    }
}


