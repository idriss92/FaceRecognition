#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QMainWindow>
#include <listeemploye.h>
#include <ajouterdepartement.h>
#include <ajouteremploye.h>
#include <ajouterposte.h>

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




    void on_pushButtonListeEmploye_clicked();

    void on_pushButtonAjouterPoste_clicked();

private:
    Ui::Administration *ui;
    ListeEmploye * list;
    ajouterdepartement * nouveauDepartement;
    AjouterPoste * nouveauPoste;
    //AjouterEmploye * nouvelEmploye;
    //AjouterEmploye * nouvelEmploye ;

};

#endif // ADMINISTRATION_H
