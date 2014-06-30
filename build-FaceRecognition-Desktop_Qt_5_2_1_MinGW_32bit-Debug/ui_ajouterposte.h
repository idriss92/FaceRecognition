/********************************************************************************
** Form generated from reading UI file 'ajouterposte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERPOSTE_H
#define UI_AJOUTERPOSTE_H

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

class Ui_AjouterPoste
{
public:
    QGroupBox *groupBoxPoste;
    QLabel *label_nom;
    QLineEdit *lineEditPoste;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonEnregistrer;
    QLabel *label;

    void setupUi(QDialog *AjouterPoste)
    {
        if (AjouterPoste->objectName().isEmpty())
            AjouterPoste->setObjectName(QStringLiteral("AjouterPoste"));
        AjouterPoste->resize(414, 229);
        groupBoxPoste = new QGroupBox(AjouterPoste);
        groupBoxPoste->setObjectName(QStringLiteral("groupBoxPoste"));
        groupBoxPoste->setGeometry(QRect(0, 20, 391, 181));
        label_nom = new QLabel(groupBoxPoste);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(50, 90, 46, 13));
        lineEditPoste = new QLineEdit(groupBoxPoste);
        lineEditPoste->setObjectName(QStringLiteral("lineEditPoste"));
        lineEditPoste->setGeometry(QRect(120, 90, 261, 20));
        pushButtonAnnuler = new QPushButton(groupBoxPoste);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(140, 140, 75, 23));
        pushButtonEnregistrer = new QPushButton(groupBoxPoste);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(260, 140, 101, 23));
        label = new QLabel(groupBoxPoste);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 151, 17));

        retranslateUi(AjouterPoste);

        QMetaObject::connectSlotsByName(AjouterPoste);
    } // setupUi

    void retranslateUi(QDialog *AjouterPoste)
    {
        AjouterPoste->setWindowTitle(QApplication::translate("AjouterPoste", "Dialog", 0));
        groupBoxPoste->setTitle(QString());
        label_nom->setText(QApplication::translate("AjouterPoste", "Poste", 0));
        pushButtonAnnuler->setText(QApplication::translate("AjouterPoste", "Annuler", 0));
        pushButtonEnregistrer->setText(QApplication::translate("AjouterPoste", "Enregistrer", 0));
        label->setText(QApplication::translate("AjouterPoste", "Nouveau Poste", 0));
    } // retranslateUi

};

namespace Ui {
    class AjouterPoste: public Ui_AjouterPoste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPOSTE_H
