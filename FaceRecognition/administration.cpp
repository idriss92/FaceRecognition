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
    nouvelEmploye = new AjouterEmploye();
    nouvelEmploye->show();

    /*

    ListeEmploye * l = new ListeEmploye();
    l->show();
    */
}




void Administration::on_pushButton_clicked()
{
    cout<<"ooooooook";
}
