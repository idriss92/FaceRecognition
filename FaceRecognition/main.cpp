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
    w.show();
    return a.exec();
}
