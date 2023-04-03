#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QTimer>
#include "signinpage.h"
#include "signuppage.h"


class registration : public QWidget
{
    Q_OBJECT
public:
    explicit registration(QWidget *parent = nullptr);


private slots:

    void signUPTest();
    void loginTest();
    void signInUIButtonClicked();
    void signUPUIButtonClicked();

private:
    // for sign in
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    //sign in
    QString username_sign_in;
    QString password_text;

    // for sign up
    QLineEdit *passwordVerify;
    QString username_sign_up;
    QString password_first_sign;
    QString verifyPasswordSecondTime;

    QPushButton *signInButton;
    QPushButton *signUpButton;

    // UI Sign uo Page
    QPushButton *signUPUI;
    QPushButton *signINUI;

    // sign up
    QLabel *statusLabel;
    QString verifyPassword;

    // test
    QLineEdit *repeatPasswordEdit;
    // REGISTRATION PAGE
    QVBoxLayout *vertical_layout;

    // sign and sign up layout
    QVBoxLayout *signInLayout;
    QVBoxLayout *signUPLayout;

    // bool parameter
    bool showsignINPage = false;
    bool showsignUpPage = false;

    signinpage *pageSignIn;
    signuppage *signUp;


    // sign in
    QLineEdit *user;
    QLineEdit *password;

    QMessageBox *msgBox;


};

#endif // REGISTRATION_H
