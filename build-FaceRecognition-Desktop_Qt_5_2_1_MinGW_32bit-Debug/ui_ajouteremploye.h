/********************************************************************************
** Form generated from reading UI file 'ajouteremploye.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTEREMPLOYE_H
#define UI_AJOUTEREMPLOYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterEmploye
{
public:
    QGroupBox *groupBoxEmploye;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_departement;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QComboBox *comboBoxDepartement;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonEnregistrer;
    QLabel *label;
    QPushButton *pushButtonCharger;
    QLabel *label_poste;
    QComboBox *comboBoxPoste;

    void setupUi(QWidget *AjouterEmploye)
    {
        if (AjouterEmploye->objectName().isEmpty())
            AjouterEmploye->setObjectName(QStringLiteral("AjouterEmploye"));
        AjouterEmploye->resize(451, 323);
        groupBoxEmploye = new QGroupBox(AjouterEmploye);
        groupBoxEmploye->setObjectName(QStringLiteral("groupBoxEmploye"));
        groupBoxEmploye->setGeometry(QRect(10, -10, 431, 331));
        label_nom = new QLabel(groupBoxEmploye);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(50, 90, 46, 13));
        label_prenom = new QLabel(groupBoxEmploye);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(50, 120, 81, 16));
        label_departement = new QLabel(groupBoxEmploye);
        label_departement->setObjectName(QStringLiteral("label_departement"));
        label_departement->setGeometry(QRect(50, 150, 101, 21));
        lineEditNom = new QLineEdit(groupBoxEmploye);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setGeometry(QRect(120, 90, 261, 20));
        lineEditPrenom = new QLineEdit(groupBoxEmploye);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));
        lineEditPrenom->setGeometry(QRect(120, 120, 261, 20));
        comboBoxDepartement = new QComboBox(groupBoxEmploye);
        comboBoxDepartement->setObjectName(QStringLiteral("comboBoxDepartement"));
        comboBoxDepartement->setGeometry(QRect(120, 150, 181, 22));
        pushButtonAnnuler = new QPushButton(groupBoxEmploye);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(140, 270, 75, 23));
        pushButtonEnregistrer = new QPushButton(groupBoxEmploye);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(250, 270, 101, 23));
        label = new QLabel(groupBoxEmploye);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 151, 17));
        pushButtonCharger = new QPushButton(groupBoxEmploye);
        pushButtonCharger->setObjectName(QStringLiteral("pushButtonCharger"));
        pushButtonCharger->setGeometry(QRect(310, 150, 75, 61));
        label_poste = new QLabel(groupBoxEmploye);
        label_poste->setObjectName(QStringLiteral("label_poste"));
        label_poste->setGeometry(QRect(50, 180, 101, 21));
        comboBoxPoste = new QComboBox(groupBoxEmploye);
        comboBoxPoste->setObjectName(QStringLiteral("comboBoxPoste"));
        comboBoxPoste->setGeometry(QRect(120, 190, 181, 22));

        retranslateUi(AjouterEmploye);

        QMetaObject::connectSlotsByName(AjouterEmploye);
    } // setupUi

    void retranslateUi(QWidget *AjouterEmploye)
    {
        AjouterEmploye->setWindowTitle(QApplication::translate("AjouterEmploye", "Form", 0));
        groupBoxEmploye->setTitle(QString());
        label_nom->setText(QApplication::translate("AjouterEmploye", "Nom", 0));
        label_prenom->setText(QApplication::translate("AjouterEmploye", "Pr\303\251nom", 0));
        label_departement->setText(QApplication::translate("AjouterEmploye", "Service", 0));
        pushButtonAnnuler->setText(QApplication::translate("AjouterEmploye", "Annuler", 0));
        pushButtonEnregistrer->setText(QApplication::translate("AjouterEmploye", "Enregistrer", 0));
        label->setText(QApplication::translate("AjouterEmploye", "Nouvel Employ\303\251", 0));
        pushButtonCharger->setText(QApplication::translate("AjouterEmploye", "Charger", 0));
        label_poste->setText(QApplication::translate("AjouterEmploye", "Poste", 0));
    } // retranslateUi

};

namespace Ui {
    class AjouterEmploye: public Ui_AjouterEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTEREMPLOYE_H
