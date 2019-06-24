#include "dialogr.h"
#include "ui_dialogr.h"
#include "dialogr1.h"
#include "dialogr2.h"
#include "dialogr3.h"
#include "dialogr4.h"
#include "dialogr5.h"
#include "dialogr6.h"
#include "dialogr7.h"
#include "dialogr10.h"
#include <QSound>

Dialogr::Dialogr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr)
{
    ui->setupUi(this);
}

Dialogr::~Dialogr()
{
    delete ui;
}

void Dialogr::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr5 dialogr5;
        dialogr5.setModal(true);
        dialogr5.exec();
}

void Dialogr::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr1 dialogr1;
        dialogr1.setModal(true);
        dialogr1.exec();
}

void Dialogr::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr2 dialogr2;
        dialogr2.setModal(true);
        dialogr2.exec();
}

void Dialogr::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr4 dialogr4;
        dialogr4.setModal(true);
        dialogr4.exec();
}

void Dialogr::on_pushButton_8_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr3 dialogr3;
        dialogr3.setModal(true);
        dialogr3.exec();
}

void Dialogr::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr7 dialogr7;
        dialogr7.setModal(true);
        dialogr7.exec();
}

void Dialogr::on_pushButton_7_clicked()
{
    QSound::play(":/click4.wav");
        Dialogr6 dialogr6;
        dialogr6.setModal(true);
        dialogr6.exec();
}

void Dialogr::on_pushButton_6_clicked()
{
    QSound::play(":/click6.wav");
}


