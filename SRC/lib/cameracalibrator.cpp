#include "cameracalibrator.h"


CameraCalibrator::CameraCalibrator(){
    this->flag=0;
    this->mustInitUndistort=true;
}

// Open chessboard images and extract corner points
int CameraCalibrator::addChessboardPoints(cv::Mat &image, cv::Size boardSize) {

    cv::Mat buffer;
    cv::cvtColor(image, buffer, CV_BGR2GRAY);
    // the points on the chessboard
    std::vector<cv::Point2f> imageCorners;
    std::vector<cv::Point3f> objectCorners;
    // 3D Scene Points:
    // Initialize the chessboard corners
    // in the chessboard reference frame
    // The corners are at 3D location (X,Y,Z)= (i,j,0)
    for (int i=0; i<boardSize.height; i++) {
        for (int j=0; j<boardSize.width; j++) {
            objectCorners.push_back(cv::Point3f(i, j, 0.0f));
        }
    }

    int successes = 0;

    // Get the chessboard corners
    bool found = cv::findChessboardCorners(buffer, boardSize, imageCorners);
    // Get subpixel accuracy on the corners
    if (found){
        cv::cornerSubPix(buffer, imageCorners,cv::Size(5,5),cv::Size(-1,-1),
        cv::TermCriteria(cv::TermCriteria::MAX_ITER + cv::TermCriteria::EPS,30,0.1)); // min accuracy
        //If we have a good board, add it to our data
        if (imageCorners.size() == (unsigned int)boardSize.area()) {
            // Add image and scene points from one view
            addPoints(imageCorners, objectCorners);
            successes++;
            cv::drawChessboardCorners(image, boardSize, imageCorners, found);
        }
    }

    return successes;
}

// Add scene points and corresponding image points
void CameraCalibrator::addPoints(const std::vector<cv::Point2f>&
    imageCorners, const std::vector<cv::Point3f>& objectCorners) {
    // 2D image points from one view
    imagePoints.push_back(imageCorners);
    // corresponding 3D scene points
    objectPoints.push_back(objectCorners);
}

// Calibrate the camera
// returns the re-projection error
double CameraCalibrator::calibrate(cv::Size imageSize){
    // undistorter must be reinitialized
    mustInitUndistort= true;
    //Output rotations and translations
    std::vector<cv::Mat> rvecs, tvecs;
    // start calibration
    return
    calibrateCamera(objectPoints,imagePoints,imageSize,
                    cameraMatrix,
                    distCoeffs,
                    rvecs, tvecs,
                    flag);
}

// remove distortion in an image (after calibration)
cv::Mat CameraCalibrator::remap(const cv::Mat &image) {
    cv::Mat undistorted;
    if (mustInitUndistort) { // called once per calibration
        cv::initUndistortRectifyMap(
        cameraMatrix, // computed camera matrix
        distCoeffs,
        // computed distortion matrix
        cv::Mat(),
        // optional rectification (none)
        cv::Mat(),
        // camera matrix to generate undistorted
        image.size(), // size of undistorted
        CV_32FC1,
        // type of output map
        map1, map2);
        // the x and y mapping functions
        mustInitUndistort= false;
    }
    // Apply mapping functions
    cv::remap(image, undistorted, map1, map2,
    cv::INTER_LINEAR); // interpolation type
    return undistorted;
}

cv::Mat CameraCalibrator::getCameraMatrix(){
    cv::Mat out;
    this->cameraMatrix.copyTo(out);
    return out;
}
