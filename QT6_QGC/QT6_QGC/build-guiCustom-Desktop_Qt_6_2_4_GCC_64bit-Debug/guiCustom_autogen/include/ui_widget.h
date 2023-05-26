/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
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
    QStackedWidget *myVideo;
    QWidget *page;
    QLabel *label;
    QLabel *precisionScore;
    QWidget *page_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttonsLayout;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1794, 1500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/:/qgc.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qconicalgradient(cx:0.968, cy:0.0681818, angle:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        myVideo = new QStackedWidget(Widget);
        myVideo->setObjectName(QString::fromUtf8("myVideo"));
        myVideo->setGeometry(QRect(690, 20, 561, 371));
        myVideo->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 121, 21));
        precisionScore = new QLabel(page);
        precisionScore->setObjectName(QString::fromUtf8("precisionScore"));
        precisionScore->setGeometry(QRect(0, 40, 121, 21));
        myVideo->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        myVideo->addWidget(page_2);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 411, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        joystickwidget = new QWidget(Widget);
        joystickwidget->setObjectName(QString::fromUtf8("joystickwidget"));
        joystickwidget->setGeometry(QRect(200, 650, 761, 301));
        verticalLayoutWidget_2 = new QWidget(joystickwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 451, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        joysticklabel = new QLabel(Widget);
        joysticklabel->setObjectName(QString::fromUtf8("joysticklabel"));
        joysticklabel->setGeometry(QRect(440, 610, 191, 31));
        MainMenu = new QWidget(Widget);
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->setGeometry(QRect(0, 100, 201, 531));
        label_menu = new QLabel(MainMenu);
        label_menu->setObjectName(QString::fromUtf8("label_menu"));
        label_menu->setGeometry(QRect(40, 50, 91, 81));
        label_menu->setStyleSheet(QString::fromUtf8("border-image: url(:/:/home.png);\n"
""));
        label_2 = new QLabel(MainMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 0, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 italic 11pt \"Ubuntu Mono\";\n"
"font: 13pt \"Ubuntu\";\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font: 16pt \"Ubuntu\";"));
        line_2 = new QFrame(MainMenu);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 350, 201, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(MainMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 180, 101, 101));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/:/myaccount.png);"));
        signOut = new QPushButton(MainMenu);
        signOut->setObjectName(QString::fromUtf8("signOut"));
        signOut->setGeometry(QRect(0, 500, 89, 31));
        createAccuountPages = new QPushButton(MainMenu);
        createAccuountPages->setObjectName(QString::fromUtf8("createAccuountPages"));
        createAccuountPages->setGeometry(QRect(30, 300, 131, 31));
        drone_push = new QPushButton(MainMenu);
        drone_push->setObjectName(QString::fromUtf8("drone_push"));
        drone_push->setGeometry(QRect(30, 140, 131, 31));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(1380, 10, 451, 771));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        gpsStatus = new QWidget();
        gpsStatus->setObjectName(QString::fromUtf8("gpsStatus"));
        label_3 = new QLabel(gpsStatus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 0, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 300 italic 16pt \"URW Bookman\";"));
        tabWidget->addTab(gpsStatus, QString());
        currentLocation = new QWidget();
        currentLocation->setObjectName(QString::fromUtf8("currentLocation"));
        tabWidget->addTab(currentLocation, QString());
        next_button = new QPushButton(Widget);
        next_button->setObjectName(QString::fromUtf8("next_button"));
        next_button->setGeometry(QRect(1650, 920, 61, 21));
        next_button->setStyleSheet(QString::fromUtf8("border-image: url(:/:/right.png);\n"
"background-color: rgb(245, 121, 0);"));
        next_button->setAutoDefault(false);
        next_button->setFlat(false);
        previous_button = new QPushButton(Widget);
        previous_button->setObjectName(QString::fromUtf8("previous_button"));
        previous_button->setGeometry(QRect(1550, 920, 61, 21));
        previous_button->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 89, 2);\n"
"border-image: url(:/:/left.png);"));
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(730, 529, 491, 31));
        buttonsLayout = new QHBoxLayout(horizontalLayoutWidget);
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonsLayout->setContentsMargins(0, 0, 0, 0);

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
