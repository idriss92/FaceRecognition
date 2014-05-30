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
    QLabel *label;
    QGroupBox *groupBoxEmploye;
    QLabel *label_identifiant;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_image;
    QLabel *label_departement;
    QLineEdit *lineEditIdentif;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QComboBox *comboBoxDepartement;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonEnregistrer;

    void setupUi(QWidget *AjouterEmploye)
    {
        if (AjouterEmploye->objectName().isEmpty())
            AjouterEmploye->setObjectName(QStringLiteral("AjouterEmploye"));
        AjouterEmploye->resize(662, 480);
        label = new QLabel(AjouterEmploye);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 50, 291, 31));
        groupBoxEmploye = new QGroupBox(AjouterEmploye);
        groupBoxEmploye->setObjectName(QStringLiteral("groupBoxEmploye"));
        groupBoxEmploye->setGeometry(QRect(140, 100, 401, 261));
        label_identifiant = new QLabel(groupBoxEmploye);
        label_identifiant->setObjectName(QStringLiteral("label_identifiant"));
        label_identifiant->setGeometry(QRect(40, 30, 61, 16));
        label_nom = new QLabel(groupBoxEmploye);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(40, 60, 46, 13));
        label_prenom = new QLabel(groupBoxEmploye);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(40, 100, 46, 13));
        label_image = new QLabel(groupBoxEmploye);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(40, 140, 46, 13));
        label_departement = new QLabel(groupBoxEmploye);
        label_departement->setObjectName(QStringLiteral("label_departement"));
        label_departement->setGeometry(QRect(40, 180, 71, 16));
        lineEditIdentif = new QLineEdit(groupBoxEmploye);
        lineEditIdentif->setObjectName(QStringLiteral("lineEditIdentif"));
        lineEditIdentif->setGeometry(QRect(140, 30, 113, 20));
        lineEditNom = new QLineEdit(groupBoxEmploye);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setGeometry(QRect(140, 60, 231, 20));
        lineEditPrenom = new QLineEdit(groupBoxEmploye);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));
        lineEditPrenom->setGeometry(QRect(140, 100, 231, 20));
        comboBoxDepartement = new QComboBox(groupBoxEmploye);
        comboBoxDepartement->setObjectName(QStringLiteral("comboBoxDepartement"));
        comboBoxDepartement->setGeometry(QRect(140, 180, 231, 22));
        pushButtonAnnuler = new QPushButton(groupBoxEmploye);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(190, 230, 75, 23));
        pushButtonEnregistrer = new QPushButton(groupBoxEmploye);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(300, 230, 75, 23));

        retranslateUi(AjouterEmploye);

        QMetaObject::connectSlotsByName(AjouterEmploye);
    } // setupUi

    void retranslateUi(QWidget *AjouterEmploye)
    {
        AjouterEmploye->setWindowTitle(QApplication::translate("AjouterEmploye", "Form", 0));
        label->setText(QApplication::translate("AjouterEmploye", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Ajout d'un nouvel employ\303\251</span></p></body></html>", 0));
        groupBoxEmploye->setTitle(QApplication::translate("AjouterEmploye", "Employ\303\251", 0));
        label_identifiant->setText(QApplication::translate("AjouterEmploye", "Identifiant", 0));
        label_nom->setText(QApplication::translate("AjouterEmploye", "Nom", 0));
        label_prenom->setText(QApplication::translate("AjouterEmploye", "Pr\303\251nom", 0));
        label_image->setText(QApplication::translate("AjouterEmploye", "Image", 0));
        label_departement->setText(QApplication::translate("AjouterEmploye", "D\303\251partement", 0));
        pushButtonAnnuler->setText(QApplication::translate("AjouterEmploye", "Annuler", 0));
        pushButtonEnregistrer->setText(QApplication::translate("AjouterEmploye", "Enregistrer", 0));
    } // retranslateUi

};

namespace Ui {
    class AjouterEmploye: public Ui_AjouterEmploye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTEREMPLOYE_H
