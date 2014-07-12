#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>

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

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
