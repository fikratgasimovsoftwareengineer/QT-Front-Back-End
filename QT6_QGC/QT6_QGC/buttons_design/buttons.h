#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>
#include <QIcon>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>



class buttons : public QWidget
{
    Q_OBJECT

public:
    buttons(QWidget *parent = nullptr);
    ~buttons();


public slots:
    void moveForward();
    void moveBack();
    void moveLeft();
    void moveRight();

protected:

    QHBoxLayout *horizontal;
    QVBoxLayout *vertical;

    QPushButton *forwardSpeed;
    QPushButton *backwordSpeed;
    QPushButton *leftSpeed;
    QPushButton *rightSpeed;

    QIcon iconbuttons;









};
#endif // BUTTONS_H
