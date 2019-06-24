#ifndef DIALOGR12R_H
#define DIALOGR12R_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialogr12r;
}

class Dialogr12r : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr12r(QWidget *parent = 0);
    ~Dialogr12r();

private slots:
    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

private:
    Ui::Dialogr12r *ui;
    QGraphicsView view;
    QGraphicsView view_2;
};

#endif // DIALOGR12R_H
