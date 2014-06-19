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


void Employe::on_pushButton_clicked()
{
   cout<<"on_pushButton_clicked"<<endl;

   const char* nom = "alfred";
   Capture * capture = new Capture(nom);
   capture->init();


   /*  const char* nom = "alfred";
    Capture * capture = new Capture(nom);
    capture->init();
      Mat img; Mat templ; Mat result;
      img = imread("/home/joaany/Pictures/alphonse.jpg", 1 );
      templ = imread("/home/joaany/Pictures/alfred.jpg", 1 );
      rec *r = new rec(img,templ,result);

      r->Match();*/

}


void Employe::on_compare_clicked()
{
    cout<<"ok";
}
