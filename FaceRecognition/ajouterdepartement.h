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

private:
    Ui::ajouterdepartement *ui;
};

#endif // AJOUTERDEPARTEMENT_H
