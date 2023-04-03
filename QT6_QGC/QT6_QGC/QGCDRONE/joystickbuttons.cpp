#include "joystickbuttons.h"

joystickButtons::joystickButtons(QWidget *parent)
    : QWidget{parent}
{



    // buttons
    forwardSpeed = new QPushButton("F", this);
    backwordSpeed = new QPushButton("B", this);
    leftSpeed = new QPushButton("L", this);
    rightSpeed = new QPushButton("R", this);


    connect(forwardSpeed, &QPushButton::clicked, this, &joystickButtons::moveForward);
    connect(backwordSpeed, &QPushButton::clicked, this, &joystickButtons::moveBack);
    connect(leftSpeed, &QPushButton::clicked, this, &joystickButtons::moveLeft);
    connect(rightSpeed, &QPushButton::clicked, this, &joystickButtons:: moveRight);

    // buttons design
    forwardSpeed->setStyleSheet("background-color: red;");
    backwordSpeed->setStyleSheet("background-color: gray;");
    leftSpeed->setStyleSheet("background-color: gold;");
    rightSpeed->setStyleSheet("background-color: gold;");

    QIcon icon_1(":/:/icons8-down-arrow-100.png");
    QIcon icon_2(":/:/icons8-up-arrow-100.png");
    QIcon icon_3(":/:/icons8-left-arrow-100.png");
    QIcon icon_4(":/:/icons8-right-arrow-100.png");

    // set icons
    forwardSpeed->setIcon(icon_2);
    backwordSpeed->setIcon(icon_1);
    leftSpeed->setIcon(icon_3);
    rightSpeed->setIcon(icon_4);

    // Set the button size policies to Fixed
    forwardSpeed->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    backwordSpeed->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    leftSpeed->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    rightSpeed->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Set button positions and sizes
    forwardSpeed->setGeometry(QRect(QPoint(100, 100), QSize(100, 50)));
    backwordSpeed->setGeometry(QRect(QPoint(100, 200), QSize(100, 50)));
    leftSpeed ->setGeometry(QRect(QPoint(50, 150), QSize(100, 50)));
    rightSpeed->setGeometry(QRect(QPoint(150, 150), QSize(100, 50)));


    alignVertical = new QVBoxLayout();
    alignVertical->addWidget(forwardSpeed);
    alignVertical->addWidget(backwordSpeed);
    alignVertical->addWidget(leftSpeed);
    alignVertical->addWidget(rightSpeed);





}
void joystickButtons::moveForward(){

    qDebug()<< "Move Forward ..." << '\n';

}
void joystickButtons::moveBack(){

    qDebug() << "Move Back ... " << '\n';
}

void joystickButtons::moveLeft(){

    qDebug() << "Move Left ... "<< '\n';
}

void joystickButtons::moveRight(){

    qDebug() << "Move Right ... "<< '\n';
}
