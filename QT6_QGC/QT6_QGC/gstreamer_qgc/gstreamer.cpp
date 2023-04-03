#include "gstreamer.h"
#include "./ui_gstreamer.h"

gstreamer::gstreamer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gstreamer)
{
    ui->setupUi(this);
}

gstreamer::~gstreamer()
{
    delete ui;
}

