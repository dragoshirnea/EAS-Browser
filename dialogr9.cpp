#include "dialogr9.h"
#include "ui_dialogr9.h"
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QSound>
#include <QLabel>
#include <QTextStream>
#include <QWheelEvent>

Dialogr9::Dialogr9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr9)
{
    ui->setupUi(this);

}

void Dialogr9::wheelEvent(QWheelEvent *event){

        ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
        // Scale the view / do the zoom
        double scaleFactor = 1.15;
        if(event->delta() > 0) {
            // Zoom in
            ui->graphicsView-> scale(scaleFactor, scaleFactor);

        } else {
            // Zooming out
             ui->graphicsView->scale(1.0 / scaleFactor, 1.0 / scaleFactor);
        }
}

Dialogr9::~Dialogr9()
{
    delete ui;
}

void Dialogr9::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
    QString fileName= QFileDialog::getSaveFileName(this, "Save image", QCoreApplication::applicationDirPath(), "BMP Files (*.bmp);;JPEG (*.JPEG);;PNG (*.png)" );
        if (!fileName.isNull())
        {
            QPixmap pixMap = this->ui->graphicsView->grab();
            pixMap.save(fileName);
        }
}

void Dialogr9::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_polar_NS-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_polar1.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);

}

void Dialogr9::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_polar_EW-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_polar2.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_polar_Vertical-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_polar3.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_6_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_dual_Polarizare_NS-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_graph2d1.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_7_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_Dual_Polarizare_EW-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_graph2d2.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_8_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_dual_Polarizare_Verticala-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_graph2d3.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_9_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/Grafic_dual_Axe_rotite_vs_Axe_initiale-1.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/ro_rotation.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}

void Dialogr9::on_pushButton_10_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixmap(":/angles_good.png");
    scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->ensureVisible ( scene->sceneRect() );
    ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);

    QFile myFile(":/filer8.txt");
        myFile.open(QIODevice::ReadOnly);
        QTextStream textStream(&myFile);
        QString line = textStream.readAll();
        myFile.close();
        ui->textEdit->setPlainText(line);
}
