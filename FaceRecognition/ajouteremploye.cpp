#include "ajouteremploye.h"
#include "ui_ajouteremploye.h"
#include <QMessageBox>
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
    identifiant = ui->lineEditIdentif->text();
    nom = ui->lineEditNom->text();
    prenom = ui ->lineEditPrenom->text();


    //password = ui->lineEditPassword->text();
    /*if(mydb.open())
    {
        admin = new Administration(this);
        admin->show();
    }

    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return ;
    }
*/
    //ouvrons la connexion
    conn.connOpen();
    QSqlQuery query;
    query.prepare("insert into Employe (Id, Nom, Prenom) values ('"+identifiant+"','"+nom+"','"+prenom+"')");

    if(query.exec())
    {
        QMessageBox::critical(this,tr("Save"),tr("Saved"));
        conn.close();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),query.lastError().text());
    }
}