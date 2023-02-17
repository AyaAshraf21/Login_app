#include "login.h"
#include "ui_login.h"
#include "loginproject.h"
#include "register.h"
#include "log.h"
#include "change.h"
#include <QPixmap>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    HomePage reg;
    reg.setModal(true);
    reg.exec();
}



void login::on_pushButton_2_clicked()
{
    Log log;
    log.setModal(true);
    log.exec();
}


void login::on_pushButton_3_clicked()
{
    Change change;
    change.setModal(true);
    change.exec();
}



void login::on_pushButton_4_clicked()
{
    QApplication :: quit();
}



