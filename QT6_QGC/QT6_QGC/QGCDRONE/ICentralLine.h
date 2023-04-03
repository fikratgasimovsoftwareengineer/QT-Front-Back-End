#ifndef ICENTRALLINE_H
#define ICENTRALLINE_H

#include <QFrame>
#include <QSize>
#include <QRect>
/*Horizontal Central Line*/
class ICentralLine{

public:
    virtual void centralLine()=0;


protected:
    QFrame *frame;
};


#endif // ICENTRALLINE_H
