#include "navbar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    navbar w;
    w.show();
    return a.exec();
}
