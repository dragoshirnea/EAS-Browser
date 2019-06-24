#ifndef DIALOGR12_H
#define DIALOGR12_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialogr12;
}

class Dialogr12 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr12(QWidget *parent = 0);
    ~Dialogr12();

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

private:
    Ui::Dialogr12 *ui;
    QGraphicsView view;
    QGraphicsView view_2;
};

#endif // DIALOGR12_H
