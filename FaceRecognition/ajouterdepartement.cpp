#include "ajouterdepartement.h"
#include "ui_ajouterdepartement.h"
#include <logindialog.h>
#include <qmessagebox.h>
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
    LoginDialog conn;
    QString nomDepartement, identifiant;
    nomDepartement = ui->lineEditNomDepartement->text();
    identifiant = ui->lineEditIdDepartment->text();

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
}

void ajouterdepartement::on_pushButtonAnnuler_clicked()
{
    this->hide();
}
