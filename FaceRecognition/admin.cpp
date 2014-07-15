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

//consulter liste absences
void Admin::on_pushButtonConsulter_2_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qryAbsence = new QSqlQuery(conn.mydb);
   // QSqlQuery * qryPresence = new QSqlQuery(conn.mydb);
    //QDate date = ui->calendarWidget->selectedDate();
    QString date = ui->calendarWidget->selectedDate().toString();
    //qryAbsence->("select nom,prenom,sexe,Grade from employe where date"+date+"");
    //qryAbsence->("select nom,prenom,sexe,Grade from employe where employe.id_employe in (select nom from presence where date = "+date+"");
    //qryAbsence->prepare("select * from employe intersect (select id_employe from presence where date_scan = "+date+")");
    //qryAbsence->prepare("select * from presence");
    //qryAbsence->prepare("select * from employe ")
 //   qryPresence->prepare("select nom, prenom, sexe, grade from employe, presence where employe.id_employe = presence.id_employe");
    //qryAbsence->prepare("select nom, prenom, sexe, grade from employe MINUS(select nom, prenom,sexe,grade from employe, presence where employe.id_employe = presence.id_employe)");
    qryAbsence->prepare("select nom, prenom, sexe, grade from employe where nom not in (select nom, prenom, sexe, grade from employe, presence where employe.id_employe = presence.id_employe)");
    qryAbsence->exec();
  //  qryPresence->exec();
    QSqlQueryModel * modalAb = new QSqlQueryModel();
  //  QSqlQueryModel * modalPres = new QSqlQueryModel();
  //  modalPres->setQuery(*qryPresence);
    modalAb->setQuery(*qryAbsence);
    ui->tableViewListeAbsence->setModel(modalAb);
//    ui->tableViewListePresence->setModel(modalPres);
    conn.connClose();
}

void Admin::on_pushButtonChargerEmp_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select nom, prenom, sexe, grade from employe");

    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);

    ui->tableViewEmploye->setModel(modal);
    conn.connClose();
}

//liste des presences
void Admin::on_pushButtonConsulterPresence_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qryPresence = new QSqlQuery(conn.mydb);
    //QDate date = ui->calendarWidget->selectedDate();
    //
    QString date = ui->calendarWidget->selectedDate().toString();
    qryPresence->prepare("select nom, prenom, sexe, grade from employe, presence  where date_scan = "+date+"");
    qryPresence->exec();
    QSqlQueryModel * modalPres = new QSqlQueryModel();
    modalPres->setQuery(*qryPresence);
    ui->tableViewListePresence->setModel(modalPres);
    conn.connClose();
}
