#ifndef AJOUTEREMPLOYE_H
#define AJOUTEREMPLOYE_H
#include <QWidget>
#include <QDialog>
#include <QLineEdit>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class AjouterEmploye;
}

class AjouterEmploye : public QWidget
{
    Q_OBJECT


public:
    explicit AjouterEmploye(QWidget *parent = 0);
    ~AjouterEmploye();

private slots:
    void on_pushButtonEnregistrer_clicked();

private:
    Ui::AjouterEmploye *ui;
};

#endif // AJOUTEREMPLOYE_H
