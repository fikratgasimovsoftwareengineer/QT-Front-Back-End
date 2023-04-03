#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Create the libVLC instance and media player
       vlcInstance = libvlc_new(0, nullptr);
       vlcPlayer = libvlc_media_player_new(vlcInstance);

       // Create the GUI layout
       layout = new QVBoxLayout();

       // Create the URL input field
       urlLineEdit = new QLineEdit();
       urlLineEdit->setPlaceholderText("Enter URL");
       layout->addWidget(urlLineEdit);
       // Create the start button
       startButton = new QPushButton("Start");
       connect(startButton, &QPushButton::clicked, this, &MainWindow::startStreaming);
       layout->addWidget(startButton);

       // Create the stop button
       stopButton = new QPushButton("Stop");
       connect(stopButton, &QPushButton::clicked, this, &MainWindow::stopStreaming);
       layout->addWidget(stopButton);

       // Create the pause button
       pauseButton = new QPushButton("Pause");
       connect(pauseButton, &QPushButton::clicked, this, &MainWindow::pauseStreaming);
       layout->addWidget(pauseButton);


       // Set the central widget to the layout
       QWidget *centralWidget = new QWidget();
       centralWidget->setLayout(layout);
       setCentralWidget(centralWidget);
}


MainWindow::~MainWindow()
{
    // Release the VLC player and instance
    libvlc_media_player_release(vlcPlayer);
    libvlc_release(vlcInstance);
}

void MainWindow::startStreaming()
{
    // Stop the player if it's already playing
    libvlc_media_player_stop(vlcPlayer);

    // Create the media and set it to the player
    const char *url = urlLineEdit->text().toStdString().c_str();
    libvlc_media_t *vlcMedia = libvlc_media_new_location(vlcInstance, url);
    libvlc_media_player_set_media(vlcPlayer, vlcMedia);
    libvlc_media_release(vlcMedia);

    // Play the media
    libvlc_media_player_play(vlcPlayer);
}

void MainWindow::stopStreaming()
{
    // Stop the player
    libvlc_media_player_stop(vlcPlayer);
}

void MainWindow::pauseStreaming()
{
    // Pause or resume the player
    libvlc_state_t state = libvlc_media_player_get_state(vlcPlayer);
    if (state == libvlc_Playing) {
        libvlc_media_player_pause(vlcPlayer);
    } else if (state == libvlc_Paused) {
        libvlc_media_player_play(vlcPlayer);
    }
}
