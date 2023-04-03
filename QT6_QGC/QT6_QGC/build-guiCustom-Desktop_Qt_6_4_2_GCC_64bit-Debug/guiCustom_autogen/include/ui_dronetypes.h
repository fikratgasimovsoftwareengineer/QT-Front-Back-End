/********************************************************************************
** Form generated from reading UI file 'dronetypes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRONETYPES_H
#define UI_DRONETYPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_droneTypes
{
public:
    QLabel *label;
    QLabel *quadrator;
    QLabel *rover;
    QLabel *unknown_drone_ui;
    QLabel *plane;
    QLabel *tricopter_y;
    QLabel *unknown_drone_ui_2;
    QComboBox *uav_main_comboBox;
    QComboBox *ugv_combo_ui;
    QComboBox *comboBox_3;
    QComboBox *combo_plane_ui;
    QComboBox *combo_tricopter;
    QComboBox *comboBox_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *droneTypes)
    {
        if (droneTypes->objectName().isEmpty())
            droneTypes->setObjectName("droneTypes");
        droneTypes->resize(1794, 1500);
        droneTypes->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        label = new QLabel(droneTypes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 161, 51));
        label->setStyleSheet(QString::fromUtf8("font: 700 italic 11pt \"Ubuntu Condensed\";\n"
"background-color: rgb(193, 125, 17);\n"
"font: 13pt \"Ubuntu\";"));
        quadrator = new QLabel(droneTypes);
        quadrator->setObjectName("quadrator");
        quadrator->setGeometry(QRect(220, 70, 391, 271));
        rover = new QLabel(droneTypes);
        rover->setObjectName("rover");
        rover->setGeometry(QRect(650, 70, 401, 271));
        unknown_drone_ui = new QLabel(droneTypes);
        unknown_drone_ui->setObjectName("unknown_drone_ui");
        unknown_drone_ui->setGeometry(QRect(1150, 70, 381, 261));
        plane = new QLabel(droneTypes);
        plane->setObjectName("plane");
        plane->setGeometry(QRect(220, 420, 391, 291));
        plane->setStyleSheet(QString::fromUtf8("border-color: rgb(136, 138, 133);\n"
"border-color: rgb(52, 101, 164);"));
        tricopter_y = new QLabel(droneTypes);
        tricopter_y->setObjectName("tricopter_y");
        tricopter_y->setGeometry(QRect(650, 420, 411, 291));
        unknown_drone_ui_2 = new QLabel(droneTypes);
        unknown_drone_ui_2->setObjectName("unknown_drone_ui_2");
        unknown_drone_ui_2->setEnabled(false);
        unknown_drone_ui_2->setGeometry(QRect(1150, 420, 391, 291));
        uav_main_comboBox = new QComboBox(droneTypes);
        uav_main_comboBox->setObjectName("uav_main_comboBox");
        uav_main_comboBox->setGeometry(QRect(220, 320, 391, 21));
        uav_main_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        ugv_combo_ui = new QComboBox(droneTypes);
        ugv_combo_ui->setObjectName("ugv_combo_ui");
        ugv_combo_ui->setGeometry(QRect(650, 320, 401, 21));
        ugv_combo_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        comboBox_3 = new QComboBox(droneTypes);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(1150, 320, 381, 21));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        combo_plane_ui = new QComboBox(droneTypes);
        combo_plane_ui->setObjectName("combo_plane_ui");
        combo_plane_ui->setGeometry(QRect(220, 690, 391, 21));
        combo_plane_ui->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        combo_tricopter = new QComboBox(droneTypes);
        combo_tricopter->setObjectName("combo_tricopter");
        combo_tricopter->setGeometry(QRect(650, 690, 411, 21));
        combo_tricopter->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        comboBox_6 = new QComboBox(droneTypes);
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(1150, 690, 391, 21));
        comboBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 185, 110);"));
        pushButton = new QPushButton(droneTypes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 160, 161, 41));
        pushButton_2 = new QPushButton(droneTypes);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 210, 161, 41));
        pushButton_3 = new QPushButton(droneTypes);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 260, 161, 41));
        pushButton_4 = new QPushButton(droneTypes);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 310, 161, 41));
        pushButton_5 = new QPushButton(droneTypes);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 360, 161, 41));
        pushButton_6 = new QPushButton(droneTypes);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 410, 161, 41));
        pushButton_7 = new QPushButton(droneTypes);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 460, 161, 41));
        pushButton_8 = new QPushButton(droneTypes);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 510, 161, 41));
        pushButton_9 = new QPushButton(droneTypes);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 560, 161, 41));

        retranslateUi(droneTypes);

        QMetaObject::connectSlotsByName(droneTypes);
    } // setupUi

    void retranslateUi(QWidget *droneTypes)
    {
        droneTypes->setWindowTitle(QCoreApplication::translate("droneTypes", "Form", nullptr));
        label->setText(QCoreApplication::translate("droneTypes", "       Vehicle SetUp", nullptr));
        quadrator->setText(QString());
        rover->setText(QString());
        unknown_drone_ui->setText(QString());
        plane->setText(QString());
        tricopter_y->setText(QString());
        unknown_drone_ui_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("droneTypes", "Summary", nullptr));
        pushButton_2->setText(QCoreApplication::translate("droneTypes", "Firmware", nullptr));
        pushButton_3->setText(QCoreApplication::translate("droneTypes", "AirFrame", nullptr));
        pushButton_4->setText(QCoreApplication::translate("droneTypes", "Radio", nullptr));
        pushButton_5->setText(QCoreApplication::translate("droneTypes", "Fligth Modes", nullptr));
        pushButton_6->setText(QCoreApplication::translate("droneTypes", "Power", nullptr));
        pushButton_7->setText(QCoreApplication::translate("droneTypes", "Safety", nullptr));
        pushButton_8->setText(QCoreApplication::translate("droneTypes", "Tuning", nullptr));
        pushButton_9->setText(QCoreApplication::translate("droneTypes", "Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class droneTypes: public Ui_droneTypes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRONETYPES_H
