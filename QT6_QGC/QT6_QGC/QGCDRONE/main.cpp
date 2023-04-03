#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    // navigation bar initialization

    w.centralLine();
    w.setStyleSheet("background-color:lightblue");
    w.show();
    return a.exec();
}
