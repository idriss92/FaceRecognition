#include "ajouterposte.h"
#include "ui_ajouterposte.h"
#include "logindialog.h"
AjouterPoste::AjouterPoste(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjouterPoste)
{
    ui->setupUi(this);
}

AjouterPoste::~AjouterPoste()
{
    delete ui;
}

void AjouterPoste::on_pushButtonEnregistrer_clicked()
{
    LoginDialog conn;
    QString poste;
    poste = ui->
    poste = ui->li

    if (( prenom.size() > 0) && ( nom.size() > 0)){
        conn.connOpen();
        QSqlQuery query;
        query.prepare("insert into employe (id_employe,id_service, nom, prenom) values ('"+identifiant+"','"+"0"+"','"+nom+"','"+prenom+"')");




        if(query.exec())
        {
            //Capture * capture = new Capture(nom.toStdString());
            //capture->init();
            QMessageBox::critical(this,tr("Save"),tr("Saved"));
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
