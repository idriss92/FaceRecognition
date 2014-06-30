#include "administration.h"
#include "ui_administration.h"
#include "ajouterdepartement.h"
#include "listeemploye.h"
#include "ajouteremploye.h"
#include "listeemploye.h"
using namespace  std;
#include <iostream>

Administration::Administration(QWidget *parent) :QMainWindow(parent), ui(new Ui::Administration)
{
    ui->setupUi(this);

}

Administration::~Administration()
{
    delete ui;
}


//Administration::ouvertureFenetre()
//{
  //  ui->actionNouvelEmploye->connect();
//}


//creation nouveau département
void Administration::on_pushButtonNouvelDepart_clicked()
{
    nouveauDepartement = new ajouterdepartement(this);
    nouveauDepartement->show();
}


//creation nouvel employé
void Administration::on_pushButtonNouvelEmp_clicked()
{
    AjouterEmploye *nouvelEmploye = new AjouterEmploye();
    nouvelEmploye = new AjouterEmploye();
    nouvelEmploye->show();
}

//ouverture formulaire d'affichage des employés
void Administration::on_pushButtonListeEmploye_clicked()
{
    ListeEmploye * liste = new ListeEmploye();
    liste->show();
}

void Administration::on_pushButtonAjouterPoste_clicked()
{

}
