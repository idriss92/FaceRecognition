#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "capture.h"
#include "rec.h"
#include "personne.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    rec * mrec = new rec();
    mrec->getPersonnes();
    mrec->prepareCheck();
    string file = "/home/joaany/Pictures/3.jpg" ;
    int fnum = mrec->Match(file);
    cout<<fnum<<endl;
    w.show();


    return a.exec();









}

