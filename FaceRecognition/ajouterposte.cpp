#include "ajouterposte.h"
#include "ui_ajouterposte.h"
#include "logindialog.h"
#include <QMessageBox>
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
    poste = ui->lineEditPoste->text();
    if (( poste.size() > 0)){
        conn.connOpen();
        QSqlQuery query;
        query.prepare("insert into poste (poste) values ('"+poste+"')");




        if(query.exec())
        {
            Capture * capture = new Capture(nom.toStdString());
            capture->init();
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

void AjouterPoste::on_pushButtonAnnuler_clicked()
{
    this->close();
}
