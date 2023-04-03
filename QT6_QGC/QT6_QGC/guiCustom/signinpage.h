#ifndef SIGNINPAGE_H
#define SIGNINPAGE_H

#include <QWidget>

namespace Ui {
class signinpage;
}

class signinpage : public QWidget
{
    Q_OBJECT

public:
    explicit signinpage(const QString& username, const QString& password, QWidget *parent = nullptr);
    ~signinpage();

private:
    Ui::signinpage *ui;
};

#endif // SIGNINPAGE_H
