#include "signinpage.h"
#include "ui_signinpage.h"
#include "registration.h"

signInPage::signInPage(const QString& username, const QString& password, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signInPage)
{
    ui->setupUi(this);
    registration *regs_signin = new registration(this);


}

signInPage::~signInPage()
{
    delete ui;
}
