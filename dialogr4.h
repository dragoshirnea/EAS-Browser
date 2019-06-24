#ifndef DIALOGR4_H
#define DIALOGR4_H

#include <QDialog>

namespace Ui {
class Dialogr4;
}

class Dialogr4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr4(QWidget *parent = 0);
    ~Dialogr4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogr4 *ui;
};

#endif // DIALOGR4_H
