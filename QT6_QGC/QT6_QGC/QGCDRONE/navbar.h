#ifndef NAVBAR_H
#define NAVBAR_H

#include <QMainWindow>
#include <QToolBar>
#include <QAction>
#include <QWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QToolButton>

class navbar : public QMainWindow
{
    Q_OBJECT
public:
    explicit navbar(QWidget *parent = nullptr);

    QVBoxLayout *layout;
public slots:
    void openWindow_1();
    void openWindow_2();
    void openWindow_3();
    void  openWindow_4();
    void openWindow_5();
    void  openWindow_6();





private:
    QToolBar *toolbar;
    QToolButton *button1;
    QToolButton *button2;
    QToolButton *button3;
    QToolButton *button4;
    QToolButton *button5;
    QToolButton *button6;


    QWidget *window_1;
    QWidget *window_2;
    QWidget *window_3;
    QWidget *window_4;
    QWidget *window_5;
    QWidget *window_6;


};

#endif // NAVBAR_H
