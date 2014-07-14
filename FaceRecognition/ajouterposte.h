#ifndef AJOUTERPOSTE_H
#define AJOUTERPOSTE_H

#include <QDialog>

namespace Ui {
class AjouterPoste;
}

class AjouterPoste : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterPoste(QWidget *parent = 0);
    ~AjouterPoste();

private slots:
    void on_pushButtonEnregistrer_clicked();

    void on_pushButtonAnnuler_clicked();

private:
    Ui::AjouterPoste *ui;
};

#endif // AJOUTERPOSTE_H
