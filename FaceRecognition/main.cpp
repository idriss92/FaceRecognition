#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "capture.h"
#include "rec.h"
#include "personne.h"
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    LoginDialog conn;
    conn.open();
    QSqlQuery query;

    String v =   "benz.jpg";


    cout<<"result " + v<<endl;
    cout<<"result 2 " +v<<endl;

    std::string str2 = v.substr ( 0, v.size() - 4);
    QString str = QString::fromUtf8(str2.c_str());
    query.clear();
    cout<<"result 3 " +str.toStdString() <<endl;
    const QString cst = "select id_employe from employe where nom = '"+str+"'";
    cout<<"result 4 " +cst.toStdString() <<endl;
    query.prepare(cst);

    query.exec();


    int salary ;
    while (query.next()) {

   salary = query.value(0).toInt();
           qDebug()<<salary;
*/
 /    }
    cout<<salary;
    return a.exec();

}
