#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QMainWindow>

namespace Ui {
class Employe;
}

class Employe : public QMainWindow
{
    Q_OBJECT

public:
    explicit Employe(QWidget *parent = 0);
    ~Employe();

private:
    Ui::Employe *ui;
};

#endif // EMPLOYE_H
