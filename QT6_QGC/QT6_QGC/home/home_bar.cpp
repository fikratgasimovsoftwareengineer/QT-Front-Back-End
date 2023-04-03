#include "home_bar.h"

home_bar::home_bar(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(1000,1000);
    QWidget *leftWidget = new QWidget();
    //leftWidget->setFixedWidth(200);


    leftWidget->setStyleSheet("background-color:blue;");
    leftWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Set the minimum and maximum sizes
    leftWidget->setMinimumWidth(100);
    leftWidget->setMaximumWidth(600);
    leftWidget->setMinimumHeight(200);
    leftWidget->setMaximumHeight(450);
    QSpacerItem *spacerHorizontal = new QSpacerItem(0, 30, QSizePolicy::Fixed, QSizePolicy::Fixed);


    QVBoxLayout *leftLayout = new QVBoxLayout(this);

    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    QLabel *homeLabel = new QLabel("HOME");
    homeLabel->setAlignment(Qt::AlignCenter);
    homeLabel->setStyleSheet("font-size: 18px; font-weight: bold;");


    QFrame *blueframe =  new QFrame();
    blueframe->setStyleSheet("background-color:blue");


    leftLayout->addWidget(leftWidget); // add wudget
    leftLayout->addWidget(homeLabel); //add home label

    mainLayout->addLayout(leftLayout);



}

home_bar::~home_bar()
{
}

void home_bar::homeSlot(){
    widget_home = new QWidget(this);
    widget_home->setWindowTitle("USER SIGN IN/REGISTRATION");
    widget_home->setFixedSize(640,480);
    widget_home->show();

}
