#ifndef PROFILAGE_H
#define PROFILAGE_H
#include <string.h>
#include <QDialog>

namespace Ui {
class Profilage;
}

class Profilage : public QDialog
{
    Q_OBJECT

public:
    explicit Profilage(QWidget *parent = 0);
    ~Profilage();

    //permettant de récupérer le profil d'un employé avec en paramètre son matricule
    //*Profilage(int);

private slots :
    void receData(QStringList);

private:
    Ui::Profilage *ui;

    char nom, prenom;
    int age, matricule;
    enum sexe{M,F};
};

#endif // PROFILAGE_H
