#ifndef DIALOGR10_H
#define DIALOGR10_H

#include <QDialog>
#include <QString>
#include <QObject>

namespace Ui {
class Dialogr10;
}

class Dialogr10 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogr10(QWidget *parent = 0);
    ~Dialogr10();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialogr10 *ui;
};

#endif // DIALOGR10_H
