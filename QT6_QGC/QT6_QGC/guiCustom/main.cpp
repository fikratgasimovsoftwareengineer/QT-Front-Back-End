#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    hudDisplay hud;
    //droneTypes d;
    //w.getText();
    w.show();

    //hud.show();
    return a.exec();
}
