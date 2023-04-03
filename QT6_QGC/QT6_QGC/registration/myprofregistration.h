#ifndef MYPROFREGISTRATION_H
#define MYPROFREGISTRATION_H

#include <QWidget>
#include "registration.h"


namespace Ui {
class myprofregistration;
}

class myprofregistration : public QWidget
{
    Q_OBJECT

public:
    explicit myprofregistration(QWidget *parent = nullptr);
    ~myprofregistration();



private:
    Ui::myprofregistration *ui;
    registration *regs;


};

#endif // MYPROFREGISTRATION_H
