#ifndef DIALOGR6_H
#define DIALOGR6_H

#include <QDialog>

namespace Ui {
class Dialogr6;
}

class Dialogr6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr6(QWidget *parent = 0);
    ~Dialogr6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogr6 *ui;
};

#endif // DIALOGR6_H
