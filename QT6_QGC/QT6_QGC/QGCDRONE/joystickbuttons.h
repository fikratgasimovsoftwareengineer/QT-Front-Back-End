#ifndef JOYSTICKBUTTONS_H
#define JOYSTICKBUTTONS_H
/*
Joystick Buttton Design
*/


#include <QObject>
#include <QWidget>

#include <QPushButton>
#include <QIcon>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>
#include <QGroupBox>
#include <QSpacerItem>

class joystickButtons : public QWidget
{
    Q_OBJECT
public:
    explicit joystickButtons(QWidget *parent = nullptr);
    QVBoxLayout *alignVertical;
   // QGroupBox *rectangle_box;


public slots:
    void moveForward();
    void moveBack();
    void moveLeft();
    void moveRight();

protected:

    QPushButton *forwardSpeed;
    QPushButton *backwordSpeed;
    QPushButton *leftSpeed;
    QPushButton *rightSpeed;
    QSpacerItem *verticalSpacer;


};

#endif // JOYSTICKBUTTONS_H
