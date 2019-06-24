#ifndef DIALOG12_H
#define DIALOG12_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialog12;
}

class Dialog12 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog12(QWidget *parent = 0);
    ~Dialog12();

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
    Ui::Dialog12 *ui;
    QGraphicsView view;
    QGraphicsView view_2;
};

#endif // DIALOG12_H
