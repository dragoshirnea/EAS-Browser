#include "dialogr2.h"
#include "ui_dialogr2.h"
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QSound>
#include <QLabel>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include "dialogr10.h"

Dialogr2::Dialogr2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr2)
{
    ui->setupUi(this);

}

Dialogr2::~Dialogr2()
{
    delete ui;
}

void Dialogr2::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/em_mec.PNG");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);


    QFile myFile(":/filer5.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr2::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/geom1.png");
    scene->addPixmap(pixmap);
    scene->setSceneRect(pixmap.rect());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);



    QFile myFile(":/filer6.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr2::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    Dialogr10 dialogr10;
    dialogr10.setModal(true);
    dialogr10.exec();
}



void Dialogr2::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QString fileName= QFileDialog::getSaveFileName(this, "Save image", QCoreApplication::applicationDirPath(), "BMP Files (*.bmp);;JPEG (*.JPEG);;PNG (*.png)" );
        if (!fileName.isNull())
        {
            QPixmap pixMap = this->ui->graphicsView->grab();
            pixMap.save(fileName);
        }
}

void Dialogr2::on_pushButton_5_clicked()
{
    QSound::play(":/click6.wav");
}
