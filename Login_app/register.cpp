#include "register.h"
#include "ui_register.h"
#include "loginproject.h"
#include <QMessageBox>
#include "login.h"
#include "log.h"
#include <QFile>

HomePage::HomePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}


bool check = false;
void HomePage::on_pushButton_2_clicked()
{
    if(!check){
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
        ui->pushButton_2->setText("hide");
        check = !check;
    }
    else{
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
        ui->pushButton_2->setText("show");
        check = !check;
    }
}



bool check2 = false;
void HomePage::on_pushButton_3_clicked()
{
    if(!check2){
        ui->lineEdit_repeat->setEchoMode(QLineEdit::Normal);
        ui->pushButton_3->setText("hide");
        check2 = !check2;
    }
    else{
        ui->lineEdit_repeat->setEchoMode(QLineEdit::Password);
        ui->pushButton_3->setText("show");
        check2 = !check2;
    }
}




void HomePage::on_pushButton_clicked()
{
    LoginProject login;
    QString username = ui->lineEdit_name->text();
    QString id = ui->lineEdit_id->text();
    QString email = ui->lineEdit_email->text();
    QString phone = ui->lineEdit_phone->text();
    QString password = ui->lineEdit_password->text();
    QString repeat = ui->lineEdit_repeat->text();


    if(!login.checked_password(password.toStdString())){
        ui->label_8->setText("invalid password , please try again");
        ui->label_8->setStyleSheet("{color:#ff0000}");
    }

    if(login.registeration1(id.toStdString())){
        Log log;
        log.setModal(true);
        log.exec();
    }

    else if(login.get_Username(username.toStdString()) and login.get_Email(email.toStdString()) and login.get_id(id.toStdString()) and login.get_Phone_number(phone.toStdString()) and login.checked_password(password.toStdString()) ) {
        if (login.repeated_password(password.toStdString() , repeat.toStdString())){
            login.registeration2(username.toStdString() , email.toStdString() , phone.toStdString() ,password.toStdString(), id.toStdString());
            ui->label_7->setText("Successfully Registered");
            }
        else{
            ui->label_7->setText("Passwords do not match , please try again");
        }
    }
    else{
        ui->label_7->setText("invalid information , please try again");

    }

}














