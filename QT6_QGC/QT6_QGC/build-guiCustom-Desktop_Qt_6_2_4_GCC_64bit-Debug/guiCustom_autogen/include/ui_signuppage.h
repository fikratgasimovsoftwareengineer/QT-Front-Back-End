/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signuppage
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *signUpVertical;
    QWidget *widget;

    void setupUi(QWidget *signuppage)
    {
        if (signuppage->objectName().isEmpty())
            signuppage->setObjectName(QString::fromUtf8("signuppage"));
        signuppage->resize(1249, 866);
        label = new QLabel(signuppage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 281, 41));
        label->setStyleSheet(QString::fromUtf8("font: oblique 25pt \"Waree\";"));
        verticalLayoutWidget = new QWidget(signuppage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 100, 231, 621));
        signUpVertical = new QVBoxLayout(verticalLayoutWidget);
        signUpVertical->setObjectName(QString::fromUtf8("signUpVertical"));
        signUpVertical->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(signuppage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(440, 0, 811, 871));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/:/drone 6.jpg);"));

        retranslateUi(signuppage);

        QMetaObject::connectSlotsByName(signuppage);
    } // setupUi

    void retranslateUi(QWidget *signuppage)
    {
        signuppage->setWindowTitle(QCoreApplication::translate("signuppage", "Form", nullptr));
        label->setText(QCoreApplication::translate("signuppage", "Please SignUp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signuppage: public Ui_signuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
