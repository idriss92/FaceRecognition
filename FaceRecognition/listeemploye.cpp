#include "listeemploye.h"
#include "ui_listeemploye.h"
#include "logindialog.h"
#include<QCalendarWidget>
ListeEmploye::ListeEmploye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListeEmploye)
{
    ui->setupUi(this);
}

ListeEmploye::~ListeEmploye()
{
    delete ui;
}

void ListeEmploye::on_pushButton_clicked()
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select nom, prenom from employe");

    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel();
    modal->setQuery(*qry);


    ui->tableView->setModel(modal);

    conn.close();
}
