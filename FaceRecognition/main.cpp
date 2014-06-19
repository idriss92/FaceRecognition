#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "capture.h"
using namespace std;

int main(int argc, char *argv[])
{

  /*  Mat img; Mat templ; Mat result;
    img = imread( "/home/joaany/Pictures/alfred.jpg", 1 );
    templ = imread( "/home/joaany/Pictures/alphonse.jpg", 1 );

    rec *r = new rec(img,templ,result);

    try {
        r->Match();
    } catch (...) {
        cout<<"failed"<<endl;
    }
*/
  QApplication a(argc, argv);
       MainWindow w;
       w.show();

       return a.exec();

   /*  Mat img; Mat templ; Mat result;
    img = imread("/home/joaany/Pictures/alphonse.jpg", 1 );
    templ = imread("/home/joaany/Pictures/alfred.jpg", 1 );

    rec *r = new rec(img,templ,result);

    try {
        r->Match();
         cout<<"ok"<<endl;
    } catch (...) {
        cout<<"failed"<<endl;
    }

     return 0;*/

   /* Capture * cap = new Capture("jo");
    cap->init();
*/
}

