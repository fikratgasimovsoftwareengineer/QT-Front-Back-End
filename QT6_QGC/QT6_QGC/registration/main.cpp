#include "registration.h"
#include "myprofregistration.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    registration w;
    myprofregistration h;


  /*  w.getUserNames();
    w.createPwd();
    w.getsignInButton();
    w.getsignUpButton();
    w.connection();
    w.setLabels();*/

    h.show();
    return a.exec();
}
