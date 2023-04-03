/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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

class Ui_signUpPage
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *signUpVertical;
    QWidget *widget;

    void setupUi(QWidget *signUpPage)
    {
        if (signUpPage->objectName().isEmpty())
            signUpPage->setObjectName("signUpPage");
        signUpPage->resize(1153, 799);
        signUpPage->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(signUpPage);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 50, 281, 41));
        label->setStyleSheet(QString::fromUtf8("font: oblique 25pt \"Waree\";"));
        verticalLayoutWidget = new QWidget(signUpPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(150, 140, 231, 621));
        signUpVertical = new QVBoxLayout(verticalLayoutWidget);
        signUpVertical->setObjectName("signUpVertical");
        signUpVertical->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(signUpPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(500, 0, 651, 801));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/:/drone 6.jpg);"));

        retranslateUi(signUpPage);

        QMetaObject::connectSlotsByName(signUpPage);
    } // setupUi

    void retranslateUi(QWidget *signUpPage)
    {
        signUpPage->setWindowTitle(QCoreApplication::translate("signUpPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("signUpPage", "Please SignUp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpPage: public Ui_signUpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
