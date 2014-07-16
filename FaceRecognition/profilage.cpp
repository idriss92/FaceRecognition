#include "profilage.h"
#include "ui_profilage.h"
#include "logindialog.h"

Profilage::Profilage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profilage)
{
    ui->setupUi(this);
}

Profilage::~Profilage()
{
    delete ui;
}

void Profilage:: receData(QStringList so)
{
    ui->textBrowserNom->setText(so[1]);
    ui->textBrowserMatricule->setText(so[0]);
    ui->textBrowserPrenom->setText(so[2]);
    ui->textBrowserPoste->setText(so[4]);
    ui->textBrowserSexe->setText(so[3]);
}

/*Profilage::Profilage(int matricul)
{
    LoginDialog conn;
    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    //qry->prepare("select * from employe where matricule = '" + matricul + "'");

    qry->exec();
    //QSqlQueryModel * modal = new QSqlQueryModel();
    //modal->setQuery(*qry);
    //ui->tableViewEmploye->setModel(modal);
    conn.close();

}
*/
