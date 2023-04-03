#include "navbar.h"

navbar::navbar(QWidget *parent)
    : QMainWindow{parent}
{
     layout = new QVBoxLayout(this);
     toolbar = new QToolBar(this);
     addToolBar(toolbar);

     toolbar->setIconSize(QSize(25, 25)); // Set the size of the icons

     button1 = new QToolButton(this);
     button2 = new QToolButton(this);
     button3 = new QToolButton(this);
     button4 = new QToolButton(this);
     button5 = new QToolButton(this);
     button6 = new QToolButton(this);

     // Style Align

     button1->setIcon(QIcon(":/:/Data.png"));

     button1->setText("Data");

     button1->setStyleSheet("color: dark;");

     button1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon

     button2->setIcon(QIcon(":/:/plan.png"));

     button2->setText("Plan");

     button2->setStyleSheet("color: dark;");

     button2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon


     button3->setIcon(QIcon(":/:/setup.png"));

     button3->setText("Config");

     button3->setStyleSheet("color: dark;");

     button3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon


     button4->setIcon(QIcon(":/:/config.png"));

     button4->setText("Plan");

     button4->setStyleSheet("color: dark;");

     button4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon


     button5->setIcon(QIcon(":/:/simulation.png"));

     button5->setText("Simulate");

     button5->setStyleSheet("color: dark;");

     button5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon


     //
     button6->setIcon(QIcon(":/:/help.png"));

     button6->setText("Help");

     button6->setStyleSheet("color: dark;");

     button6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // Label below the icon

     toolbar->addWidget(button1);
     toolbar->addWidget(button2);
     toolbar->addWidget(button3);
     toolbar->addWidget(button4);
     toolbar->addWidget(button5);
     toolbar->addWidget(button6);


     connect(button1, &QToolButton::clicked, this, &navbar::openWindow_1);
     connect(button2, &QToolButton::clicked, this, &navbar::openWindow_2);
     connect(button3, &QToolButton::clicked, this, &navbar::openWindow_3);
     connect(button4, &QToolButton::clicked, this, &navbar::openWindow_4);
     connect(button5, &QToolButton::clicked, this, &navbar::openWindow_5);
     connect(button6, &QToolButton::clicked, this, &navbar::openWindow_6);

     layout->addWidget(toolbar);
}


void navbar::openWindow_1(){
    // Create a new QStackedWidget instance

    // Create a new QWidget instance
    window_1 = new QWidget();

    window_1->setWindowTitle("Data Configuration");
    window_1->setFixedSize(640, 480);
    // Set the current page to be page1

    window_1->show();
}

void navbar::openWindow_2(){

    window_2 = new QWidget();
    window_2->setWindowTitle("Plan Path");
    window_2->setGeometry(0,0,640,480);
    window_2->show();
}
void navbar::openWindow_3(){

    window_3 = new QWidget();
    window_3->setWindowTitle("SetUp Parameters");
    window_3->setGeometry(0,0,640,480);
    window_3->show();
}

void navbar::openWindow_4(){

    window_4 = new QWidget();
    window_4->setWindowTitle("Configuration");
    window_4->setGeometry(0,0,640,480);
    window_4->show();
}

void navbar::openWindow_5(){

    window_5 = new QWidget();
    window_5->setWindowTitle("Simulate Drones");
    window_5->setGeometry(0,0,640,480);
    window_5->show();
}

void navbar::openWindow_6(){

    window_6 = new QWidget();
    window_6->setWindowTitle("Help");
    window_6->setGeometry(0,0,640,480);
    window_6->show();
}
