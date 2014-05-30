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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListeEmploye
{
public:

    void setupUi(QWidget *ListeEmploye)
    {
        if (ListeEmploye->objectName().isEmpty())
            ListeEmploye->setObjectName(QStringLiteral("ListeEmploye"));
        ListeEmploye->resize(548, 351);

        retranslateUi(ListeEmploye);

        QMetaObject::connectSlotsByName(ListeEmploye);
    } // setupUi

    void retranslateUi(QWidget *ListeEmploye)
    {
        ListeEmploye->setWindowTitle(QApplication::translate("ListeEmploye", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ListeEmploye: public Ui_ListeEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEEMPLOYE_H
