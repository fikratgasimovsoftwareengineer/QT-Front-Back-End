#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{

    // set general coordinates
    setGeometry(0, 0, 1900, 1000);

    /* left widget for videostreaming
     * design
     */
    QWidget *leftWidget = new QWidget(this);
    leftWidget->setStyleSheet("background-color:gray;");
    leftWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Set the minimum and maximum sizes
    leftWidget->setMinimumWidth(50);
    leftWidget->setMaximumWidth(500);
    leftWidget->setMinimumHeight(50);
    leftWidget->setMaximumHeight(800);

    /*mainWidget = new QWidget(this);
    mainWidget->setStyleSheet("background-color:white;");
    mainWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Set the minimum and maximum sizes
    mainWidget->setMinimumWidth(150);
    mainWidget->setMaximumWidth(600);
    mainWidget->setMinimumHeight(200);
    mainWidget->setMaximumHeight(450);*/

    //Space horizontally from top of widget!
    spacerHorizontal = new QSpacerItem(0, 30, QSizePolicy::Fixed, QSizePolicy::Fixed);


    // Add VLC library
    streamVLC = new streamingVideo(this);


    // add joystick button object
    buttons_joystick = new joystickButtons(this);

    navigation_bar = new navbar(this);

    /* create right widget for Mappa
     *
    */
    mapwidget = new QWidget(this);
    mapwidget->setStyleSheet("background-color: gray;");
    mapwidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Set the minimum and maximum sizes
    mapwidget->setMinimumWidth(50);
    mapwidget->setMaximumWidth(600);
    mapwidget->setMinimumHeight(50);
    mapwidget->setMaximumHeight(800);


    /* create layouts for widgets
     *
    */
    mainLayout = new QHBoxLayout(this);

    // QVBoxLayout *mainlayout_2 = new QVBoxLayout(this);

    // first layout for left widget
    layout = new QVBoxLayout(this);

    // second layout for right widget
    layout_2 = new QVBoxLayout(this);

    QVBoxLayout *layout_3 = new QVBoxLayout(this);
    layout_3->addWidget(leftWidget);

    // Navigational Bar to Main Widget

    layout->addLayout(navigation_bar->layout);

    //layout->insertSpacerItem(0,spacerHorizontal);

    // add first
   // layout->addWidget(mainWidget);
    layout->addWidget(streamVLC);

    // add widget of button joystick
    //layout->addWidget(buttons_joystick);
    //layout->addWidget(navigation_bar);

    // add layout_3 to mainlayout
    mainLayout->addLayout(layout_3);
    mainLayout->addSpacing(50);
    // add second
    layout_2->addWidget(mapwidget);

     //add left widget to layout
    mainLayout->addLayout(layout);
   // mainLayout->addLayout(navigation_bar->layout);

    //mainlayout_2->addLayout(layout);

    // add space between them
    mainLayout->addSpacing(50);

    // add right widget to layout
    mainLayout->addLayout(layout_2);



}

Widget::~Widget()
{
    //delete mainWidget;
    delete layout;
    delete layout_2;
    delete buttons_joystick;
    delete mapwidget;
    delete mainLayout;

}

void Widget::centralLine(){

    frame = new QFrame(this);
    //frame->setGeometry(QRect(QPoint(0, height()/2), QSize(width()/2, 1)));
    frame->setGeometry(QRect(580,100, 600, 1000));
    frame->setFrameShape(QFrame::HLine);
    frame->setFrameShadow(QFrame::Sunken);

    frame->setLineWidth(5);// increase line thickness
    frame->setStyleSheet("color: red");
}
