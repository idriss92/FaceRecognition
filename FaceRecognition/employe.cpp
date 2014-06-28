#include "employe.h"
#include "ui_employe.h"

#include <iostream>
#include <QtGui>

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

void Employe::on_pushButtonProcess_clicked()
{
    const char* nom = "alphonse";
    Capture * capture = new Capture(nom);
    capture->init();
}


void Employe::on_add_clicked()
{
    f_ajouterEmploye = new AjouterEmploye(this);
    f_ajouterEmploye->show();
}

void Employe::on_pushButton_clicked()
{
    const char* nom = "alphonse";
    Capture * capture = new Capture(nom);
    capture->init();
}

void Employe::on_Authentifier_clicked()
{
    cout<<"match"<<endl;
}
