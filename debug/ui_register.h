/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QGroupBox *groupBox;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_repeat;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_email;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_9;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1215, 729);
        HomePage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(HomePage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(270, 100, 611, 581));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(71 , 71 , 71);\n"
"font: 18pt \"Segoe\";\n"
"background-color: rgb(230, 234, 234);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 40, 431, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 390, 361, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 8pt \"Segoe Print\";\n"
""));
        lineEdit_repeat = new QLineEdit(groupBox);
        lineEdit_repeat->setObjectName("lineEdit_repeat");
        lineEdit_repeat->setGeometry(QRect(210, 460, 321, 25));
        lineEdit_repeat->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
""));
        lineEdit_repeat->setEchoMode(QLineEdit::Password);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 460, 51, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 530, 103, 35));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"border:2px solidqlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:20px;\n"
""));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 360, 51, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_phone = new QLineEdit(groupBox);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(210, 310, 321, 25));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
""));
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(210, 190, 321, 25));
        lineEdit_id->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"Arial\";\n"
""));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(210, 240, 321, 25));
        lineEdit_email->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 120, 101, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175, 75, 135);\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 190, 31, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175,75,135);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 240, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175,75,135);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 310, 141, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175,75,135);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 360, 101, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175,75,135);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 460, 161, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe\";\n"
"color: rgb(175,75,135);"));
        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(210, 120, 321, 25));
        lineEdit_name->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
""));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(210, 360, 321, 25));
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 11pt \"Arial\";\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 270, 301, 20));
        label_10->setStyleSheet(QString::fromUtf8("font: 8pt \"Segoe Print\";\n"
""));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(210, 150, 301, 20));
        label_11->setStyleSheet(QString::fromUtf8("font: 8pt \"Segoe Print\";\n"
""));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(540, 120, 63, 20));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        lineEdit_phone->raise();
        lineEdit_id->raise();
        lineEdit_email->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_name->raise();
        lineEdit_password->raise();
        label_7->raise();
        label_8->raise();
        lineEdit_repeat->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_9 = new QLabel(HomePage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 1311, 71));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.499423, y1:0.744, x2:0.5, y2:1, stop:0 rgba(199, 204, 207, 255), stop:0.826923 rgba(245, 251, 255, 255));\n"
"font: 22pt \"Wide Latin\";\n"
"color: rgb(175, 75, 135);\n"
""));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HomePage", "Register", nullptr));
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("HomePage", "password should be at least 8 characters include:\n"
"Digit , Lowercase ,Uppercase and Special Character", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "show", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Register", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HomePage", "show", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("HomePage", "E_mail", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "phone_number", nullptr));
        label_5->setText(QCoreApplication::translate("HomePage", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("HomePage", "Repeat Password", nullptr));
        label_10->setText(QCoreApplication::translate("HomePage", "must be like: name@domain.com", nullptr));
        label_11->setText(QCoreApplication::translate("HomePage", "must be like:  first name_last name", nullptr));
        label_12->setText(QString());
        label_9->setText(QCoreApplication::translate("HomePage", "      LOGIN APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
