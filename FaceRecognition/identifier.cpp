#include "identifier.h"
#include "ui_identifier.h"
#include "capture.h"
identifier::identifier(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::identifier)
{
    ui->setupUi(this);
}

identifier::~identifier()
{
    delete ui;
}

void identifier::on_pushButton_clicked()
{
    Capture * capture = new Capture();
    capture->init();
}
