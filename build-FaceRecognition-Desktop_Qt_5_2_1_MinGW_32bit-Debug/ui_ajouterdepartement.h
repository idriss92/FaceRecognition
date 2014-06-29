/********************************************************************************
** Form generated from reading UI file 'ajouterdepartement.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERDEPARTEMENT_H
#define UI_AJOUTERDEPARTEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouterdepartement
{
public:
    QGroupBox *groupBoxNouveauDepartement;
    QLabel *labelIdDepartement;
    QLabel *labelNomDepartement;
    QLineEdit *lineEditIdDepartment;
    QLineEdit *lineEditNomDepartement;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *ajouterdepartement)
    {
        if (ajouterdepartement->objectName().isEmpty())
            ajouterdepartement->setObjectName(QStringLiteral("ajouterdepartement"));
        ajouterdepartement->resize(358, 162);
        groupBoxNouveauDepartement = new QGroupBox(ajouterdepartement);
        groupBoxNouveauDepartement->setObjectName(QStringLiteral("groupBoxNouveauDepartement"));
        groupBoxNouveauDepartement->setGeometry(QRect(0, 0, 311, 161));
        labelIdDepartement = new QLabel(groupBoxNouveauDepartement);
        labelIdDepartement->setObjectName(QStringLiteral("labelIdDepartement"));
        labelIdDepartement->setGeometry(QRect(20, 50, 71, 21));
        labelNomDepartement = new QLabel(groupBoxNouveauDepartement);
        labelNomDepartement->setObjectName(QStringLiteral("labelNomDepartement"));
        labelNomDepartement->setGeometry(QRect(20, 80, 101, 16));
        lineEditIdDepartment = new QLineEdit(groupBoxNouveauDepartement);
        lineEditIdDepartment->setObjectName(QStringLiteral("lineEditIdDepartment"));
        lineEditIdDepartment->setGeometry(QRect(120, 50, 161, 20));
        lineEditNomDepartement = new QLineEdit(groupBoxNouveauDepartement);
        lineEditNomDepartement->setObjectName(QStringLiteral("lineEditNomDepartement"));
        lineEditNomDepartement->setGeometry(QRect(120, 80, 161, 20));
        pushButtonEnregistrer = new QPushButton(groupBoxNouveauDepartement);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(190, 120, 91, 21));
        pushButtonAnnuler = new QPushButton(groupBoxNouveauDepartement);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(80, 120, 75, 23));

        retranslateUi(ajouterdepartement);

        QMetaObject::connectSlotsByName(ajouterdepartement);
    } // setupUi

    void retranslateUi(QDialog *ajouterdepartement)
    {
        ajouterdepartement->setWindowTitle(QApplication::translate("ajouterdepartement", "Dialog", 0));
        groupBoxNouveauDepartement->setTitle(QApplication::translate("ajouterdepartement", "Nouveau D\303\251partement", 0));
        labelIdDepartement->setText(QApplication::translate("ajouterdepartement", "Identifiant", 0));
        labelNomDepartement->setText(QApplication::translate("ajouterdepartement", "D\303\251partement", 0));
        pushButtonEnregistrer->setText(QApplication::translate("ajouterdepartement", "Enregistrer", 0));
        pushButtonAnnuler->setText(QApplication::translate("ajouterdepartement", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class ajouterdepartement: public Ui_ajouterdepartement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERDEPARTEMENT_H
