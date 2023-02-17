#include "change.h"
#include "ui_change.h"
#include "loginproject.h"
#include "change2.h"
#include "register.h"

Change::Change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Change)
{
    ui->setupUi(this);
}

Change::~Change()
{
    delete ui;
}



bool check1 =  false;
void Change::on_pushButton_2_clicked()
{
    if(!check1){
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
        ui->pushButton_2->setText("hide");
        check1 = !check1;
    }
    else{
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
        ui->pushButton_2->setText("show");
        check1 = !check1;
    }
}



void Change::on_pushButton_clicked()
{
    LoginProject login;
    QString id = ui->lineEdit_id->text();
    QString password = ui->lineEdit_password->text();


    if(!login.registeration1(id.toStdString())){
        login.read_file();
        HomePage reg;
        reg.setModal(true);
        reg.exec();
    }

    else{
        if(login.get_id(id.toStdString())){
            if(login.check_login( id.toStdString() , password.toStdString())){
                ui->label_4->setText("Successfully login , hello");
                Change2 change2 ;
                change2.setModal(true);
                change2.exec();
            }

            else{
                ui->label_4->setText("invalid information , please try again");

            }
        }
    }


}






