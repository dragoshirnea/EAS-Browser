#include "dialogr12r.h"
#include "ui_dialogr12r.h"
#include <QSound>
#include <QGraphicsView>
#include <QImage>
#include <QBitmap>
#include <QGraphicsView>
#include <QLabel>
#include <QTextStream>
#include <QVideoWidget>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QWidget>
#include <QLabel>
#include <QGraphicsScene>
#include <QUrl>

Dialogr12r::Dialogr12r(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr12r)
{
    ui->setupUi(this);
}

Dialogr12r::~Dialogr12r()
{
    delete ui;
}

void Dialogr12r::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox->setChecked(false);
     ui->checkBox_5->setChecked(false);}

}

void Dialogr12r::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_2->setChecked(false);
     ui->checkBox_6->setChecked(false);}
}

void Dialogr12r::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_3->setChecked(false);
     ui->checkBox_5->setChecked(false);}
}

void Dialogr12r::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_4->setChecked(false);
     ui->checkBox_6->setChecked(false);}
}


void Dialogr12r::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox->setChecked(false);
     ui->checkBox_3->setChecked(false);}
}

void Dialogr12r::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_4->setChecked(false);
     ui->checkBox_2->setChecked(false);}
}

void Dialogr12r::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen10_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen10_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith10_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith10_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_10p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_10fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen20_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen20_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith20_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith20_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_20p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_20fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_3_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen30_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen30_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith30_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith30_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_30p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_30fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_4_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen40_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen40_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith40_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith40_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_40p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_40fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_5_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen50_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen50_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith50_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith50_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_50p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_50fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_6_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen60_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen60_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith60_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith60_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_60p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_60fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialogr12r::on_pushButton_7_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/GEOM_ASK_EW_VS_NS_Zen70_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/GEOM_ASK_EW_VS_NS_Zen70_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/LOG_COREAS_VS_LOG_VXB_Zenith70_p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/LOG_COREAS_VS_LOG_VXB_Zenith70_i.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_5->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene =  new QGraphicsScene;
        QPixmap pixmap(":/mean_70p.png");
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_6->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 =  new QGraphicsScene;
        QPixmap pixmap_2(":/mean_70fe.png");
        scene_2->addPixmap(pixmap_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

