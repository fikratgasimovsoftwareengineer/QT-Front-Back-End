#include "myprofregistration.h"
#include "ui_myprofregistration.h"
#include "registration.h"

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
/*void myprofregistration::connection(){
    connect(signUpButton, &QPushButton::clicked, this, &myprofregistration::signup);
    connect(signInButton, &QPushButton::clicked, this, &myprofregistration::login);

}*/


/*void myprofregistration::createPwd(){

    passwordEdit = new QLineEdit(this);

    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);
    passwordEdit->setGeometry(50,90, 200, 30);
}

void myprofregistration::getsignInButton(){
    signInButton = new QPushButton("Sign In", this);
    signInButton->setGeometry(50,130,90,30);
}

void myprofregistration::getsignUpButton(){
    signUpButton = new QPushButton("Sign Up", this);
    signUpButton->setGeometry(160,130,90,30);

}*/

/*void myprofregistration::setLabels(){

    // Create the status label
    statusLabel = new QLabel(this);
    statusLabel->setGeometry(50, 170, 200, 30);
    statusLabel->setAlignment(Qt::AlignCenter);
}


void myprofregistration::login()
{
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();


    // Check if the username and password are valid
    // For demo purposes, we will just use the strings "user" and "password"
    if ((username == "doberBot") && (password == "H00:00am")) {
        statusLabel->setText("Sign In is Successful");
        statusLabel->setStyleSheet("color:green");
    } else {
        statusLabel->setText("Invalid username or password");
    }
}*/


/*void myprofregistration::signup()
{

    QString username_sign_up = usernameEdit->text();
    QString password_first_sign = passwordEdit->text();
    //QString password_verify_sign = passwordVerify->text();

    if ((username_sign_up == "doberbot") && (password_first_sign=="H00:00am")){
        statusLabel->setText("Sign Up is Successfull!");
        QMessageBox::information(this, "Sign Up", "Ready to sign in");

    }
    else{
        statusLabel->setStyleSheet("color:red");
        statusLabel->setText("Try to Sign up!");
    }
    // Show a message box indicating that sign up is not implemented
    // For demo purposes only

}*/
