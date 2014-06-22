#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QMainWindow>
#include <listeemploye.h>
#include <ajouterdepartement.h>
#include <ajouteremploye.h>

namespace Ui {
class Administration;
}

class Administration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Administration(QWidget *parent = 0);
    ~Administration();

private slots:
    void on_pushButtonNouvelDepart_clicked();

    void on_pushButtonNouvelEmp_clicked();

    void on_pushButtonListeEmp_clicked();



private:
    Ui::Administration *ui;
    ListeEmploye * list;
    ajouterdepartement * nouveauDepartement;
    AjouterEmploye * nouvelEmploye ;

};

#endif // ADMINISTRATION_H
