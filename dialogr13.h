#ifndef DIALOGR13_H
#define DIALOGR13_H

#include <QDialog>
#include <QGraphicsView>

namespace Ui {
class Dialogr13;
}

class Dialogr13 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr13(QWidget *parent = 0);
    ~Dialogr13();

private:
    Ui::Dialogr13 *ui;
    QGraphicsView view;

};

#endif // DIALOGR13_H
