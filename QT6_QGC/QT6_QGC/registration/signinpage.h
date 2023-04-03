#ifndef SIGNINPAGE_H
#define SIGNINPAGE_H

#include <QWidget>

namespace Ui {
class signInPage;
}

class signInPage : public QWidget
{
    Q_OBJECT

public:
    explicit signInPage(const QString& username, const QString& password, QWidget *parent = nullptr);
    ~signInPage();

private:
    Ui::signInPage *ui;

};

#endif // SIGNINPAGE_H
