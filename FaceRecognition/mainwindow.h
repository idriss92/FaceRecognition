#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "administration.h"
#include "employe.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAdmin_clicked();

    void on_pushButtonEmploye_clicked();

private:
    Ui::MainWindow *ui;
    Administration * admin;
    Employe * employe;
};

#endif // MAINWINDOW_H
