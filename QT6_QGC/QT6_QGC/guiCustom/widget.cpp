#include "widget.h"
#include "./ui_widget.h"
#include "myprofregistration.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // ***** setcolors *****
    setColor();




    //  *****connection for video streaming *****
    //connects();

    // ***** navugation var setting up! *****
    navigation_bar = new navbar(this);
    ui->verticalLayout->addWidget(navigation_bar);


    // ******* add joystik main**************
    joystickmain = new joystickControlMain(this);
    ui->joystickwidget->setStyleSheet("background-color: lightdark");
    //ui->joysticklabel->setStyleSheet("color:magenta");
    ui->verticalLayout_2->addWidget(joystickmain);


    // *******drone icon setting**************
    drone_pushbutton = ui->drone_push;
    QPixmap map_image(":/:/drone_icon.png");
    drone_pushbutton->setIcon(map_image);
    //****************************



    // ***Registration Icon ****
    registration_button = ui->createAccuountPages;
    QPixmap registration_icon(":/:/account.png");
    registration_button->setIcon(registration_icon);

    //drone types
    types_drones_open = new droneTypes;

    //stream camera pointerINIT
    stream = new cameraStream(this);

    ui->myVideo->addWidget(stream->viewfinder);
    stream->viewfinder->show();

    ui->buttonsLayout->addWidget(stream->start);
    ui->buttonsLayout->addWidget(stream->stop);
    ui->buttonsLayout->addWidget(stream->capture);
    ui->buttonsLayout->addWidget(stream->pause);


    //***** create account !*****
    connect(ui->createAccuountPages, &QPushButton::clicked, this, &Widget::getRegistrationPage);


    //***** sign out *****
    connect(ui->signOut, &QPushButton::clicked,this, &Widget::signOut);


    // *** drone types connection - > next page****
    connect(ui->next_button, &QPushButton::clicked, this, &Widget::navigateToNext);

    // *** drone types connection - > previous page****
    connect(ui->previous_button, &QPushButton::clicked, this, &Widget::navigateToPrevios);

}

Widget::~Widget()
{
    delete ui;
    delete registration;
    delete types_drones_open;
    /*delete types_drones_close;*/

    delete stream;


}


/*void Widget::clickButton_1()
{
    qDebug() << "Start!";
}

void Widget::clickButton_2()
{
    qDebug() << "Stop";
}

void Widget::clickButton_3()
{
    qDebug() << "Third";
}*/

void Widget::signOut()
{

    QMessageBox::information(this, "SignOut", "You are Sign out!");
    qDebug() << "Signing Out";
}

/*
 * Navigate to next page
*/
void Widget::navigateToNext()
{

    types_drones_open->show();


}
/*
 * Navigate to previous page
*/
void Widget::navigateToPrevios()
{

    types_drones_open->hide();

}


/*void Widget::connects()
{

    connect(ui->button_1, &QPushButton::clicked, this, &Widget::clickButton_1);
    connect(ui->button_2, &QPushButton::clicked, this, &Widget::clickButton_2);
    connect(ui->button_3, &QPushButton::clicked, this, &Widget::clickButton_3);

}*/
// show resigtration page
void Widget::getRegistrationPage()
{
    registration = new myprofregistration;
    registration->show();

    //delete registration;

}

void Widget::setColor(){

    // videowidget
    ui->myVideo->setStyleSheet("background-color:gray");

    //set label color
    ui->label->setStyleSheet("color:red");
    ui->precisionScore->setStyleSheet("color:red");


}



