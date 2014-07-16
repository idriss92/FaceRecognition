/********************************************************************************
** Form generated from reading UI file 'profilage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILAGE_H
#define UI_PROFILAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Profilage
{
public:
    QGroupBox *groupBoxDetailEmploye;
    QLabel *labelMatricule;
    QLabel *labelNomEmploye;
    QLabel *labelPrenomEmploye;
    QLabel *labelAgeEmploye;
    QLabel *labelSexeEmploye;
    QLabel *labelPosteEmploye;
    QTextBrowser *textBrowserMatricule;
    QTextBrowser *textBrowserNom;
    QTextBrowser *textBrowserPrenom;
    QTextBrowser *textBrowserAge;
    QTextBrowser *textBrowserPoste;
    QTextBrowser *textBrowserSexe;

    void setupUi(QDialog *Profilage)
    {
        if (Profilage->objectName().isEmpty())
            Profilage->setObjectName(QStringLiteral("Profilage"));
        Profilage->resize(533, 515);
        groupBoxDetailEmploye = new QGroupBox(Profilage);
        groupBoxDetailEmploye->setObjectName(QStringLiteral("groupBoxDetailEmploye"));
        groupBoxDetailEmploye->setGeometry(QRect(60, 20, 381, 431));
        labelMatricule = new QLabel(groupBoxDetailEmploye);
        labelMatricule->setObjectName(QStringLiteral("labelMatricule"));
        labelMatricule->setGeometry(QRect(40, 50, 81, 31));
        labelNomEmploye = new QLabel(groupBoxDetailEmploye);
        labelNomEmploye->setObjectName(QStringLiteral("labelNomEmploye"));
        labelNomEmploye->setGeometry(QRect(40, 110, 81, 31));
        labelPrenomEmploye = new QLabel(groupBoxDetailEmploye);
        labelPrenomEmploye->setObjectName(QStringLiteral("labelPrenomEmploye"));
        labelPrenomEmploye->setGeometry(QRect(30, 170, 81, 31));
        labelAgeEmploye = new QLabel(groupBoxDetailEmploye);
        labelAgeEmploye->setObjectName(QStringLiteral("labelAgeEmploye"));
        labelAgeEmploye->setGeometry(QRect(40, 230, 81, 31));
        labelSexeEmploye = new QLabel(groupBoxDetailEmploye);
        labelSexeEmploye->setObjectName(QStringLiteral("labelSexeEmploye"));
        labelSexeEmploye->setGeometry(QRect(40, 280, 81, 31));
        labelPosteEmploye = new QLabel(groupBoxDetailEmploye);
        labelPosteEmploye->setObjectName(QStringLiteral("labelPosteEmploye"));
        labelPosteEmploye->setGeometry(QRect(40, 350, 81, 31));
        textBrowserMatricule = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserMatricule->setObjectName(QStringLiteral("textBrowserMatricule"));
        textBrowserMatricule->setGeometry(QRect(110, 60, 241, 31));
        textBrowserNom = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserNom->setObjectName(QStringLiteral("textBrowserNom"));
        textBrowserNom->setGeometry(QRect(110, 110, 241, 31));
        textBrowserPrenom = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserPrenom->setObjectName(QStringLiteral("textBrowserPrenom"));
        textBrowserPrenom->setGeometry(QRect(110, 170, 241, 31));
        textBrowserAge = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserAge->setObjectName(QStringLiteral("textBrowserAge"));
        textBrowserAge->setGeometry(QRect(110, 230, 241, 31));
        textBrowserPoste = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserPoste->setObjectName(QStringLiteral("textBrowserPoste"));
        textBrowserPoste->setGeometry(QRect(110, 350, 241, 31));
        textBrowserSexe = new QTextBrowser(groupBoxDetailEmploye);
        textBrowserSexe->setObjectName(QStringLiteral("textBrowserSexe"));
        textBrowserSexe->setGeometry(QRect(110, 280, 241, 31));

        retranslateUi(Profilage);

        QMetaObject::connectSlotsByName(Profilage);
    } // setupUi

    void retranslateUi(QDialog *Profilage)
    {
        Profilage->setWindowTitle(QApplication::translate("Profilage", "Dialog", 0));
        groupBoxDetailEmploye->setTitle(QApplication::translate("Profilage", "D\303\251tails Employ\303\251", 0));
        labelMatricule->setText(QApplication::translate("Profilage", "Matricule ", 0));
        labelNomEmploye->setText(QApplication::translate("Profilage", "Nom", 0));
        labelPrenomEmploye->setText(QApplication::translate("Profilage", "Pr\303\251noms", 0));
        labelAgeEmploye->setText(QApplication::translate("Profilage", "Age", 0));
        labelSexeEmploye->setText(QApplication::translate("Profilage", "Sexe", 0));
        labelPosteEmploye->setText(QApplication::translate("Profilage", "Poste", 0));
    } // retranslateUi

};

namespace Ui {
    class Profilage: public Ui_Profilage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILAGE_H
