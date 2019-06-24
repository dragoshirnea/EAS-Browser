#include "dialogr13.h"
#include "ui_dialogr13.h"
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QSound>
#include <QLabel>
#include <QTextStream>
#include <QWheelEvent>
#include <QPixmap>
#include <QBitmap>

Dialogr13::Dialogr13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr13)
{
    ui->setupUi(this);

    QLabel label_4;
    QPixmap pixmap(":/Proton&Fier_scala_logaritmica.png");
    int w = ui->label_4->width();
    int h = ui->label_4->height();
    ui->label_4->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_4->setMask(pixmap.mask());

    QLabel label_5;
    QPixmap pixmap1(":/Profile_electrons_(proton-E19).png");
    int w1 = ui->label_5->width();
    int h1 = ui->label_5->height();
    ui->label_5->setPixmap(pixmap1.scaled(w1,h1,Qt::KeepAspectRatio));
    ui->label_5->setMask(pixmap1.mask());

    QLabel label_6;
    QPixmap pixmap2(":/Profile_muons_(proton-E19).png");
    int w2 = ui->label_6->width();
    int h2 = ui->label_6->height();
    ui->label_6->setPixmap(pixmap2.scaled(w2,h2,Qt::KeepAspectRatio));
    ui->label_6->setMask(pixmap2.mask());

    QLabel label_7;
    QPixmap pixmap3(":/Profile_hadrons_(proton-E19).png");
    int w3 = ui->label_7->width();
    int h3 = ui->label_7->height();
    ui->label_7->setPixmap(pixmap3.scaled(w3,h3,Qt::KeepAspectRatio));
    ui->label_7->setMask(pixmap3.mask());

    QLabel label_8;
    QPixmap pixmap4(":/Muons_distribution(proton_Iron-E19-E20-E21).png");
    int w4 = ui->label_8->width();
    int h4 = ui->label_8->height();
    ui->label_8->setPixmap(pixmap4.scaled(w4,h4,Qt::KeepAspectRatio));
    ui->label_8->setMask(pixmap4.mask());

    QLabel label_9;
    QPixmap pixmap5(":/Electrons_distribution(proton_Iron-E19-E20-E21).png");
    int w5 = ui->label_9->width();
    int h5 = ui->label_9->height();
    ui->label_9->setPixmap(pixmap5.scaled(w5,h5,Qt::KeepAspectRatio));
    ui->label_9->setMask(pixmap5.mask());

    QLabel label_10;
    QPixmap pixmap6(":/Hadrons_distribution(proton_Iron-E19-E20-E21).png");
    int w6 = ui->label_10->width();
    int h6 = ui->label_10->height();
    ui->label_10->setPixmap(pixmap6.scaled(w6,h6,Qt::KeepAspectRatio));
    ui->label_10->setMask(pixmap6.mask());

    QLabel label_11;
    QPixmap pixmap7(":/Profile_electrons_(proton-E19-zenith-dependency).png");
    int w7 = ui->label_11->width();
    int h7 = ui->label_11->height();
    ui->label_11->setPixmap(pixmap7.scaled(w7,h7,Qt::KeepAspectRatio));
    ui->label_11->setMask(pixmap7.mask());

    QLabel label_12;
    QPixmap pixmap8(":/Profile_electrons_(iron-E19-zenith-dependency).png");
    int w8 = ui->label_12->width();
    int h8 = ui->label_12->height();
    ui->label_12->setPixmap(pixmap8.scaled(w8,h8,Qt::KeepAspectRatio));
    ui->label_12->setMask(pixmap8.mask());

    QLabel label_13;
    QPixmap pixmap9(":/Profile_Hadrons_(proton-E19-zenith-dependency).png");
    int w9 = ui->label_13->width();
    int h9 = ui->label_13->height();
    ui->label_13->setPixmap(pixmap9.scaled(w9,h9,Qt::KeepAspectRatio));
    ui->label_13->setMask(pixmap9.mask());

    QLabel label_14;
    QPixmap pixmap10(":/Profile_hadrons_(iron-E19-zenith-dependency).png");
    int w10 = ui->label_14->width();
    int h10 = ui->label_14->height();
    ui->label_14->setPixmap(pixmap10.scaled(w10,h10,Qt::KeepAspectRatio));
    ui->label_14->setMask(pixmap10.mask());

    QLabel label_15;
    QPixmap pixmap11(":/Profile_Muons_(proton-E19-zenith-dependency).png");
    int w11 = ui->label_15->width();
    int h11 = ui->label_15->height();
    ui->label_15->setPixmap(pixmap11.scaled(w11,h11,Qt::KeepAspectRatio));
    ui->label_15->setMask(pixmap11.mask());

    QLabel label_16;
    QPixmap pixmap12(":/Profile_muons_(iron-E19-zenith-dependency).png");
    int w12 = ui->label_16->width();
    int h12 = ui->label_16->height();
    ui->label_16->setPixmap(pixmap12.scaled(w12,h12,Qt::KeepAspectRatio));
    ui->label_16->setMask(pixmap12.mask());

    QLabel label_17;
    QPixmap pixmap13(":/comp_fier_proton_ne_nmu-1.png");
    int w13 = ui->label_17->width();
    int h13 = ui->label_17->height();
    ui->label_17->setPixmap(pixmap13.scaled(w13,h13,Qt::KeepAspectRatio));
    ui->label_17->setMask(pixmap13.mask());
}



Dialogr13::~Dialogr13()
{
    delete ui;

}
