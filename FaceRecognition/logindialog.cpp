#include "logindialog.h"
#include "ui_logindialog.h"
#include <QtSql/QtSql>
#include <QDebug>
#include <QFileInfo>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    if(!connOpen())
        ui->labelStatut->setText("Failed to open de database");
    else
        ui->labelStatut->setText("Connected...");

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButtonConnexion_clicked()
{
    QString username,password;
    username = ui->lineEditUser->text();
    password = ui->lineEditPassword->text();
    /*if(mydb.open())
    {
        admin = new Administration(this);
        admin->show();
    }
*/
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return ;
    }

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

