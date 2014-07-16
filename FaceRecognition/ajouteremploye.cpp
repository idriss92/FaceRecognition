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
    QString nom,prenom, departement,poste,sexe;

    departement = ui->comboBoxDepartement->currentText();
    poste = ui->comboBoxPoste->currentText();
    sexe = ui->comboBoxSexe->currentText();
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

        query.prepare("insert into employe (id_service, nom, prenom,sexe, grade) values ( ?,?,?,?,?)");
        query.addBindValue(departement);
        query.addBindValue(nom);
        query.addBindValue(prenom);
        query.addBindValue(sexe);
        query.addBindValue(poste);


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
    this->close();
}

void AjouterEmploye::on_pushButtonCharger_clicked()
{
    LoginDialog conn;
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQueryModel * modal2 = new QSqlQueryModel();
    QSqlQueryModel * modal3 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);
    QSqlQuery * qry2 = new QSqlQuery(conn.mydb);
    QSqlQuery * qry3 = new QSqlQuery(conn.mydb);


    qry->prepare("select id_service from service");
    qry2->prepare("select poste from poste");
    qry3->prepare("select sexe from sexe");
    qry3->exec();
    qry2->exec();
    qry->exec();

    modal->setQuery(*qry);
    modal2->setQuery(*qry2);
    modal3->setQuery(*qry3);
    ui->comboBoxSexe->setModel(modal3);
    ui->comboBoxDepartement->setModel(modal);
    ui->comboBoxPoste->setModel(modal2);
    conn.connClose();

}
