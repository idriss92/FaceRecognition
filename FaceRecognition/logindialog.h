#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QtSql>
#include <QSqlDatabase>
//#include <QtSql/QtSql>
#include <QtDebug>
#include <administration.h>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("../bdd/facerecognition.db");

        if(!mydb.open()){
            qDebug()<<("Failed to open de database");
            return false;
        }
        else{
            qDebug()<<("Connected...");
            return true;
        }
    }


public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_pushButtonConnexion_clicked();
    void on_pushButton_clicked();

private:
    Ui::LoginDialog *ui;
    Administration * admin;
};

#endif //LOGINDIALOG_H
