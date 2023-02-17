/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Log
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_password;
    QLabel *label_3;

    void setupUi(QDialog *Log)
    {
        if (Log->objectName().isEmpty())
            Log->setObjectName("Log");
        Log->resize(1083, 589);
        Log->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(Log);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(270, 190, 561, 311));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(44, 44, 44);\n"
"font: 700 18pt \"Segoe ui\";\n"
"background-color: rgb(230, 234, 234);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 250, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 40, 521, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(420, 180, 51, 26));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 110, 21, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(175, 75, 135);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 180, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(175, 75, 135);"));
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(200, 110, 271, 26));
        lineEdit_id->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(200, 180, 271, 26));
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->raise();
        pushButton->raise();
        label_4->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        lineEdit_id->raise();
        label_3 = new QLabel(Log);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, -10, 1431, 71));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Arial\";\n"
"background-color: qlineargradient(spread:pad, x1:0.499423, y1:0.744, x2:0.5, y2:1, stop:0 rgba(199, 204, 207, 255), stop:0.826923 rgba(245, 251, 255, 255));\n"
"color: rgb(175, 75, 135);\n"
""));

        retranslateUi(Log);

        QMetaObject::connectSlotsByName(Log);
    } // setupUi

    void retranslateUi(QDialog *Log)
    {
        Log->setWindowTitle(QCoreApplication::translate("Log", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Log", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("Log", "Login", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Log", "show", nullptr));
        label->setText(QCoreApplication::translate("Log", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("Log", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Log", "      LOGIN APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Log: public Ui_Log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
