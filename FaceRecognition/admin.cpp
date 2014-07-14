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
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qryAbsence = new QSqlQuery(conn.mydb);
    QString date = ui->calendarWidget->selectedDate().toString();
    //qryAbsence->("select nom,prenom,sexe,Grade from employe where date"+date+"");
    //qryAbsence->("select nom,prenom,sexe,Grade from employe where employe.id_employe in (select nom from presence where date = "+date+"");
    qryAbsence->prepare("select id_employe, nom, prenom, sexe,Grade from employe intersect select id_employe from presence where date = "+date+"");
    qryAbsence->exec();
    QSqlQueryModel * modalAb = new QSqlQueryModel();
    modalAb->setQuery(*qryAbsence);
    ui->tableViewListeAbsence->setModel(modalAb);
    conn.connClose();
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
