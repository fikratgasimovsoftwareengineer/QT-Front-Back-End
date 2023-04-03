#include "registration.h"
#include "signinpage.h"
#include "signuppage.h"

registration::registration(QWidget *parent)
    : QWidget(parent)
{

    vertical_layout = new QVBoxLayout(this);

    // sign in button
    signInButton = new QPushButton("Sign In", this);
    signInButton->setGeometry(0,0,50,50);

    // sign up
    signUpButton = new QPushButton("Dont you have account? create!", this);
    signUpButton->setGeometry(0,0,50,50);




    vertical_layout->addWidget(signInButton);
    vertical_layout->addWidget(signUpButton);

    connect(signUpButton, &QPushButton::clicked, this, &registration::signUPTest);
    connect(signInButton, &QPushButton::clicked, this, &registration::loginTest);

}


registration::~registration()
{


}



void registration::signUPTest()
{
    if (!showsignUpPage){


       signUPUI = new QPushButton("Sign-Up",this);
       signUPUI->setFixedWidth(300);

        // create button for editing
       usernameEdit = new QLineEdit(this);
       usernameEdit->setFixedWidth(300);

       // set username
       usernameEdit->setPlaceholderText("Username");

       // Password edit -> // get string of  password
       passwordEdit = new QLineEdit(this);
       passwordEdit->setFixedWidth(300);
       passwordEdit->setPlaceholderText("Password");
       passwordEdit->setEchoMode(QLineEdit::Password);



       // Create the repeat password edit and add it to the layout
       repeatPasswordEdit = new QLineEdit(this);
       repeatPasswordEdit->setFixedWidth(300);
       repeatPasswordEdit->setPlaceholderText("Repeat Password");
       repeatPasswordEdit->setEchoMode(QLineEdit::Password);


       signUp = new signUpPage(username_sign_up, password_first_sign, verifyPassword);
       signUPLayout = new QVBoxLayout(signUp);

       signUPLayout->addWidget(usernameEdit);
       signUPLayout->addWidget(repeatPasswordEdit);
       signUPLayout->addWidget(passwordEdit);
       signUPLayout->addWidget(signUPUI);
       signUp->show();
       showsignUpPage = true;



    } // finish IF


    // check if page is open or not if not, then open it
    if (!signUp->isVisible()){
            signUp->setVisible(true);
            signUPUI->setEnabled(true);
            showsignUpPage = false;

    }
    connect(signUPUI, &QPushButton::clicked, this, &registration::signUPUIButtonClicked);

}



void registration::loginTest()
{
    // Create the username edit and add it to the layout
    // it is confirming that it is true!
    if (!showsignINPage){


       signINUI = new QPushButton("Sign-In",this);
       signINUI->setFixedWidth(300);

       user = new QLineEdit(this);
       user->setFixedWidth(300);
       user->setPlaceholderText("Username");


       // Create the password edit and add it to the layout
       password = new QLineEdit(this);
       password->setFixedWidth(300);
       password->setPlaceholderText("Password");
       password->setEchoMode(QLineEdit::Password);

        pageSignIn = new signInPage(username_sign_in, password_text);
        signInLayout = new QVBoxLayout(pageSignIn);
        signInLayout->addWidget(user);
        signInLayout->addWidget(password);
        signInLayout->addWidget(signINUI);



        // show whenever button is click!
        pageSignIn->show();
        showsignINPage = true;

     }

    if (!pageSignIn->isVisible()){

        pageSignIn->setVisible(true);
        signInButton->setEnabled(true);
        showsignINPage = false;

    }

    // connection sign in button with slot
     connect(signINUI, &QPushButton::clicked, this, &registration::signInUIButtonClicked);

}
void registration::signInUIButtonClicked()
{
        //username_sign_up = usernameEdit->text();
        username_sign_in = user->text();
        password_text = password->text();

        if (username_sign_in == "doberbot" && password_text == "H00:00am"){
               //statusLabel->setText("Sign IN is Successfull!");
               QMessageBox::information(this, "Sign In", "Success:Enjoy Drone GUI");
               pageSignIn->hide();

        }
        else{
                QMessageBox::information(this, "Sign In", "FAILED!");


        }

}

void registration::signUPUIButtonClicked()
{

    username_sign_up = usernameEdit->text();
    password_first_sign = passwordEdit->text();
    verifyPasswordSecondTime = repeatPasswordEdit->text();


    if ((username_sign_up == "doberbot") && (password_first_sign==verifyPasswordSecondTime)){
        QMessageBox::information(this, "Sign Up", "Ready to Sign In");
        signUp->hide();

    }
    else{
       QMessageBox::information(this, "Sign Up", "Failed to SIGN UP, Try Again");

    }
    // Show a message box indicating that sign up is not implemented
    // For demo purposes only

}



