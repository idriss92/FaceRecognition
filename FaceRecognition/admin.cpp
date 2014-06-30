#include "admin.h"
#include "ui_admin.h"
#include "logindialog.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

//Rechercher employé
void Admin::on_pushButtonRecherche_clicked()
{
    QString motRecherche;

    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from employe where nom = '"+motRecherche+"'");

    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);
    ui->tableViewEmploye->setModel(modal);
    conn.close();

}

//Consulter employé selectionner
void Admin::on_pushButtonConsulter_clicked()
{

}

//modifier employé sélectionner
void Admin::on_pushButtonModifier_clicked()
{

}

//supprimer employé sélectionner
void Admin::on_pushButtonSupprimer_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    //ui->tableViewEmploye->selectColumn();

}

//consulter liste absence
void Admin::on_pushButtonConsulter_2_clicked()
{

}

void Admin::on_pushButtonChargerEmp_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select nom, prenom, sexe, Grade from employe");

    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);

    ui->tableViewEmploye->setModel(modal);
    conn.close();
}
