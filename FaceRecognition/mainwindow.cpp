#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
#include <iostream>
#include "logindialog.h"
#include "identifier.h"
#include "admin.h"
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

}

void MainWindow::on_pushButtonEmploye_clicked()
{
 f_employe = new Employe(this);
 f_employe->show();
}

