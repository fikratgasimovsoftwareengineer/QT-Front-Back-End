#ifndef CAMERASTREAM_H
#define CAMERASTREAM_H

#include <QWidget>
#include <QMediaDevices>
#include <QList>
#include <QCamera>
#include <QCameraDevice>
#include <QVideoWidget>
#include <QMediaCaptureSession>
#include <QImage>
#include <QImageCapture>
#include <QByteArray>
#include <QCamera>
#include <QGraphicsWidget>
#include <QMediaRecorder>
#include <QVBoxLayout>
#include <QPushButton>
#include <QCameraFormat>


class cameraStream : public QWidget
{
    Q_OBJECT
public:
    explicit cameraStream(QWidget *parent = nullptr);
    bool checkCameraAvailibility();

    bool isActive() const;\
    QVideoWidget *viewfinder;


    QPushButton *start;
    QPushButton *capture;
    QPushButton *pause;
    QPushButton *stop;

    QSize resolution() const;
signals:
    void activeChanged(bool);


public slots:
    // start camera

    void startCamera();

    // capture camera
    void captureFrame();

    // pause

    void pauseCam();
    // stop camera

    void stopCam();


private:
    QCamera *camera;

    QImageCapture *img;


    QMediaCaptureSession *captureSession;
    bool isCapturingImage;

    int count;





};

#endif // CAMERASTREAM_H
