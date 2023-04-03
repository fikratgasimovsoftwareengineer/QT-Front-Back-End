#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vlc/vlc.h>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QVideoWidget>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void startStreaming();
    void stopStreaming();
    void pauseStreaming();

private:
    libvlc_instance_t *vlcInstance;
    libvlc_media_player_t *vlcPlayer;
    QVBoxLayout *layout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *pauseButton;
    QLineEdit *urlLineEdit;

};
#endif // MAINWINDOW_H
