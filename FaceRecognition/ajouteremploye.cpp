#include "ajouteremploye.h"
#include "ui_ajouteremploye.h"

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
    QString nom,prenom;
    qint32 identifiant;

    username = ui->lineEditUser->text();
    password = ui->lineEditPassword->text();
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
    connOpen();
    QSqlQuery query;
    query.prepare("select * from administration where username ='"+username+"'and password='"+password+"'");

    if(query.exec())
    {
        int count = 0 ;
        while(query.next())
        {
            count++;
        }

        if(count == 1)
        {
            ui->labelStatut->setText("Username and password is correct");
            connClose();
            this->hide();
            admin = new Administration(this);
            admin->show();
        }

        else if(count > 1)
        {
            ui->labelStatut->setText("Duplicate username and password");
        }
        else if (count <1)
        {
            ui->labelStatut->setText("Incorrect username or password");
        }
    }
}
