/*
    @file: mypanelopengl.cpp
    @license: GNU General Public License
    @author: Juan Manuel Perez Rua
    @note: Code written for th practical module of
    Visual Perception at the Université de Bourgogne
*/

#include "mypanelopengl.h"
#include <QtGui>
#include <QGLWidget>

#include "GL/glu.h"
#include "GL/glut.h"
#include "opencv2/core/core.hpp"

#include <iostream>

MyPanelOpenGL::MyPanelOpenGL(QWidget *parent) :
    QGLWidget(parent){
    clearColor = Qt::black;
    xRot = 0;
    yRot = 0;
    zRot = 0;
    typeDrawing = false;
}

MyPanelOpenGL::~MyPanelOpenGL(){
}

QSize MyPanelOpenGL::minimumSizeHint() const{
    return QSize(50, 50);
}

QSize MyPanelOpenGL::sizeHint() const{
    return QSize(200, 200);
}

void MyPanelOpenGL::rotateBy(int xAngle, int yAngle, int zAngle){
    xRot += xAngle;
    yRot += yAngle;
    zRot += zAngle;
    updateGL();
}

void MyPanelOpenGL::setClearColor(const QColor &color){
    clearColor = color;
    updateGL();
}

void MyPanelOpenGL::initializeGL(){
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glEnable(GL_TEXTURE_2D);
}

void MyPanelOpenGL::paintGL(){
    extern std::vector<cv::Point3d> structure;
    extern std::vector<cv::Vec3b> colors;

    qglClearColor(clearColor);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(xRot / 16.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(yRot / 16.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(zRot / 16.0f, 0.0f, 0.0f, 1.0f);

    // Enable blending
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


    glPointSize(1.3);
    glBegin(GL_POINTS);
    for (uint i=0;i<structure.size();i++){
        glColor3b(colors.at(i)[0],colors.at(i)[1],colors.at(i)[2]);
        glVertex3f(structure.at(i).x,-structure.at(i).y,-structure.at(i).z);
    }
    glEnd();
    std::cout<<"Drawed: "<<structure.size()<<" points"<<std::endl;
}

void MyPanelOpenGL::resizeGL(int width, int height){
    glViewport (0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective (45, (GLfloat)width / (GLfloat)height, 1.0, 1000.0);
    glMatrixMode (GL_MODELVIEW);
}

void MyPanelOpenGL::mousePressEvent(QMouseEvent *event){
    lastPos = event->pos();
}

void MyPanelOpenGL::mouseMoveEvent(QMouseEvent *event){
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        rotateBy(8 * dy, 8 * dx, 0);
    } else if (event->buttons() & Qt::RightButton) {
        rotateBy(8 * dy, 0, 8 * dx);
    }
    lastPos = event->pos();
}

void MyPanelOpenGL::mouseReleaseEvent(QMouseEvent * /* event */){
    emit clicked();
}

void MyPanelOpenGL::plotCloud(void){
    paintGL();
    updateGL();
}

void MyPanelOpenGL::toggleType(){
    this->typeDrawing=!this->typeDrawing;
}
