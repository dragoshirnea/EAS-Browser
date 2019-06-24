#include "dialogr10.h"
#include "ui_dialogr10.h"
#include "dialogr9.h"
#include "dialogr11.h"
#include "dialogr12r.h"
#include <QSound>
#include <QGraphicsView>
#include <QImage>
#include <QBitmap>
#include <QGraphicsView>
#include <QLabel>
#include <QTextStream>

Dialogr10::Dialogr10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr10)
{
    ui->setupUi(this);
    QLabel label_4;
    QPixmap pixmap(":/logo.png");
    ui->label_4->setPixmap(pixmap);

    QLabel label_5;
    QPixmap pixmap1(":/logo2.png");
    ui->label_5->setPixmap(pixmap1);

    QLabel label_6;
    QPixmap pixmap2(":/logo3.png");
    ui->label_6->setPixmap(pixmap2);


}

Dialogr10::~Dialogr10()
{
    delete ui;
}

void Dialogr10::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
    Dialogr9 dialogr9;
    dialogr9.setModal(true);
    dialogr9.exec();
}


void Dialogr10::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    Dialogr11 dialogr11;
    dialogr11.setModal(true);
    dialogr11.exec();
}

void Dialogr10::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    Dialogr12r dialogr12r;
    dialogr12r.setModal(true);
    dialogr12r.exec();
}
