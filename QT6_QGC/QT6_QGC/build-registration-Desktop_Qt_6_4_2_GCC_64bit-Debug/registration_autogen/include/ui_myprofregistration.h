/********************************************************************************
** Form generated from reading UI file 'myprofregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROFREGISTRATION_H
#define UI_MYPROFREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myprofregistration
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *left_vertical;
    QLabel *reg_label;
    QWidget *widget_2;

    void setupUi(QWidget *myprofregistration)
    {
        if (myprofregistration->objectName().isEmpty())
            myprofregistration->setObjectName("myprofregistration");
        myprofregistration->resize(1398, 782);
        horizontalLayout_2 = new QHBoxLayout(myprofregistration);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget = new QWidget(myprofregistration);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 177, 219);"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 190, 291, 451));
        left_vertical = new QVBoxLayout(verticalLayoutWidget);
        left_vertical->setObjectName("left_vertical");
        left_vertical->setContentsMargins(0, 0, 0, 0);
        reg_label = new QLabel(widget);
        reg_label->setObjectName("reg_label");
        reg_label->setGeometry(QRect(80, 20, 421, 91));
        reg_label->setTextFormat(Qt::AutoText);
        reg_label->setScaledContents(true);
        reg_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        reg_label->setIndent(25);
        reg_label->setOpenExternalLinks(false);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(550, 0, 831, 771));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/:/reg.png);"));

        horizontalLayout_2->addWidget(widget);


        retranslateUi(myprofregistration);

        QMetaObject::connectSlotsByName(myprofregistration);
    } // setupUi

    void retranslateUi(QWidget *myprofregistration)
    {
        myprofregistration->setWindowTitle(QCoreApplication::translate("myprofregistration", "Form", nullptr));
        reg_label->setText(QCoreApplication::translate("myprofregistration", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-style:italic;\">GUI DRONE REGISTER</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myprofregistration: public Ui_myprofregistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFREGISTRATION_H
