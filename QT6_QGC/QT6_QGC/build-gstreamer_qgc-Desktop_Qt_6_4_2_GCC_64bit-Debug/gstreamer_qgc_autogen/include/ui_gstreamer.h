/********************************************************************************
** Form generated from reading UI file 'gstreamer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSTREAMER_H
#define UI_GSTREAMER_H

#include <QtCore/QVariant>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gstreamer
{
public:
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QWidget *widget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QDial *dial;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gstreamer)
    {
        if (gstreamer->objectName().isEmpty())
            gstreamer->setObjectName("gstreamer");
        gstreamer->resize(800, 1507);
        centralwidget = new QWidget(gstreamer);
        centralwidget->setObjectName("centralwidget");
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(10, 50, 300, 200));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(400, -10, 291, 561));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 310, 101, 21));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 350, 101, 21));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 380, 101, 21));
        pushButton->setCursor(QCursor(Qt::SizeFDiagCursor));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 260, 89, 25));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 260, 89, 25));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(210, 260, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 0, 41, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 20, 111, 21));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 0, 101, 21));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(120, 0, 101, 21));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(230, 0, 89, 25));
        dial = new QDial(centralwidget);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(350, 440, 91, 64));
        dial->setCursor(QCursor(Qt::WaitCursor));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(110, 500, 89, 25));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(110, 420, 89, 25));
        pushButton_11->setAutoExclusive(false);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(20, 460, 89, 25));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(190, 460, 89, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 380, 401, 21));
        label_3->setCursor(QCursor(Qt::SizeFDiagCursor));
        label_3->setMouseTracking(true);
        label_3->setTabletTracking(true);
        label_3->setFocusPolicy(Qt::StrongFocus);
        label_3->setScaledContents(false);
        label_3->setWordWrap(true);
        label_3->setMargin(5);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 590, 256, 192));
        gstreamer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gstreamer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        gstreamer->setMenuBar(menubar);
        statusbar = new QStatusBar(gstreamer);
        statusbar->setObjectName("statusbar");
        gstreamer->setStatusBar(statusbar);

        retranslateUi(gstreamer);

        QMetaObject::connectSlotsByName(gstreamer);
    } // setupUi

    void retranslateUi(QMainWindow *gstreamer)
    {
        gstreamer->setWindowTitle(QCoreApplication::translate("gstreamer", "gstreamer", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gstreamer", "Setpoints", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gstreamer", "arm", nullptr));
        pushButton->setText(QCoreApplication::translate("gstreamer", "disarm", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gstreamer", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gstreamer", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gstreamer", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("gstreamer", "MAP", nullptr));
        label_2->setText(QCoreApplication::translate("gstreamer", "Video Stream", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gstreamer", "Battery Status", nullptr));
        pushButton_8->setText(QCoreApplication::translate("gstreamer", "GPS Status", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gstreamer", "Add File", nullptr));
        pushButton_10->setText(QCoreApplication::translate("gstreamer", "Back", nullptr));
        pushButton_11->setText(QCoreApplication::translate("gstreamer", "Forward", nullptr));
        pushButton_12->setText(QCoreApplication::translate("gstreamer", "Left", nullptr));
        pushButton_13->setText(QCoreApplication::translate("gstreamer", "Right", nullptr));
        label_3->setText(QCoreApplication::translate("gstreamer", "                                      JOYSTICK CONTROL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gstreamer: public Ui_gstreamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSTREAMER_H
