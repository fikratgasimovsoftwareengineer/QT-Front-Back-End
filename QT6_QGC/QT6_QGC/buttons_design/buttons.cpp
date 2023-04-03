#include "buttons.h"

buttons::buttons(QWidget *parent)
    : QWidget(parent)
{

    //setGeometry(0,0, 640, 480);

    forwardSpeed = new QPushButton("F",this);
    backwordSpeed = new QPushButton("B",this);
    leftSpeed = new QPushButton("L",this);
    rightSpeed = new QPushButton("R",this);

   // forwardSpeed->setStyleSheet(":/style.qss");
    forwardSpeed->setStyleSheet("backgroundcolor: red;");
    backwordSpeed->setStyleSheet("background-color: gray;");
    leftSpeed->setStyleSheet("background-color: gold;");
    rightSpeed->setStyleSheet("background-color: gold;");

    QIcon icon_1(":/icons8-down-arrow-100.png");
    QIcon icon_2(":/icons8-left-arrow-100.png");
    QIcon icon_3(":/icons8-right-arrow-100.png");
    QIcon icon_4(":/icons8-up-arrow-100.png");


    forwardSpeed->setIcon(icon_4);
    backwordSpeed->setIcon(icon_1);
    leftSpeed->setIcon(icon_2);
    rightSpeed->setIcon(icon_3);

    // Set button positions and sizes
    forwardSpeed->setGeometry(QRect(QPoint(100, 100), QSize(100, 50)));
    backwordSpeed->setGeometry(QRect(QPoint(100, 200), QSize(100, 50)));
    leftSpeed ->setGeometry(QRect(QPoint(50, 150), QSize(100, 50)));
    rightSpeed->setGeometry(QRect(QPoint(150, 150), QSize(100, 50)));


    // Create a QVBoxLayout to position the buttons vertically
    QVBoxLayout *layout = new QVBoxLayout();
    QHBoxLayout *layout_2 = new QHBoxLayout();
    layout->addWidget(forwardSpeed);
    layout->addWidget(backwordSpeed);
    layout->addWidget(leftSpeed);
    layout->addWidget(rightSpeed);

    // Set the layout for the main widget
    layout_2->addLayout(layout);


    connect(forwardSpeed, &QPushButton::clicked, this, &buttons::moveForward);
    connect(backwordSpeed, &QPushButton::clicked, this, &buttons::moveBack);
    connect(leftSpeed, &QPushButton::clicked, this, &buttons::moveLeft);
    connect(rightSpeed, &QPushButton::clicked, this, &buttons:: moveRight);


}

buttons::~buttons()
{
    // delete
    delete forwardSpeed;
    delete  backwordSpeed;
    delete leftSpeed;
    delete rightSpeed;

}

void buttons::moveForward(){

    qDebug()<<"Move Forward::" <<'\n';
}

void buttons::moveBack(){
    qDebug()<<"Move Back:: " << '\n';
}

void buttons::moveLeft(){

    qDebug()<<"Move Left::" << '\n';
}

void buttons::moveRight(){

    qDebug()<<"Move Right::" << '\n';
}
