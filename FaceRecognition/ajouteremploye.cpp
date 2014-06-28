#include "ajouteremploye.h"
#include "ui_ajouteremploye.h"
#include <QMessageBox>
#include <QApplication>
#include "capture.h"

#include <iostream>
using namespace std;

#include <logindialog.h>
AjouterEmploye::AjouterEmploye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AjouterEmploye)
{
    ui->setupUi(this);
}

AjouterEmploye::~AjouterEmploye()
{
    delete ui;
}

void AjouterEmploye::on_pushButtonEnregistrer_clicked()
{
    LoginDialog conn;
    QString nom,prenom, identifiant;

    nom = ui->lineEditNom->text();
    prenom = ui ->lineEditPrenom->text();

    if (( prenom.size() > 0) && ( nom.size() > 0)){

        Capture * capture = new Capture(nom.toStdString());
        capture->init();


        conn.connOpen();
        QSqlQuery query;
        query.prepare("insert into Employe (Id, Nom, Prenom) values ('"+identifiant+"','"+nom+"','"+prenom+"')");

        if(query.exec())
        {
            QMessageBox::critical(this,tr("Save"),tr("Saved"));
            conn.close();
            this->hide();
        }
        else
        {
            QMessageBox::critical(this,tr("Error"),query.lastError().text());
        }
    }else{
       QMessageBox::information(this,tr("Informations"),"Informations manquantes");
    }
}

void AjouterEmploye::on_pushButtonAnnuler_clicked()
{

}

void AjouterEmploye::on_pushButton_clicked()
{

}
