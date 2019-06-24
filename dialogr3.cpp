#include "dialogr3.h"
#include "ui_dialogr3.h"
#include <QVideoWidget>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QWidget>
#include <QLabel>
#include <QGraphicsScene>
#include <QUrl>


Dialogr3::Dialogr3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr3)
{
    ui->setupUi(this);
}

Dialogr3::~Dialogr3()
{
    delete ui;
}

void Dialogr3::on_pushButton_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene = new QGraphicsScene(&view);
    view.setScene(scene);
    QLabel *gif_anim = new QLabel();
    QMovie *movie = new QMovie(":/test.gif");
    gif_anim->setMovie(movie);
    movie->start();
    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
    ui->graphicsView->setScene(scene);
    ui->label->setText("O simulare a dezvoltării unei jerbe de particule [P.2]");
}

void Dialogr3::on_pushButton_2_clicked()
{
    QSound::play(":/click4.wav");
    QGraphicsScene *scene1 = new QGraphicsScene(&view);
    view.setScene(scene1);
    QLabel *gif_anim1 = new QLabel();
    QMovie *movie1 = new QMovie(":/url.gif");
    gif_anim1->setMovie(movie1);
    movie1->start();
    QGraphicsProxyWidget *proxy = scene1->addWidget(gif_anim1);
    ui->graphicsView->setScene(scene1);
    ui->label->setText("Un puls radio dat de o jerbă de particule [A.4]");
}

void Dialogr3::on_pushButton_3_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=6rcvWcRMuzs", QUrl::TolerantMode));
}

void Dialogr3::on_pushButton_4_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=91801Y1lsCg", QUrl::TolerantMode));
}

void Dialogr3::on_pushButton_5_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("http://videotheque.cnrs.fr/doc=4681?langue=EN", QUrl::TolerantMode));
}

void Dialogr3::on_pushButton_6_clicked()
{
    QSound::play(":/click4.wav");
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/watch?v=SftngoJKkfQ", QUrl::TolerantMode));
}

void Dialogr3::on_pushButton_7_clicked()
{
    QSound::play(":/click6.wav");
}
