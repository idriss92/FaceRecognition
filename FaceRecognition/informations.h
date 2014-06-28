#ifndef INFORMATIONS_H
#define INFORMATIONS_H

#include <QMainWindow>

namespace Ui {
class Informations;
}

class Informations : public QMainWindow
{
    Q_OBJECT

public:
    explicit Informations(QWidget *parent = 0);
    ~Informations();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Informations *ui;
};

#endif // INFORMATIONS_H
