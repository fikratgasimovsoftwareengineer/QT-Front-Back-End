#ifndef WELCOM_H
#define WELCOM_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class welcom; }
QT_END_NAMESPACE

class welcom : public QWidget
{
    Q_OBJECT
public:
    explicit welcom(QWidget *parent = nullptr);

signals:

};

#endif // WELCOM_H
