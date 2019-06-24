#include "dialogr7.h"
#include "ui_dialogr7.h"
#include <QSound>

Dialogr7::Dialogr7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr7)
{
    ui->setupUi(this);
}

Dialogr7::~Dialogr7()
{
    delete ui;
}

void Dialogr7::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
