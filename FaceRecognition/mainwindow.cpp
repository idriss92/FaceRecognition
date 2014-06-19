#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
#include <iostream>
#include "logindialog.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdmin_clicked()
{
    login = new LoginDialog (this);
    login->show();
    //admin = new Administration(this);
    //admin->show();
}

void MainWindow::on_pushButtonEmploye_clicked()
{
    employe = new Employe(this);
    employe->show();

}

void MainWindow::on_pushButton_clicked()
{
    cout<<"ok";
}
