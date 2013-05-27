/*
    @file: mypanelopengl.h
    @license: GNU General Public License
    @author: Juan Manuel Perez Rua
    @note: Code written for th practical module of
    Visual Perception at the Université de Bourgogne
*/

#ifndef MYPANELOPENGL_H
#define MYPANELOPENGL_H

#include <QGLWidget>
#include <QVector>

class MyPanelOpenGL : public QGLWidget{
    Q_OBJECT
public:
    explicit MyPanelOpenGL(QWidget *parent = 0);
    ~MyPanelOpenGL();
public:
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void rotateBy(int xAngle, int yAngle, int zAngle);
    void setClearColor(const QColor &color);
    void toggleType();

public slots:
    void plotCloud();

signals:
    void clicked();

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    QColor clearColor;
    QPoint lastPos;
    int xRot;
    int yRot;
    int zRot;
    bool typeDrawing;
    QVector<QVector3D> vertices;
};

#endif // MYPANELOPENGL_H
