#include "camerastream.h"

cameraStream::cameraStream(QWidget *parent)
    : QWidget{parent},
    camera(0),
    count(0),
    isCapturingImage(false),
    img(nullptr),
    captureSession(nullptr)
{

    start = new QPushButton("Start");

    capture = new QPushButton("Capture");

    stop = new QPushButton("Stop");

    pause = new QPushButton("Pause");

    if (checkCameraAvailibility()){

        qDebug() <<"Camera Is available";


        camera = new QCamera(this);

        captureSession = new QMediaCaptureSession; // on heap

        img = new QImageCapture;

        QCameraDevice cameraDevice = camera->cameraDevice();

        if (cameraDevice.position() == QCameraDevice::UnspecifiedPosition){
            qDebug() << "The camera is on the front face of the hardware system.";
        }
        else if(cameraDevice.position() == QCameraDevice::BackFace){
            qDebug() << "The camera is on the back face of hardware system";
        }


        viewfinder = new QVideoWidget;

        // set camera
        captureSession->setCamera(camera);

        // set img capture
        captureSession->setImageCapture(img);


        captureSession->setVideoOutput(viewfinder);

        QHBoxLayout *camLayout = new QHBoxLayout;
        camLayout->addWidget(viewfinder);



        connect(start, &QPushButton::clicked, this, &cameraStream::startCamera);

        connect(capture, &QPushButton::clicked, this, &cameraStream::captureFrame);

        connect(pause, &QPushButton::clicked, this, &cameraStream::pauseCam);

        connect(stop, &QPushButton::clicked, this, &cameraStream::stopCam);

        camLayout->addWidget(start);
        camLayout->addWidget(stop);
        camLayout->addWidget(pause);
        camLayout->addWidget(capture);



    }else {
        qDebug() << "Camera is not available.";
    }

}


bool cameraStream::checkCameraAvailibility()
{
    if(QMediaDevices::videoInputs().count() > 0){
        qDebug() << "There is cam";
        return true;
    }
    else{
        return false;
    }
}

void cameraStream::startCamera()
{
    // camera->startTimer();
    camera->start(); // to start the camera
}

void cameraStream::captureFrame()
{
    if (!camera->isActive()){
        qDebug() << "Camera is not active";
        return;
    }
    QString name ="/home/fikrat/img" + QString::number(count) + ".jpg";
    qDebug() << "Image Saved: in location " << name;
    img->captureToFile(name);

    if (img->error()){
        qDebug() << "Image Capture Failed;" << img->errorString();
    }else{
        qDebug() << "Image Saved in Location" << name;
         count ++;
    }


}

void cameraStream::pauseCam()
{
    if(camera->isActive()){
        camera->stop();
        //camera->
    }
    qDebug()<<"pause cam";

}

void cameraStream::stopCam()
{
    // if camera is  active = true
    if (camera->isActive()){
        camera->stop();
    }
    qDebug()<<"stop cam";


}

