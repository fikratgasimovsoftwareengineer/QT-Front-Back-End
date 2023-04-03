/********************************************************************************
** Form generated from reading UI file 'signinpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINPAGE_H
#define UI_SIGNINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signInPage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalSignIN;
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *signInPage)
    {
        if (signInPage->objectName().isEmpty())
            signInPage->setObjectName("signInPage");
        signInPage->resize(1010, 802);
        signInPage->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(signInPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 70, 321, 711));
        verticalSignIN = new QVBoxLayout(verticalLayoutWidget);
        verticalSignIN->setObjectName("verticalSignIN");
        verticalSignIN->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(signInPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(430, 0, 581, 801));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/:/drone_3.png);"));
        label = new QLabel(signInPage);
        label->setObjectName("label");
        label->setGeometry(QRect(-40, 10, 441, 51));
        label->setStyleSheet(QString::fromUtf8("font: 300 italic 24pt \"URW Bookman\";\n"
""));

        retranslateUi(signInPage);

        QMetaObject::connectSlotsByName(signInPage);
    } // setupUi

    void retranslateUi(QWidget *signInPage)
    {
        signInPage->setWindowTitle(QCoreApplication::translate("signInPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("signInPage", "               PLEASE SIGN IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signInPage: public Ui_signInPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINPAGE_H
