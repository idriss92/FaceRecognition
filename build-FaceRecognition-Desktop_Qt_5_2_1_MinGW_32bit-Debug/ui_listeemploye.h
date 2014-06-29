/********************************************************************************
** Form generated from reading UI file 'listeemploye.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEEMPLOYE_H
#define UI_LISTEEMPLOYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListeEmploye
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *ListeEmploye)
    {
        if (ListeEmploye->objectName().isEmpty())
            ListeEmploye->setObjectName(QStringLiteral("ListeEmploye"));
        ListeEmploye->resize(525, 277);
        tableView = new QTableView(ListeEmploye);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 461, 201));
        pushButton = new QPushButton(ListeEmploye);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 230, 111, 31));

        retranslateUi(ListeEmploye);

        QMetaObject::connectSlotsByName(ListeEmploye);
    } // setupUi

    void retranslateUi(QWidget *ListeEmploye)
    {
        ListeEmploye->setWindowTitle(QApplication::translate("ListeEmploye", "Form", 0));
        pushButton->setText(QApplication::translate("ListeEmploye", "Load", 0));
    } // retranslateUi

};

namespace Ui {
    class ListeEmploye: public Ui_ListeEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEEMPLOYE_H
