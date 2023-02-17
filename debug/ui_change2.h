/********************************************************************************
** Form generated from reading UI file 'change2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE2_H
#define UI_CHANGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Change2
{
public:
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_repeat;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_3;
    QLabel *label_12;

    void setupUi(QDialog *Change2)
    {
        if (Change2->objectName().isEmpty())
            Change2->setObjectName("Change2");
        Change2->resize(1135, 663);
        Change2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Change2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, -10, 1311, 71));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Arial\";\n"
"background-color: qlineargradient(spread:pad, x1:0.499423, y1:0.744, x2:0.5, y2:1, stop:0 rgba(199, 204, 207, 255), stop:0.826923 rgba(245, 251, 255, 255));\n"
"color: rgb(175, 75, 135);\n"
""));
        groupBox = new QGroupBox(Change2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(270, 130, 601, 461));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(44, 44, 44);\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color: rgb(230, 234, 234);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 390, 221, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 20, 521, 31));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 130, 21, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(175, 75, 135);"));
        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(220, 130, 321, 26));
        lineEdit_id->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 200, 51, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_repeat = new QLineEdit(groupBox);
        lineEdit_repeat->setObjectName("lineEdit_repeat");
        lineEdit_repeat->setGeometry(QRect(220, 310, 321, 25));
        lineEdit_repeat->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";\n"
""));
        lineEdit_repeat->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(220, 230, 361, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 210, 86, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Arial\";\n"
"color: rgb(175,75,135);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 310, 153, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Arial\";\n"
"color: rgb(175,75,135);"));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(220, 200, 321, 25));
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(490, 310, 51, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: rgb(44, 44, 44);\n"
"background-color: qlineargradient(spread:pad, x1:0.37, y1:0.248304, x2:1, y2:1, stop:0 rgba(175, 75, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(42, 50, 531, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_password->raise();
        pushButton->raise();
        label_4->raise();
        label->raise();
        lineEdit_id->raise();
        pushButton_2->raise();
        lineEdit_repeat->raise();
        label_8->raise();
        label_5->raise();
        label_6->raise();
        pushButton_3->raise();
        label_12->raise();

        retranslateUi(Change2);

        QMetaObject::connectSlotsByName(Change2);
    } // setupUi

    void retranslateUi(QDialog *Change2)
    {
        Change2->setWindowTitle(QCoreApplication::translate("Change2", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Change2", "      LOGIN APP", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Change2", "Change password", nullptr));
        pushButton->setText(QCoreApplication::translate("Change2", "Change password", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("Change2", "ID", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Change2", "show", nullptr));
        label_8->setText(QCoreApplication::translate("Change2", "password should be at least 8 characters include:\n"
"Digit , Lowercase ,Uppercase and Special Character", nullptr));
        label_5->setText(QCoreApplication::translate("Change2", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("Change2", "Repeat Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Change2", "show", nullptr));
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Change2: public Ui_Change2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE2_H
