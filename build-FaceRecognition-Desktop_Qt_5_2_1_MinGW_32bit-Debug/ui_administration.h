/********************************************************************************
** Form generated from reading UI file 'administration.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATION_H
#define UI_ADMINISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administration
{
public:
    QAction *actionNouvelEmploye;
    QAction *actionListeDesEmployes;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButtonNouvelEmp;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonNouvelDepart;
    QPushButton *pushButtonListeEmploye;
    QPushButton *pushButtonAjouterPoste;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Administration)
    {
        if (Administration->objectName().isEmpty())
            Administration->setObjectName(QStringLiteral("Administration"));
        Administration->resize(834, 375);
        actionNouvelEmploye = new QAction(Administration);
        actionNouvelEmploye->setObjectName(QStringLiteral("actionNouvelEmploye"));
        actionListeDesEmployes = new QAction(Administration);
        actionListeDesEmployes->setObjectName(QStringLiteral("actionListeDesEmployes"));
        centralwidget = new QWidget(Administration);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 281, 41));
        pushButtonNouvelEmp = new QPushButton(centralwidget);
        pushButtonNouvelEmp->setObjectName(QStringLiteral("pushButtonNouvelEmp"));
        pushButtonNouvelEmp->setGeometry(QRect(30, 110, 141, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 70, 541, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonNouvelDepart = new QPushButton(verticalLayoutWidget);
        pushButtonNouvelDepart->setObjectName(QStringLiteral("pushButtonNouvelDepart"));

        verticalLayout->addWidget(pushButtonNouvelDepart);

        pushButtonListeEmploye = new QPushButton(centralwidget);
        pushButtonListeEmploye->setObjectName(QStringLiteral("pushButtonListeEmploye"));
        pushButtonListeEmploye->setGeometry(QRect(80, 240, 99, 27));
        pushButtonAjouterPoste = new QPushButton(centralwidget);
        pushButtonAjouterPoste->setObjectName(QStringLiteral("pushButtonAjouterPoste"));
        pushButtonAjouterPoste->setGeometry(QRect(50, 280, 75, 23));
        Administration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Administration);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 834, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        Administration->setMenuBar(menubar);
        statusbar = new QStatusBar(Administration);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Administration->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionNouvelEmploye);
        menuFichier->addAction(actionListeDesEmployes);

        retranslateUi(Administration);

        QMetaObject::connectSlotsByName(Administration);
    } // setupUi

    void retranslateUi(QMainWindow *Administration)
    {
        Administration->setWindowTitle(QApplication::translate("Administration", "Administration", 0));
        actionNouvelEmploye->setText(QApplication::translate("Administration", "Nouvel Employ\303\251", 0));
        actionListeDesEmployes->setText(QApplication::translate("Administration", "Liste des Employ\303\251s", 0));
        label->setText(QApplication::translate("Administration", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Presentation Menu</span></p></body></html>", 0));
        pushButtonNouvelEmp->setText(QApplication::translate("Administration", "Ajouter un employ\303\251", 0));
        pushButtonNouvelDepart->setText(QApplication::translate("Administration", "Ajouter un service", 0));
        pushButtonListeEmploye->setText(QApplication::translate("Administration", "Liste des employ\303\251s", 0));
        pushButtonAjouterPoste->setText(QApplication::translate("Administration", "Ajouter Poste", 0));
        menuFichier->setTitle(QApplication::translate("Administration", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class Administration: public Ui_Administration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATION_H
