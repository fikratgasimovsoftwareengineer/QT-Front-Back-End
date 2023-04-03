#include "gstreamer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gstreamer w;
    w.show();
    return a.exec();
}
