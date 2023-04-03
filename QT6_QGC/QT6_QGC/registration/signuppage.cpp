#include "signuppage.h"
#include "ui_signuppage.h"
#include "registration.h"

signUpPage::signUpPage(const QString& username, const QString& password,const QString& verify_password, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signUpPage)
{
    ui->setupUi(this);
    registration *regs_signUp = new registration(this);


}

signUpPage::~signUpPage()
{
    delete ui;
}
