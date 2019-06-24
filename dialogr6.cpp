#include "dialogr6.h"
#include "ui_dialogr6.h"
#include <QSound>

Dialogr6::Dialogr6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr6)
{
    ui->setupUi(this);
}

Dialogr6::~Dialogr6()
{
    delete ui;
}

void Dialogr6::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
