#ifndef DIALOGR_H
#define DIALOGR_H

#include <QDialog>

namespace Ui {
class Dialogr;
}

class Dialogr : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr(QWidget *parent = 0);
    ~Dialogr();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();


private:
    Ui::Dialogr *ui;
};

#endif // DIALOGR_H
