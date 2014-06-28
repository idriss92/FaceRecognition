#include "ajouterdepartement.h"
#include "ui_ajouterdepartement.h"
#include <logindialog.h>
#include <QMessageBox>
#include <iostream>
using namespace std;
ajouterdepartement::ajouterdepartement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterdepartement)
{
    ui->setupUi(this);
}

ajouterdepartement::~ajouterdepartement()
{
    delete ui;
}

void ajouterdepartement::on_pushButtonEnregistrer_clicked()
{

    QString nomDepartement, identifiant;
    nomDepartement = ui->lineEditNomDepartement->text();
    identifiant = ui->lineEditIdDepartment->text();


    cout<<nomDepartement.size()<<endl;
    cout<<identifiant.size()<<endl;
    if ((nomDepartement.size() != 0 ) || ( identifiant.size() != 0)){
        cout<<"---LoginDialog "<<endl;
        LoginDialog conn;
        //ouvrons la connexion
        conn.connOpen();
        QSqlQuery query;
        query.prepare("insert into Departement (Id, NomDepartement) values ('"+identifiant+"','"+nomDepartement+"')");

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

void ajouterdepartement::on_pushButtonAnnuler_clicked()
{
    this->hide();
}
