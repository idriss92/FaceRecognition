#ifndef AJOUTERDEPARTEMENT_H
#define AJOUTERDEPARTEMENT_H

#include <QDialog>

namespace Ui {
class ajouterdepartement;
}

class ajouterdepartement : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterdepartement(QWidget *parent = 0);
    ~ajouterdepartement();

private slots:
    void on_pushButtonEnregistrer_clicked();

    void on_pushButtonAnnuler_clicked();

private:
    Ui::ajouterdepartement *ui;
};

#endif // AJOUTERDEPARTEMENT_H
