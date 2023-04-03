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

class Ui_signinpage
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalSignIN;
    QWidget *widget;

    void setupUi(QWidget *signinpage)
    {
        if (signinpage->objectName().isEmpty())
            signinpage->setObjectName("signinpage");
        signinpage->resize(1232, 776);
        label = new QLabel(signinpage);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 441, 51));
        label->setStyleSheet(QString::fromUtf8("font: 300 italic 24pt \"URW Bookman\";\n"
""));
        verticalLayoutWidget = new QWidget(signinpage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 80, 321, 711));
        verticalSignIN = new QVBoxLayout(verticalLayoutWidget);
        verticalSignIN->setObjectName("verticalSignIN");
        verticalSignIN->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(signinpage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(500, 0, 731, 801));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/:/drone_3.png);"));

        retranslateUi(signinpage);

        QMetaObject::connectSlotsByName(signinpage);
    } // setupUi

    void retranslateUi(QWidget *signinpage)
    {
        signinpage->setWindowTitle(QCoreApplication::translate("signinpage", "Form", nullptr));
        label->setText(QCoreApplication::translate("signinpage", "               PLEASE SIGN IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signinpage: public Ui_signinpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINPAGE_H
