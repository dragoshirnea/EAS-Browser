#ifndef DIALOG13_H
#define DIALOG13_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialog13;
}

class Dialog13 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog13(QWidget *parent = 0);
    ~Dialog13();

private:
    Ui::Dialog13 *ui;
    QGraphicsView view;

};

#endif // DIALOG13_H
