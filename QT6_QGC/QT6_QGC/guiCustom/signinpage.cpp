#include "signinpage.h"
#include "ui_signinpage.h"
#include "registration.h"


signinpage::signinpage(const QString& username, const QString& password, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signinpage)
{
    ui->setupUi(this);
    registration *regs_signin = new registration(this);
}

signinpage::~signinpage()
{
    delete ui;
}
