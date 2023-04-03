/********************************************************************************
** Form generated from reading UI file 'huddisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUDDISPLAY_H
#define UI_HUDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hudDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *hud_view;

    void setupUi(QWidget *hudDisplay)
    {
        if (hudDisplay->objectName().isEmpty())
            hudDisplay->setObjectName("hudDisplay");
        hudDisplay->resize(1267, 705);
        verticalLayout = new QVBoxLayout(hudDisplay);
        verticalLayout->setObjectName("verticalLayout");
        hud_view = new QGraphicsView(hudDisplay);
        hud_view->setObjectName("hud_view");

        verticalLayout->addWidget(hud_view);


        retranslateUi(hudDisplay);

        QMetaObject::connectSlotsByName(hudDisplay);
    } // setupUi

    void retranslateUi(QWidget *hudDisplay)
    {
        hudDisplay->setWindowTitle(QCoreApplication::translate("hudDisplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hudDisplay: public Ui_hudDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUDDISPLAY_H
