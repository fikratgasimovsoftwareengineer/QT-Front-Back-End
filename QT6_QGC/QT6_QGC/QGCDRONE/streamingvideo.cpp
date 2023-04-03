#include "streamingvideo.h"

streamingVideo::streamingVideo(QWidget *parent)
    : QWidget{parent}
{
    // create libvlc instance
    vlcInstance = libvlc_new(0, nullptr);

    //create media player
    mediaPlayer = libvlc_media_player_new(vlcInstance);


    // create media object
    media = libvlc_media_new_location(vlcInstance, "udp://@192.168.93.60:8554");

    // set media to media player
    libvlc_media_player_set_media(mediaPlayer, media);

    // stream layout
    streamLayout = new QVBoxLayout(this);

    // create bytton layout
    buttonLayout = new QHBoxLayout();


    //buttons
    startButton = new QPushButton("Start");
    pauseButton =  new QPushButton("Pause");
    stopButton = new QPushButton("Stop");

    // connect signals and slots -> when slot is pressed, signal is triggered! and do action
    connect(startButton, &QPushButton::clicked, this, &streamingVideo::play);
    connect(pauseButton, &QPushButton::clicked, this, &streamingVideo::pause);
    connect(stopButton, &QPushButton::clicked, this, &streamingVideo::stop);


    buttonLayout->addWidget(startButton);
    buttonLayout->addWidget(pauseButton);
    buttonLayout->addWidget(stopButton);

    streamLayout->addLayout(buttonLayout);
}

// play
void streamingVideo :: play(){

    libvlc_media_player_play(mediaPlayer);
}
// stop
void streamingVideo::stop(){

    libvlc_media_player_stop(mediaPlayer);
}
// pause
void streamingVideo::pause(){

    libvlc_media_player_pause(mediaPlayer);
}

// streaming
streamingVideo::~streamingVideo(){

    //destroy
    libvlc_media_player_release(mediaPlayer);
    libvlc_media_release(media);
    libvlc_release(vlcInstance);


}
