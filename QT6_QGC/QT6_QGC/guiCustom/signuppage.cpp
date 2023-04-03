#include "signuppage.h"
#include "ui_signuppage.h"
#include "registration.h"

signuppage::signuppage(const QString& username, const QString& password,const QString& verify_password, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signuppage)
{
    ui->setupUi(this);
    registration *regs_signUp = new registration(this);
}

signuppage::~signuppage()
{
    delete ui;
}
