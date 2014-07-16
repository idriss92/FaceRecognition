#include "admin.h"
#include "ui_admin.h"
#include "logindialog.h"
#include <QDir>
Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    filling = false;
    FillForm();
}

Admin::~Admin()
{
    delete ui;
}

//Rechercher employé
void Admin::on_pushButtonRecherche_clicked()
{
    QString motRecherche = ui->lineEditRecherche->text();

    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select id_employe,nom,prenom,sexe,grade from employe where id_employe LIKE '%"+motRecherche+"%' or  nom LIKE  '%"+motRecherche+"%'  or prenom LIKE  '%"+motRecherche+"%'  or grade LIKE  '%"+motRecherche+"%'");

    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);
    ui->tableViewEmploye->setModel(modal);

    conn.connClose();

}


//Consulter employé selectionner
void Admin::on_pushButtonConsulter_clicked()
{
    //qint8 nombre = ui->tableViewEmploye->
//    customProfil = new Profilage(this);
//    customProfil->setModal(true);
//    customProfil->show();

//    connect(this, SIGNAL(sendData(QStringList)),customProfil,SLOT(receData(QStringList)));

//    QStringList so;
//    //so.append(ui->tableViewEmploye->it);
//    so.append(ui->tableWidget->item(row,1)->text());
//    emit sendData(so);
    //ui->tableViewEmploye->sel
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
}

//consulter liste absences
void Admin::on_pushButtonConsulter_2_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qryAbsence = new QSqlQuery(conn.mydb);
    QString date = ui->calendarWidget->selectedDate().toString();
    qryAbsence->prepare("select nom, prenom, sexe, grade from employe left join presence on (employe.id_employe = presence.id_employe) where presence.id_employe is null");
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

    qry->prepare("select nom, prenom, sexe, grade from employe");

    qry->exec();


    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);

    ui->tableViewEmploye->setModel(modal);
    conn.connClose();
}

void Admin::FillForm()
{
    if(filling)
        return;
    filling = true;

    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select nom, prenom, sexe, grade from employe");

    qry->exec();


    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);

    ui->tableViewEmploye->setModel(modal);

    filling = false;
    ui->tableViewEmploye->setModel(modal);

}

//liste des presences
void Admin::on_pushButtonConsulterPresence_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qryPresence = new QSqlQuery(conn.mydb);
    QString date = ui->calendarWidget->selectedDate().toString();
    qryPresence->prepare("select employe.nom, employe.prenom, employe.sexe, employe.grade,presence.date_scan from employe, presence  where employe.id_employe = presence.id_employe ");
    qryPresence->exec();
    QSqlQueryModel * modalPres = new QSqlQueryModel();
    modalPres->setQuery(*qryPresence);
    ui->tableViewListePresence->setModel(modalPres);
    conn.connClose();
}

//void Admin::on_tableWidget_cellDoubleClicked(int row, int column)
//{
//    customProfil = new Profilage(this);
//    customProfil->setModal(true);
//    customProfil->show();

//    connect(this, SIGNAL(sendData(QStringList)),customProfil,SLOT(receData(QStringList)));

//    QStringList so;
    //so.append(ui->tableViewEmploye->it);
//    so.append(ui->tableWidget->item(row,1)->text());
//    emit sendData(so);
//}

void Admin::on_tableViewEmploye_activated(const QModelIndex &index)
{
    customProfil = new Profilage(this);
    customProfil->setModal(true);
    customProfil->show();

    connect(this, SIGNAL(sendData(QStringList)),customProfil,SLOT(receData(QStringList)));

    QStringList so;
    //so.append(ui->tableViewEmploye->);
    //QStringList so;
    //    //so.append(ui->tableViewEmploye->it);
    //    so.append(ui->tableWidget->item(row,1)->text());
    //   emit sendData(so);
    QString motRecherche = ui->tableViewEmploye->model()->data(index).toString();
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select id_employe,nom,prenom,sexe,grade from employe where id_employe='"+motRecherche+"' or  nom = '"+motRecherche+"' or prenom = '"+motRecherche+"' or grade = '"+motRecherche+"'");
}
