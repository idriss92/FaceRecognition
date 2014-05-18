#include "administration.h"
#include "ui_administration.h"

Administration::Administration(QWidget *parent) :QMainWindow(parent), ui(new Ui::Administration)
{
    ui->setupUi(this);
}

Administration::~Administration()
{
    delete ui;
}
