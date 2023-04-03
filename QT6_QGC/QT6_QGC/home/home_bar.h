#ifndef HOME_BAR_H
#define HOME_BAR_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QToolButton>
#include <QToolBar>
#include <QPushButton>
#include <QSpacerItem>

class home_bar : public QMainWindow
{
    Q_OBJECT

public:
    home_bar(QWidget *parent = nullptr);
    ~home_bar();

private slots:
    void homeSlot();

private:
    QPushButton *home_button;
    QWidget *widget_home;
    QHBoxLayout *home_layout;

    QVBoxLayout *layout;
    QLabel *homeLabel;
    QWidget *blueWidget;
};
#endif // HOME_BAR_H
