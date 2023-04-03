#include "home_bar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home_bar w;
    w.show();
    return a.exec();
}
