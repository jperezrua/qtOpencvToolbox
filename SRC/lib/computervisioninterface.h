#ifndef COMPUTERVISIONINTERFACE_H
#define COMPUTERVISIONINTERFACE_H

#include <QObject>
#include <QImage>
#include <QString>
#include <string>
#include "opencv2/opencv.hpp"

#define _ON_CAM    1
#define _ON_FRAME  2
#define _NONE      0

class ComputerVisionInterface : public QObject{
    Q_OBJECT
public:
    ComputerVisionInterface();
    ~ComputerVisionInterface();
    void setLoopLock(bool);
    void setWorkingOnCam(bool);
    void setWorkingOnFrame(bool);
    void setWorkingOnVideo(bool);
    inline int getWorkingOn(){if(this->workingOnCam)return _ON_CAM; if(this->workingOnFrame)return _ON_FRAME; return _NONE;}
    bool setVideoCapturer1(int device=CV_CAP_ANY);
    bool setVideoCapturer2(int device=CV_CAP_ANY);
    void freeVideoCapturer1();
    void freeVideoCapturer2();
    void setSaltPepperNoise(bool activated, int power=50/*min=0, max=99*/);
    void setGaussianNoise(bool activated, int power=50/*min=0, max=99*/, int stddev=10 /*min=0, max=99*/);
    void setNoisePower(int val/*min=0, max=99*/);
    void setNoiseStdDev(int val/*min=0, max=99*/);
    void rgbToGray(bool active);
    void setUpdateHistogram(bool active);
    void setHistogramEqualization(bool active);
    void setRGBToHSV(bool);
    void setRGBToLUV(bool);
    void setRGBToYCbCr(bool);
    void setRGBToHLS(bool);
    void setRGBToXYZ(bool);
    void setRGBToLAB(bool);
    void setLogo(bool, QString, double, double);
    void setLogoPosition(double, double);
    void setFrameFilename(QString);
    void setVideoFilename(QString);
    void stopThis();
    bool getEndVideo();
    void applyFilter(QString type, double param);
    void setFilterParam(double);
    void applyMorpho(QString type, double param);
    void setMorphoSize(double sz);
    void applyHough(QString type, double param);
    void setHoughParams(double);
    void applyCanny(bool, double, double);
    void setCannyParams(double, double);
    void findConObjs(bool);
    void setThreshold(double);
    void findContours(bool);
    void findShapeDescriptor(QString type);
    void findFeature(QString type);
    void setFeatureParam(double v);

signals:
    void finished();
    void error(QString err);

public slots:
    void process();

private:
    bool loopLocked;

    bool workingOnCam;
    bool workingOnFrame;
    bool workingOnVideo;
    bool addSaltPepperNoise;
    bool addGaussianNoise;
    bool updateHistogram;
    bool equalizeHistogram;
    int noisePower;
    int noiseStdDev;
    bool convertToGray;
    bool rgbToHsv;
    bool rgbToLab;
    bool rgbToXyz;
    bool rgbToYcbcr;
    bool rgbToLuv;
    bool rgbToHls;
    bool logoActivated;
    double xlogo;
    double ylogo;
    bool endVideo;
    QString filter;
    QString morpho;
    QString hough;
    QString shape;
    QString feature;
    double featureParam;
    int morphoSize;
    double filterParam;
    double houghParam;
    bool canny;
    double cannyParam1;
    double cannyParam2;
    bool conObjs;
    bool contours;
    double threshold;
    std::string logoFilename;
    std::string frameFilename;
    std::string videoFilename;
    cv::VideoCapture capture1;
    cv::VideoCapture capture2;
    QImage Mat2QImage(IplImage *);
    QImage Mat2QImage(cv::Mat &);
    void computerVisionMachine(void);
    cv::Mat drawHistogram(cv::Mat src);
};

#endif // COMPUTERVISIONINTERFACE_H
