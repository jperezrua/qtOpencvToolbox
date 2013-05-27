#-------------------------------------------------
#
# Project created by QtCreator 2013-02-19T01:09:17
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = VPProject1
TEMPLATE = app
OBJECTS_DIR = intermediate
SOURCES += main.cpp\
        mainwindow.cpp \
        lib/computervisioninterface.cpp \
        lib/robustmatcher.cpp \
        lib/cameracalibrator.cpp \
        lib/mypanelopengl.cpp \
        mySFM/AbstractFeatureMatcher.cpp \
        mySFM/BundleAdjuster.cpp \
        mySFM/Common.cpp \
        mySFM/Distance.cpp \
        mySFM/FeatureMatching.cpp \
        mySFM/FindCameraMatrices.cpp \
        mySFM/GPUSURFFeatureMatcher.cpp \
        mySFM/MultiCameraDistance.cpp \
        mySFM/MultiCameraPnP.cpp \
        mySFM/OFFeatureMatcher.cpp \
        mySFM/RichFeatureMatcher.cpp \
        mySFM/SfMUpdateListener.cpp \
        mySFM/Triangulation.cpp \
    lib/mysfminterface.cpp


INCLUDEPATH += /usr/local/include/opencv/ \
                lib/ \
                /usr/include/pcl-1.6/ \
                /usr/include/flann/ \
                /usr/include/eigen3/ \
                /usr/include/openni/ \
                /usr/include/boost/ \
                /usr/include/vtk-5.8/ \
                mySFM

HEADERS  += mainwindow.h \
    lib/computervisioninterface.h \
    lib/robustmatcher.h \
    lib/cameracalibrator.h \
    lib/mypanelopengl.h \
    lib/mysfminterface.h

FORMS    += mainwindow.ui

LIBS += -lOpenNI \
         -lpcl_io \
         -lpcl_filters \
         -lpcl_kdtree \
         -lpcl_registration \
         -lpcl_features \
         -lpcl_segmentation \
         -L/usr/lib -lvtkCommon -lvtksys -lvtkViews -lvtkWidgets  -lvtkRendering -lvtkGraphics -lvtkImaging -lvtkIO -lvtkFiltering -lvtkDICOMParser -lvtkmetaio -lvtkexoIIc -lvtkHybrid \
         -L/usr/lib -lboost_thread

LIBS += `pkg-config opencv --libs`
LIBS += -lGL \
        -lGLU \
        -lglut

CONFIG += qtestlib

RESOURCES += \
    Resources/list.qrc

OTHER_FILES +=
