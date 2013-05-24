#-------------------------------------------------
#
# Project created by QtCreator 2013-02-19T01:09:17
#
#-------------------------------------------------

QT       += core gui

TARGET = VPProject1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    lib/computervisioninterface.cpp \
    lib/robustmatcher.cpp \
    lib/cameracalibrator.cpp

INCLUDEPATH += /usr/local/include/opencv/

HEADERS  += mainwindow.h \
    lib/computervisioninterface.h \
    lib/robustmatcher.h \
    lib/cameracalibrator.h

FORMS    += mainwindow.ui

LIBS+=-L/usr/local/lib \
-lopencv_core \
-lopencv_highgui \
-lopencv_imgproc \
-lopencv_objdetect \
-lgomp \
-lm \
-lopencv_nonfree \
-lopencv_features2d \
-lopencv_flann \
-lopencv_calib3d \
-lm \
-lopencv_stitching \
-lopencv_contrib

 CONFIG += qtestlib

RESOURCES += \
    Resources/list.qrc

OTHER_FILES +=
