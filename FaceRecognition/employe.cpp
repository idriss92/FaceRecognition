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

using namespace std;
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
    capture->setPath("/home/joaany/search/");
    capture->init();

    QMessageBox::information(this,tr("Informations"),"Reconnaissance");

    rec * mrec = new rec();
    mrec->getPersonnes();
    mrec->prepareCheck();
    string file = "/home/joaany/search/tmp.jpg" ;
    int fnum = mrec->Match(file);

    Mat img = mrec->getListImg(fnum);
    cout<<fnum<<endl;

}
