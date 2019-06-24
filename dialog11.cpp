#include "dialog11.h"
#include "ui_dialog11.h"
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

Dialog11::Dialog11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog11)
{
    ui->setupUi(this);
}

Dialog11::~Dialog11()
{
    delete ui;
}

void Dialog11::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_2->setChecked(false);}
}

void Dialog11::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_3->setChecked(false);}
}

void Dialog11::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox->setChecked(false);}
}

void Dialog11::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {ui->checkBox_4->setChecked(false);}
}

void Dialog11::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z10.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z10.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z10.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z10.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }
}

void Dialog11::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z20.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z20.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z20.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z20.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}
}

void Dialog11::on_pushButton_3_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z30.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z30.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z30.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z30.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}

}


void Dialog11::on_pushButton_4_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z40.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z40.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z40.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z40.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}
}



void Dialog11::on_pushButton_5_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z50.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z50.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z50.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z50.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}
}

void Dialog11::on_pushButton_6_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z60.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z60.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z60.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z60.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}
}

void Dialog11::on_pushButton_7_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/pol_prot_z70.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_2->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/pol_iron_z70.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_3->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene = new QGraphicsScene(&view);
        view.setScene(scene);
        QLabel *gif_anim = new QLabel();
        QMovie *movie = new QMovie(":/ampt_prot_z70.gif");
        gif_anim->setMovie(movie);
        movie->start();
        QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->ensureVisible ( scene->sceneRect() );
        ui->graphicsView->fitInView( scene->sceneRect(), Qt::KeepAspectRatio);
    }

    if(ui->checkBox_4->isChecked())
    {
        QSound::play(":/click4.wav");
        QGraphicsScene *scene_2 = new QGraphicsScene(&view_2);
        view_2.setScene(scene_2);
        QLabel *gif_anim_2 = new QLabel();
        QMovie *movie_2 = new QMovie(":/ampt_iron_z70.gif");
        gif_anim_2->setMovie(movie_2);
        movie_2->start();
        QGraphicsProxyWidget *proxy_2 = scene_2->addWidget(gif_anim_2);
        ui->graphicsView_2->setScene(scene_2);
        ui->graphicsView_2->ensureVisible ( scene_2->sceneRect() );
        ui->graphicsView_2->fitInView( scene_2->sceneRect(), Qt::KeepAspectRatio);
}
}
