#ifndef LISTEEMPLOYE_H
#define LISTEEMPLOYE_H

#include <QWidget>

namespace Ui {
class ListeEmploye;
}

class ListeEmploye : public QWidget
{
    Q_OBJECT

public:
    explicit ListeEmploye(QWidget *parent = 0);
    ~ListeEmploye();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ListeEmploye *ui;
};

#endif // LISTEEMPLOYE_H
