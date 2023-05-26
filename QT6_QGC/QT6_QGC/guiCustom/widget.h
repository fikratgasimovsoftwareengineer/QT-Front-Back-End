#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QDebug>
#include <QVBoxLayout>
#include <string>
#include <QToolBar>
#include <QToolButton>
#include <QScrollBar>
#include <QtWebEngineWidgets/QWebEngineView>

// navigation bar
#include "navbar.h"

// include joystick
#include "joystickcontrolmain.h"
#include "myprofregistration.h"

// drone types
#include "dronetypes.h"

// include huddisplay
#include "huddisplay.h"


#include "camerastream.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void setColor();
   // void  connects();
    string getText();

    void getRegistrationPage();


public slots:
    /*void clickButton_1();
    void clickButton_2();
    void clickButton_3();*/

    // sign out
    void signOut();

    // next page slot
    void navigateToNext();
    void navigateToPrevios();




private:
    Ui::Widget *ui;
    QGridLayout *layout;
    navbar *navigation_bar;
    // joystick instance
    joystickControlMain *joystickmain;

    myprofregistration prof;

    // QPushButton for drone
    QPushButton *drone_pushbutton;
    QPushButton *registration_button;


  // registartion page
    myprofregistration *registration;

    // drone type
    droneTypes *types_drones_open;
    //droneTypes *types_drones_close;

    cameraStream *stream;


};
#endif // WIDGET_H
