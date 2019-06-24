#ifndef DIALOGR2_H
#define DIALOGR2_H

#include <QDialog>

namespace Ui {
class Dialogr2;
}

class Dialogr2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr2(QWidget *parent = 0);
    ~Dialogr2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();


private:
    Ui::Dialogr2 *ui;
};

#endif // DIALOGR2_H
