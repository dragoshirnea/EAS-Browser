#ifndef DIALOGR1_H
#define DIALOGR1_H
#include <QGraphicsScene>
#include <QFileDialog>
#include <QGraphicsView>

#include <QDialog>

namespace Ui {
class Dialogr1;
}

class Dialogr1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr1(QWidget *parent = 0);
    ~Dialogr1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Dialogr1 *ui;
    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;
};

#endif // DIALOGR1_H
