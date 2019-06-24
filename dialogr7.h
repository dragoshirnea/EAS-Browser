#ifndef DIALOGR7_H
#define DIALOGR7_H

#include <QDialog>

namespace Ui {
class Dialogr7;
}

class Dialogr7 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr7(QWidget *parent = 0);
    ~Dialogr7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogr7 *ui;
};

#endif // DIALOGR7_H
