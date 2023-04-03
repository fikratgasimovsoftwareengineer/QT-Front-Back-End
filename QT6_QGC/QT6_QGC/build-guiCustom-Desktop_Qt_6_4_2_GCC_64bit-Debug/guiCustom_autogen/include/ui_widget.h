/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *line;
    QStackedWidget *myVideo;
    QWidget *page;
    QLabel *label;
    QLabel *precisionScore;
    QWidget *page_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QWidget *joystickwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *joysticklabel;
    QWidget *MainMenu;
    QLabel *label_menu;
    QLabel *label_2;
    QFrame *line_2;
    QWidget *widget;
    QPushButton *signOut;
    QPushButton *createAccuountPages;
    QPushButton *drone_push;
    QTabWidget *tabWidget;
    QWidget *gpsStatus;
    QLabel *label_3;
    QWidget *currentLocation;
    QPushButton *next_button;
    QPushButton *previous_button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1794, 1500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/:/qgc.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qconicalgradient(cx:0.968, cy:0.0681818, angle:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        line = new QFrame(Widget);
        line->setObjectName("line");
        line->setGeometry(QRect(760, 490, 461, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        myVideo = new QStackedWidget(Widget);
        myVideo->setObjectName("myVideo");
        myVideo->setGeometry(QRect(750, 110, 491, 371));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 121, 21));
        precisionScore = new QLabel(page);
        precisionScore->setObjectName("precisionScore");
        precisionScore->setGeometry(QRect(0, 40, 121, 21));
        myVideo->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        myVideo->addWidget(page_2);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 411, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_1 = new QPushButton(Widget);
        button_1->setObjectName("button_1");
        button_1->setGeometry(QRect(770, 520, 101, 41));
        button_2 = new QPushButton(Widget);
        button_2->setObjectName("button_2");
        button_2->setGeometry(QRect(930, 520, 101, 41));
        button_3 = new QPushButton(Widget);
        button_3->setObjectName("button_3");
        button_3->setGeometry(QRect(1100, 520, 101, 41));
        joystickwidget = new QWidget(Widget);
        joystickwidget->setObjectName("joystickwidget");
        joystickwidget->setGeometry(QRect(200, 650, 761, 301));
        verticalLayoutWidget_2 = new QWidget(joystickwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 451, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        joysticklabel = new QLabel(Widget);
        joysticklabel->setObjectName("joysticklabel");
        joysticklabel->setGeometry(QRect(440, 610, 191, 31));
        MainMenu = new QWidget(Widget);
        MainMenu->setObjectName("MainMenu");
        MainMenu->setGeometry(QRect(0, 100, 201, 531));
        label_menu = new QLabel(MainMenu);
        label_menu->setObjectName("label_menu");
        label_menu->setGeometry(QRect(40, 50, 91, 81));
        label_menu->setStyleSheet(QString::fromUtf8("border-image: url(:/:/home.png);\n"
""));
        label_2 = new QLabel(MainMenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 0, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 italic 11pt \"Ubuntu Mono\";\n"
"font: 13pt \"Ubuntu\";\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font: 16pt \"Ubuntu\";"));
        line_2 = new QFrame(MainMenu);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 350, 201, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(MainMenu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 180, 101, 101));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/:/myaccount.png);"));
        signOut = new QPushButton(MainMenu);
        signOut->setObjectName("signOut");
        signOut->setGeometry(QRect(0, 500, 89, 31));
        createAccuountPages = new QPushButton(MainMenu);
        createAccuountPages->setObjectName("createAccuountPages");
        createAccuountPages->setGeometry(QRect(30, 300, 131, 31));
        drone_push = new QPushButton(MainMenu);
        drone_push->setObjectName("drone_push");
        drone_push->setGeometry(QRect(30, 140, 131, 31));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(1330, 10, 451, 771));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        gpsStatus = new QWidget();
        gpsStatus->setObjectName("gpsStatus");
        label_3 = new QLabel(gpsStatus);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 0, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 300 italic 16pt \"URW Bookman\";"));
        tabWidget->addTab(gpsStatus, QString());
        currentLocation = new QWidget();
        currentLocation->setObjectName("currentLocation");
        tabWidget->addTab(currentLocation, QString());
        next_button = new QPushButton(Widget);
        next_button->setObjectName("next_button");
        next_button->setGeometry(QRect(1650, 920, 61, 21));
        next_button->setStyleSheet(QString::fromUtf8("border-image: url(:/:/right.png);\n"
"background-color: rgb(245, 121, 0);"));
        next_button->setAutoDefault(false);
        next_button->setFlat(false);
        previous_button = new QPushButton(Widget);
        previous_button->setObjectName("previous_button");
        previous_button->setGeometry(QRect(1550, 920, 61, 21));
        previous_button->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 89, 2);\n"
"border-image: url(:/:/left.png);"));

        retranslateUi(Widget);

        myVideo->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "FPS: ", nullptr));
        precisionScore->setText(QCoreApplication::translate("Widget", "Precision Score: ", nullptr));
        button_1->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        button_2->setText(QCoreApplication::translate("Widget", "Stop", nullptr));
        button_3->setText(QCoreApplication::translate("Widget", "Pause", nullptr));
        joysticklabel->setText(QCoreApplication::translate("Widget", "   DRONE CONTROL STAGE", nullptr));
        label_menu->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "    Menu", nullptr));
        signOut->setText(QCoreApplication::translate("Widget", "SignOut", nullptr));
        createAccuountPages->setText(QCoreApplication::translate("Widget", "Create Account", nullptr));
        drone_push->setText(QCoreApplication::translate("Widget", "Drone Type", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "    Visualize Map", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gpsStatus), QCoreApplication::translate("Widget", "GPS STATUS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(currentLocation), QCoreApplication::translate("Widget", "CURRENT LOCATION", nullptr));
#if QT_CONFIG(tooltip)
        next_button->setToolTip(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; color:#ef2929;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        next_button->setText(QString());
        previous_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
