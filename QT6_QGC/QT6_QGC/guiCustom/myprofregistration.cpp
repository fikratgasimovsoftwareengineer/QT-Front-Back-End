#include "myprofregistration.h"
#include "ui_myprofregistration.h"


myprofregistration::myprofregistration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myprofregistration)
{
    ui->setupUi(this);
    regs = new registration();
    ui->left_vertical->addWidget(regs);

}

myprofregistration::~myprofregistration()
{
    delete ui;
}
