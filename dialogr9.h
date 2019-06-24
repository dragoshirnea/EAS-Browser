#ifndef DIALOGR9_H
#define DIALOGR9_H
#include <QGraphicsScene>
#include <QFileDialog>
#include <QGraphicsView>
#include <QDialog>


namespace Ui {
class Dialogr9;
}

class Dialogr9 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr9(QWidget *parent = 0);
    ~Dialogr9();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::Dialogr9 *ui;

protected:
    virtual void wheelEvent(QWheelEvent* event);
};

#endif // DIALOG9_H
