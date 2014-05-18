#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QMainWindow>

namespace Ui {
class Administration;
}

class Administration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Administration(QWidget *parent = 0);
    ~Administration();

private:
    Ui::Administration *ui;
};

#endif // ADMINISTRATION_H
