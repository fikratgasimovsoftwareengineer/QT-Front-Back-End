#ifndef STREAM_H
#define STREAM_H

#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <vlc/vlc.h>
#include <QWidget>


class stream : public QWidget
{
    Q_OBJECT

public:
    stream(QWidget *parent = nullptr);
    ~stream();


private:
    libvlc_instance_t *vlcInstance;
    libvlc_media_player_t *mediaPlayer;
    libvlc_media_t *media;
};
#endif // STREAM_H
