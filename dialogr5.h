#ifndef DIALOGR5_H
#define DIALOGR5_H

#include <QDialog>
#include <QGraphicsView>
namespace Ui {
class Dialogr5;
}

class Dialogr5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr5(QWidget *parent = 0);
    ~Dialogr5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogr5 *ui;
    QGraphicsView view;
};

#endif // DIALOGR5_H
