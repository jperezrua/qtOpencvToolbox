/*
    @file: mysfminterface.h
    @license: GNU General Public License
    @author: Juan Manuel Perez Rua
    @note: Code written for th practical module of
    Visual Perception at the Université de Bourgogne
*/

#ifndef ROBUSTMATCHER_H
#define ROBUSTMATCHER_H

#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/opencv.hpp"

class RobustMatcher{

public:
    RobustMatcher();
    void setFeatureDetector(cv::Ptr<cv::FeatureDetector>&);
    void setDescriptorExtractor(cv::Ptr<cv::DescriptorExtractor>& desc);
    void setConfidenceLevel(double val);
    void setMinDistanceToEpipolar(double val);
    void setRatio(double v);
    void setMethod(int m);
    cv::Mat match(cv::Mat &image1, cv::Mat &image2,
                  std::vector<cv::DMatch> &matches,
                  std::vector<cv::KeyPoint> &keypoints1,
                  std::vector<cv::KeyPoint> &keypoints2);
    int ratioTest(std::vector< std::vector<cv::DMatch> >&matches);
    void symmetryTest(const std::vector< std::vector<cv::DMatch> >& matches1,const std::vector< std::vector<cv::DMatch> >& matches2,
                      std::vector< cv::DMatch >& symMatches);
    cv::Mat ransacTest(const std::vector<cv::DMatch>& matches,
                                      const std::vector<cv::KeyPoint>& keypoints1,
                                      const std::vector<cv::KeyPoint>& keypoints2,
                                      std::vector<cv::DMatch>& outMatches);

private:
    // pointer to the feature point detector object
    cv::Ptr<cv::FeatureDetector> detector;
    // pointer to the feature descriptor extractor object
    cv::Ptr<cv::DescriptorExtractor> extractor;
    float ratio; // max ratio between 1st and 2nd NN
    bool refineF; // if true will refine the F matrix
    double distance; // min distance to epipolar
    double confidence; // confidence level (probability)
    int methodFM;
};

#endif // ROBUSTMATCHER_H
