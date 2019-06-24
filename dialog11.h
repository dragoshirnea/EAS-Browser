#ifndef DIALOG11_H
#define DIALOG11_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialog11;
}

class Dialog11 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog11(QWidget *parent = 0);
    ~Dialog11();

private slots:
    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Dialog11 *ui;
    QGraphicsView view;
    QGraphicsView view_2;
};

#endif // DIALOG11_H
