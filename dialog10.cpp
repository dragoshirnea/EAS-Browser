#include "dialog10.h"
#include "ui_dialog10.h"
#include "dialog9.h"
#include "dialog11.h"
#include "dialog12.h"
#include <QSound>
#include <QGraphicsView>
#include <QImage>
#include <QBitmap>
#include <QGraphicsView>
#include <QLabel>
#include <QTextStream>

Dialog10::Dialog10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog10)
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

Dialog10::~Dialog10()
{
    delete ui;
}

void Dialog10::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
    Dialog9 dialog9;
    dialog9.setModal(true);
    dialog9.exec();
}


void Dialog10::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    Dialog11 dialog11;
    dialog11.setModal(true);
    dialog11.exec();
}

void Dialog10::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    Dialog12 dialog12;
    dialog12.setModal(true);
    dialog12.exec();
}
