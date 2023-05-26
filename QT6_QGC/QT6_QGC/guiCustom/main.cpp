#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.show();

    //cameraStream camera;
   // camera.show();

    //hud.show();
    return a.exec();
}
