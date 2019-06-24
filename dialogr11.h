#ifndef DIALOGR11_H
#define DIALOGR11_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialogr11;
}

class Dialogr11 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr11(QWidget *parent = 0);
    ~Dialogr11();

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
    Ui::Dialogr11 *ui;
    QGraphicsView view;
    QGraphicsView view_2;
};

#endif // DIALOGR11_H
