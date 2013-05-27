/*
    @file: cameracalibrator.h
    @license: GNU General Public License
    @author: Juan Manuel Perez Rua
    @note: Code written for th practical module of
    Visual Perception at the Université de Bourgogne
*/

#ifndef CAMERACALIBRATOR_H
#define CAMERACALIBRATOR_H

#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/opencv.hpp"

class CameraCalibrator
{
public:
    CameraCalibrator();
    int addChessboardPoints(cv::Mat & image, cv::Size boardSize);
    void addPoints(const std::vector<cv::Point2f>& imageCorners,
                   const std::vector<cv::Point3f>& objectCorners);
    double calibrate(cv::Size imageSize);
    cv::Mat remap(const cv::Mat &image);
    cv::Mat getCameraMatrix();
private:
    std::vector< std::vector<cv::Point3f> > objectPoints;
    std::vector< std::vector<cv::Point2f> > imagePoints;
    cv::Mat cameraMatrix;
    cv::Mat distCoeffs;
    int flag;
    cv::Mat map1,map2;
    bool mustInitUndistort;
};

#endif // CAMERACALIBRATOR_H
