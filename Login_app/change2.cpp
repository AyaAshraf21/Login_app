#include "change2.h"
#include "ui_change2.h"
#include "loginproject.h"

Change2::Change2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Change2)
{
    ui->setupUi(this);
}

Change2::~Change2()
{
    delete ui;
}



bool check4 = false;
void Change2::on_pushButton_2_clicked()
{
    if(!check4){
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
        ui->pushButton_2->setText("hide");
        check4 = !check4;
    }
    else{
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
        ui->pushButton_2->setText("show");
        check4 = !check4;
    }
}


bool check5 = false;
void Change2::on_pushButton_3_clicked()
{
    if(!check5){
        ui->lineEdit_repeat->setEchoMode(QLineEdit::Normal);
        ui->pushButton_3->setText("hide");
        check5 = !check5;
    }
    else{
        ui->lineEdit_repeat->setEchoMode(QLineEdit::Password);
        ui->pushButton_3->setText("show");
        check5 = !check5;
    }
}


void Change2::on_pushButton_clicked()
{
    LoginProject login;
    QString id = ui->lineEdit_id->text();
    QString password = ui->lineEdit_password->text();
    QString repeat = ui->lineEdit_repeat->text();


    if(login.change_password(password.toStdString() , repeat.toStdString())){
        login.update_data_file(id.toStdString() , password.toStdString());
        ui->label_12->setText("The Password was successfully changed!");

    }
    else{
        ui->label_12->setText("invalid password , please try again");
    }
}
























