#include "ajouterdepartement.h"
#include "ui_ajouterdepartement.h"

ajouterdepartement::ajouterdepartement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterdepartement)
{
    ui->setupUi(this);
}

ajouterdepartement::~ajouterdepartement()
{
    delete ui;
}
