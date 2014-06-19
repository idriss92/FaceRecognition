#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "capture.h"
#include "rec.h"
#include <QMainWindow>

namespace Ui {
class Employe;
}

class Employe : public QMainWindow
{
    Q_OBJECT

public:
    explicit Employe(QWidget *parent = 0);
    ~Employe();

private slots:
    void on_pushButtonProcess_clicked();

    void on_pushButton_clicked();

    void on_compare_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Employe *ui;

};

#endif // EMPLOYE_H
