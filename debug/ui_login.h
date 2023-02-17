/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1306, 720);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(350, 110, 591, 561));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0.111, y2:1, stop:0 rgba(219, 224, 228, 255));\n"
"border: 2px solid rgb(194,199,202);\n"
"border-radius : 25px;\n"
"color: rgb(71 , 71 , 71);\n"
"font: 700 16pt \"Arial\";"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 450, 401, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";\n"
"border:2px solidqlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255) ;\n"
"border-radius:20px;\n"
""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(90, 350, 401, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";\n"
"border:2px solidqlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255) ;\n"
"border-radius:20px;\n"
""));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 260, 401, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";\n"
"border:2px solidqlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255) ;\n"
"border-radius:20px;\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 160, 401, 71));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255) ;\n"
"border:2px solidqlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:20px;\n"
"font: 700 20pt \"Segoe UI\";\n"
"\n"
"\n"
"\n"
""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 40, 231, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(71, 71, 71);\n"
"font: 24pt \"segeo\";\n"
"font: 700 26pt \"Segoe UI\";\n"
"border : 2px lightgray;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -1, 1311, 91));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.499423, y1:0.744, x2:0.5, y2:1, stop:0 rgba(199, 204, 207, 255), stop:0.826923 rgba(245, 251, 255, 255));\n"
"color: rgb(175, 75, 135);\n"
"font: 22pt \"Wide Latin\";"));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1306, 26));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);
        QObject::connect(pushButton_4, &QPushButton::clicked, login, qOverload<>(&QMainWindow::close));

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        groupBox->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("login", "Exit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("login", "Change Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Register", nullptr));
        label->setText(QCoreApplication::translate("login", "User menu", nullptr));
        label_2->setText(QCoreApplication::translate("login", "    LOGIN APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
