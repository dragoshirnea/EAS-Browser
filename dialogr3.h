#ifndef DIALOGR3_H
#define DIALOGR3_H

#include <QDialog>
#include <QGraphicsView>


namespace Ui {
class Dialogr3;
}

class Dialogr3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr3(QWidget *parent = 0);
    ~Dialogr3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Dialogr3 *ui;
    QGraphicsView view;

};

#endif // DIALOGR3_H
