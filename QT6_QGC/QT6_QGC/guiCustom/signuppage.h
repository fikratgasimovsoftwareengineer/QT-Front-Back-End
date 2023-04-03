#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>


namespace Ui {
class signuppage;
}

class signuppage : public QWidget
{
    Q_OBJECT

public:
    explicit signuppage(const QString& username, const QString& password,const QString& verify_password, QWidget *parent = nullptr);
    ~signuppage();

private:
    Ui::signuppage *ui;
};

#endif // SIGNUPPAGE_H
