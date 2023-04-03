#ifndef GSTREAMER_H
#define GSTREAMER_H

#include <QMainWindow>

QT_BEGIN_NAMESP ACE
namespace Ui { class gstreamer; }
QT_END_NAMESPACE

class gstreamer : public QMainWindow
{
    Q_OBJECT

public:
    gstreamer(QWidget *parent = nullptr);
    ~gstreamer();

private:
    Ui::gstreamer *ui;
};
#endif // GSTREAMER_H
