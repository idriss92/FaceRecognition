#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QMainWindow>

namespace Ui {
class identifier;
}

class identifier : public QMainWindow
{
    Q_OBJECT

public:
    explicit identifier(QWidget *parent = 0);
    ~identifier();

private slots:
    void on_pushButton_clicked();

private:
    Ui::identifier *ui;
};

#endif // IDENTIFIER_H
