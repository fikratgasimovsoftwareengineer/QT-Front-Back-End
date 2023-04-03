#ifndef STREAMINGVIDEO_H
#define STREAMINGVIDEO_H

#include <QObject>
#include <QWidget>
#include <vlc/vlc.h>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <vlc/vlc.h>

class streamingVideo : public QWidget
{
    Q_OBJECT
public:
    explicit streamingVideo(QWidget *parent = nullptr);
    ~streamingVideo();

private slots:

    void play();
    void pause();
    void stop();


private:
    libvlc_instance_t *vlcInstance;
    libvlc_media_player_t *mediaPlayer;
    libvlc_media_t *media;


    QPushButton *startButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;

    QVBoxLayout *streamLayout;
    QHBoxLayout *buttonLayout;

};

#endif // STREAMINGVIDEO_H
