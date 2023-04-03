#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>

namespace Ui {
class signUpPage;
}

class signUpPage : public QWidget
{
    Q_OBJECT

public:
    explicit signUpPage(const QString& username, const QString& password,const QString& verify_password, QWidget *parent = nullptr);
    ~signUpPage();

private:
    Ui::signUpPage *ui;
};

#endif // SIGNUPPAGE_H
