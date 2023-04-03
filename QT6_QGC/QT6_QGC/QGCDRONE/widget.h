#ifndef WIDGET_H
#define WIDGET_H

/*
Built Libraries
*/
#include <QWidget>
#include <QApplication>
#include <QtMultimedia/QMediaPlayer>
#include <QtOpenGLWidgets/QtOpenGLWidgets>
#include <QVBoxLayout>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QMainWindow>

// vlc lib
#include <vlc/vlc.h>

// include local headers
#include "streamingvideo.h"

// include local header
#include "joystickbuttons.h"
#include <QGroupBox>
#include "ICentralLine.h"

// include navigation bar
#include "navbar.h"


class Widget : public QWidget, public ICentralLine
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();
    virtual void centralLine();

    // navigation bar
    navbar *navigation_bar;

private:

      // QWidget *mainWidget;
       QWidget *mapwidget;
       QVBoxLayout *layout;
       QVBoxLayout *layout_2;
       QHBoxLayout *mainLayout;

       // streaming video object
       streamingVideo *streamVLC;

       // joystick button
       joystickButtons *buttons_joystick;

       QSpacerItem *spacerHorizontal;


};
#endif // WIDGET_H
