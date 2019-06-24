#include "dialogr4.h"
#include "ui_dialogr4.h"
#include <QSound>

Dialogr4::Dialogr4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogr4)
{
    ui->setupUi(this);
}

Dialogr4::~Dialogr4()
{
    delete ui;
}

void Dialogr4::on_pushButton_clicked()
{
    QSound::play(":/click6.wav");
}
