#include "listeemploye.h"
#include "ui_listeemploye.h"

ListeEmploye::ListeEmploye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListeEmploye)
{
    ui->setupUi(this);
}

ListeEmploye::~ListeEmploye()
{
    delete ui;
}
