#include "log.h"
#include "ui_log.h"
#include "loginproject.h"
#include "login.h"
#include "register.h"
#include <QFile>
#include <QTextStream>
#include <QTextBrowser>

Log::Log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Log)
{
    ui->setupUi(this);
}

Log::~Log()
{
    delete ui;
}

void Log::on_pushButton_clicked()
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
            if(login.check_login(id.toStdString() , password.toStdString())){
                ui->label_4->setText("Successfully login , welcome ^_^ ");
            }

            else{
                ui->label_4->setText("invalid password , please try again");
            }
        }
        else{
            ui->label_4->setText("invalid id , please try again");

        }
    }


}


bool check3 = false;
void Log::on_pushButton_2_clicked()
{
    if(!check3){
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
        ui->pushButton_2->setText("hide");
        check3 = !check3;
    }
    else{
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
        ui->pushButton_2->setText("show");
        check3 = !check3;
    }
}

