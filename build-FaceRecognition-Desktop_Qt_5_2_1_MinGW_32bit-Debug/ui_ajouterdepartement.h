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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ajouterdepartement
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBoxNouveauDepartement;
    QLabel *labelIdDepartement;
    QLabel *labelNomDepartement;
    QLineEdit *lineEditIdDepartment;
    QLineEdit *lineEditNomDepartement;

    void setupUi(QDialog *ajouterdepartement)
    {
        if (ajouterdepartement->objectName().isEmpty())
            ajouterdepartement->setObjectName(QStringLiteral("ajouterdepartement"));
        ajouterdepartement->resize(464, 310);
        buttonBox = new QDialogButtonBox(ajouterdepartement);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        groupBoxNouveauDepartement = new QGroupBox(ajouterdepartement);
        groupBoxNouveauDepartement->setObjectName(QStringLiteral("groupBoxNouveauDepartement"));
        groupBoxNouveauDepartement->setGeometry(QRect(110, 50, 291, 171));
        labelIdDepartement = new QLabel(groupBoxNouveauDepartement);
        labelIdDepartement->setObjectName(QStringLiteral("labelIdDepartement"));
        labelIdDepartement->setGeometry(QRect(30, 40, 71, 21));
        labelNomDepartement = new QLabel(groupBoxNouveauDepartement);
        labelNomDepartement->setObjectName(QStringLiteral("labelNomDepartement"));
        labelNomDepartement->setGeometry(QRect(30, 100, 71, 16));
        lineEditIdDepartment = new QLineEdit(groupBoxNouveauDepartement);
        lineEditIdDepartment->setObjectName(QStringLiteral("lineEditIdDepartment"));
        lineEditIdDepartment->setGeometry(QRect(120, 40, 161, 20));
        lineEditNomDepartement = new QLineEdit(groupBoxNouveauDepartement);
        lineEditNomDepartement->setObjectName(QStringLiteral("lineEditNomDepartement"));
        lineEditNomDepartement->setGeometry(QRect(122, 100, 161, 20));

        retranslateUi(ajouterdepartement);
        QObject::connect(buttonBox, SIGNAL(accepted()), ajouterdepartement, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ajouterdepartement, SLOT(reject()));

        QMetaObject::connectSlotsByName(ajouterdepartement);
    } // setupUi

    void retranslateUi(QDialog *ajouterdepartement)
    {
        ajouterdepartement->setWindowTitle(QApplication::translate("ajouterdepartement", "Dialog", 0));
        groupBoxNouveauDepartement->setTitle(QApplication::translate("ajouterdepartement", "Nouveau D\303\251partement", 0));
        labelIdDepartement->setText(QApplication::translate("ajouterdepartement", "Identifiant", 0));
        labelNomDepartement->setText(QApplication::translate("ajouterdepartement", "D\303\251partement", 0));
    } // retranslateUi

};

namespace Ui {
    class ajouterdepartement: public Ui_ajouterdepartement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERDEPARTEMENT_H
