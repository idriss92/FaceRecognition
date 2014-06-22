#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "capture.h"
#include "rec.h"
#include <QMainWindow>
#include "ajouteremploye.h"

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





    void on_add_clicked();

    void on_pushButton_clicked();

private:
    Ui::Employe *ui;
    AjouterEmploye * f_ajouterEmploye;
};

#endif // EMPLOYE_H
