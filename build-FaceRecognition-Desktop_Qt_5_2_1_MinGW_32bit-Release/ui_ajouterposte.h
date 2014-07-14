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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterPoste
{
public:
    QGroupBox *groupBoxPoste;
    QPushButton *pushButtonEnregistrer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nom;
    QLineEdit *lineEditPoste;
    QPushButton *pushButtonAnnuler;
    QLabel *label;

    void setupUi(QDialog *AjouterPoste)
    {
        if (AjouterPoste->objectName().isEmpty())
            AjouterPoste->setObjectName(QStringLiteral("AjouterPoste"));
        AjouterPoste->resize(327, 156);
        groupBoxPoste = new QGroupBox(AjouterPoste);
        groupBoxPoste->setObjectName(QStringLiteral("groupBoxPoste"));
        groupBoxPoste->setGeometry(QRect(30, 20, 391, 181));
        pushButtonEnregistrer = new QPushButton(groupBoxPoste);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(170, 80, 101, 23));
        horizontalLayoutWidget = new QWidget(groupBoxPoste);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_nom = new QLabel(horizontalLayoutWidget);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        horizontalLayout->addWidget(label_nom);

        lineEditPoste = new QLineEdit(horizontalLayoutWidget);
        lineEditPoste->setObjectName(QStringLiteral("lineEditPoste"));

        horizontalLayout->addWidget(lineEditPoste);

        pushButtonAnnuler = new QPushButton(groupBoxPoste);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(90, 80, 75, 23));
        label = new QLabel(AjouterPoste);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 151, 17));

        retranslateUi(AjouterPoste);

        QMetaObject::connectSlotsByName(AjouterPoste);
    } // setupUi

    void retranslateUi(QDialog *AjouterPoste)
    {
        AjouterPoste->setWindowTitle(QApplication::translate("AjouterPoste", "Dialog", 0));
        groupBoxPoste->setTitle(QString());
        pushButtonEnregistrer->setText(QApplication::translate("AjouterPoste", "Enregistrer", 0));
        label_nom->setText(QApplication::translate("AjouterPoste", "Poste", 0));
        pushButtonAnnuler->setText(QApplication::translate("AjouterPoste", "Annuler", 0));
        label->setText(QApplication::translate("AjouterPoste", "Nouveau Poste", 0));
    } // retranslateUi

};

namespace Ui {
    class AjouterPoste: public Ui_AjouterPoste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPOSTE_H
