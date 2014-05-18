#include "employe.h"
#include "ui_employe.h"

Employe::Employe(QWidget *parent) : QMainWindow(parent), ui(new Ui::Employe)
{
    ui->setupUi(this);
}

Employe::~Employe()
{
    delete ui;
}
