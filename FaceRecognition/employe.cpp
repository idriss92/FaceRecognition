#include "employe.h"
#include "ui_employe.h"

#include <iostream>
#include <QtGui>
#include <QMessageBox>

#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "capture.h"
#include "logindialog.h"

#include <string>
using namespace std;

Employe::Employe(QWidget *parent) : QMainWindow(parent), ui(new Ui::Employe)
{
    ui->setupUi(this);
}

Employe::~Employe()
{
    delete ui;
}

void Employe::on_Authentifier_clicked()
{
    QMessageBox::information(this,tr("Informations"),"Demarer la capture. Placer vous face à la caméra");
    Capture * capture = new Capture("tmp");

    LoginDialog conn;

    QSqlQuery query;


    try{

        Capture * capture = new Capture("tmp");
        capture->setPath("/home/joaany/search/");
        capture->init();

        QMessageBox::information(this,tr("Informations"),"Reconnaissance");

        rec * mrec = new rec();
        mrec->getPersonnes();
        mrec->prepareCheck();
        string file = "/home/joaany/search/tmp.jpg" ;

        int fnum = mrec->Match(file);
        String v =   mrec->getChemins(fnum);

        cout<<"result " + v<<endl;

        std::string str2 = v.substr ( 0, v.size() - 4);
        QString str = QString::fromUtf8(str2.c_str());
        query.clear();
        cout<<"result 3 " +str.toStdString() <<endl;
        const QString cst = "select id_employe from employe where nom = '"+str+"'";
        cout<<"result 4 " +cst.toStdString() <<endl;
        query.prepare(cst);

        query.exec();


        int id ;
        while (query.next()) {

         id = query.value(0).toInt();
               qDebug()<<query.size();

         }
        cout<<id;
        QDate date = QDate();

          query.prepare("insert into presence (id_employe,date_scan) values (?,?)");
          query.addBindValue(id);
          query.addBindValue(date.currentDate());

          query.exec();

//      QMessageBox::information(this,tr("Informations"), val);

    }catch(Exception e){

        QMessageBox::information(this,tr("Informations"),"Aucun visage détecté");
    }
    capture->stop();
    this->on_Authentifier_clicked();
}
