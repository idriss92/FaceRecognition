#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "profilage.h"

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

private slots:
    void on_pushButtonRecherche_clicked();

    void on_pushButtonConsulter_clicked();

    void on_pushButtonModifier_clicked();

    void on_pushButtonSupprimer_clicked();

    void on_pushButtonConsulter_2_clicked();

    void on_pushButtonChargerEmp_clicked();

    void on_pushButtonConsulterPresence_clicked();

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_tableViewEmploye_activated(const QModelIndex &index);

signals :
    void sendData(QStringList);

private:
    Ui::Admin *ui;
    Profilage * customProfil;
    void FillForm();
    bool filling;
};

#endif // ADMIN_H
