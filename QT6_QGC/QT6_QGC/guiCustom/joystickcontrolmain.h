#ifndef JOYSTICKCONTROLMAIN_H
#define JOYSTICKCONTROLMAIN_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QKeyEvent>

class joystickControlMain : public QWidget
{
    Q_OBJECT
public:
    explicit joystickControlMain(QWidget *parent = nullptr);
     QVBoxLayout *alignVertical;
signals:

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



    // QWidget interface
/*protected:
    void keyPressEvent(QKeyEvent *event) override;*/
};

#endif // JOYSTICKCONTROLMAIN_H
