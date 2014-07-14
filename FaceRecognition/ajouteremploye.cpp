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
    //String v = "45";
    if (( prenom.size() > 0) && ( nom.size() > 0)){
        conn.connOpen();
        QSqlQuery query;

        query.prepare("select count(*) as nb from employe");

        query.exec();
        int id ;
        while( query.next()){
            id= query.value(0).toInt();
        }

        cout<<id<<endl;

        query.prepare("insert into employe (id_employe,id_service, nom, prenom) values ( ?,?,?,?)");
        query.addBindValue(id+1);
        query.addBindValue("0");
        query.addBindValue(nom);
        query.addBindValue(prenom);


        if(query.exec())
        {
            //Capture * capture = new Capture(nom.toStdString());
            //capture->init();
            //QMessageBox::critical(this,tr("Save"),tr("Saved"));
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
    QSqlQueryModel * modal2 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);
    QSqlQuery * qry2 = new QSqlQuery(conn.mydb);

    qry->prepare("select id_service from service");
    qry2->prepare("select poste from poste");
    qry2->exec();
    qry->exec();

    modal->setQuery(*qry);
    modal2->setQuery(*qry2);
    ui->comboBoxDepartement->setModel(modal);
    ui->comboBoxPoste->setModel(modal2);
    conn.connClose();

}
