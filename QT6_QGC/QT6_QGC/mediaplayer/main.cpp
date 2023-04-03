#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Widget w;

    QVideoWidget *video = new QVideoWidget();
    video->setGeometry(80, 80, 640, 480);

    QMediaPlayer *player = new QMediaPlayer();

    QHBoxLayout *box_2 = new QHBoxLayout();
    QVBoxLayout *box = new QVBoxLayout();
    player->setVideoOutput(video);

    player->setSource(QUrl("udp://@192.168.93.60:8554"));

    player->play();

    box_2->addWidget(video);

    box->addLayout(box_2);

    w.show();
    return app.exec();
}
