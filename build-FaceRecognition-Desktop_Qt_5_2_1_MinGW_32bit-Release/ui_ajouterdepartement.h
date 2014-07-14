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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajouterdepartement
{
public:
    QGroupBox *groupBoxNouveauDepartement;
    QPushButton *pushButtonAnnuler;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIdDepartement;
    QLineEdit *lineEditIdDepartment;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNomDepartement;
    QLineEdit *lineEditNomDepartement;
    QPushButton *pushButtonEnregistrer;

    void setupUi(QDialog *ajouterdepartement)
    {
        if (ajouterdepartement->objectName().isEmpty())
            ajouterdepartement->setObjectName(QStringLiteral("ajouterdepartement"));
        ajouterdepartement->resize(318, 175);
        groupBoxNouveauDepartement = new QGroupBox(ajouterdepartement);
        groupBoxNouveauDepartement->setObjectName(QStringLiteral("groupBoxNouveauDepartement"));
        groupBoxNouveauDepartement->setGeometry(QRect(20, 20, 311, 161));
        pushButtonAnnuler = new QPushButton(groupBoxNouveauDepartement);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(70, 120, 75, 23));
        horizontalLayoutWidget = new QWidget(groupBoxNouveauDepartement);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 40, 271, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelIdDepartement = new QLabel(horizontalLayoutWidget);
        labelIdDepartement->setObjectName(QStringLiteral("labelIdDepartement"));

        horizontalLayout->addWidget(labelIdDepartement);

        lineEditIdDepartment = new QLineEdit(horizontalLayoutWidget);
        lineEditIdDepartment->setObjectName(QStringLiteral("lineEditIdDepartment"));

        horizontalLayout->addWidget(lineEditIdDepartment);

        horizontalLayoutWidget_2 = new QWidget(groupBoxNouveauDepartement);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 80, 271, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNomDepartement = new QLabel(horizontalLayoutWidget_2);
        labelNomDepartement->setObjectName(QStringLiteral("labelNomDepartement"));

        horizontalLayout_2->addWidget(labelNomDepartement);

        lineEditNomDepartement = new QLineEdit(horizontalLayoutWidget_2);
        lineEditNomDepartement->setObjectName(QStringLiteral("lineEditNomDepartement"));

        horizontalLayout_2->addWidget(lineEditNomDepartement);

        pushButtonEnregistrer = new QPushButton(groupBoxNouveauDepartement);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(150, 120, 91, 21));

        retranslateUi(ajouterdepartement);

        QMetaObject::connectSlotsByName(ajouterdepartement);
    } // setupUi

    void retranslateUi(QDialog *ajouterdepartement)
    {
        ajouterdepartement->setWindowTitle(QApplication::translate("ajouterdepartement", "Dialog", 0));
        groupBoxNouveauDepartement->setTitle(QApplication::translate("ajouterdepartement", "Nouveau D\303\251partement", 0));
        pushButtonAnnuler->setText(QApplication::translate("ajouterdepartement", "Annuler", 0));
        labelIdDepartement->setText(QApplication::translate("ajouterdepartement", "Identifiant", 0));
        labelNomDepartement->setText(QApplication::translate("ajouterdepartement", "D\303\251partement", 0));
        pushButtonEnregistrer->setText(QApplication::translate("ajouterdepartement", "Enregistrer", 0));
    } // retranslateUi

};

namespace Ui {
    class ajouterdepartement: public Ui_ajouterdepartement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERDEPARTEMENT_H
