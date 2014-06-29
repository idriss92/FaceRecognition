#include "ajouteremploye.h"
#include "ui_ajouteremploye.h"
#include <QMessageBox>
#include <QApplication>
#include "capture.h"

//#include <QtMultimedia/
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
    identifiant = ui->comboBoxDepartement->currentText();
    nom = ui->lineEditNom->text();
    prenom = ui ->lineEditPrenom->text();

    if (( prenom.size() > 0) && ( nom.size() > 0)){
        conn.connOpen();
        QSqlQuery query;
        query.prepare("insert into employe (id_employe,id_service, nom, prenom) values ('"+identifiant+"','"+"0"+"','"+nom+"','"+prenom+"')");




        if(query.exec())
        {
            //Capture * capture = new Capture(nom.toStdString());
            //capture->init();
            QMessageBox::critical(this,tr("Save"),tr("Saved"));
            conn.close();
            this->hide();
            //admin->show();

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
    this->hide();
}

void AjouterEmploye::on_pushButtonCharger_clicked()
{
    LoginDialog conn;
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);
    //libelle_service
    qry->prepare("select id_service from service");

    qry->exec();
    modal->setQuery(*qry);
    ui->comboBoxDepartement->setModel(modal);
    conn.connClose();
    qDebug()<<(modal->rowCount());
}
