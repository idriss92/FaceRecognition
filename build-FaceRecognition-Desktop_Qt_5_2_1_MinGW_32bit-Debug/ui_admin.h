/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBoxRecherche;
    QLineEdit *lineEditRecherche;
    QPushButton *pushButtonRecherche;
    QTableView *tableViewEmploye;
    QGroupBox *groupBox_2;
    QTableView *tableViewListePresence;
    QGroupBox *groupBoxAbsence;
    QTableView *tableViewListeAbsence;
    QPushButton *pushButtonConsulter;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonConsulter_2;
    QFrame *line;
    QPushButton *pushButtonChargerEmp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(916, 600);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 20, 256, 155));
        groupBoxRecherche = new QGroupBox(centralwidget);
        groupBoxRecherche->setObjectName(QStringLiteral("groupBoxRecherche"));
        groupBoxRecherche->setGeometry(QRect(290, 20, 481, 281));
        lineEditRecherche = new QLineEdit(groupBoxRecherche);
        lineEditRecherche->setObjectName(QStringLiteral("lineEditRecherche"));
        lineEditRecherche->setGeometry(QRect(40, 40, 301, 20));
        pushButtonRecherche = new QPushButton(groupBoxRecherche);
        pushButtonRecherche->setObjectName(QStringLiteral("pushButtonRecherche"));
        pushButtonRecherche->setGeometry(QRect(360, 40, 101, 23));
        tableViewEmploye = new QTableView(groupBoxRecherche);
        tableViewEmploye->setObjectName(QStringLiteral("tableViewEmploye"));
        tableViewEmploye->setGeometry(QRect(40, 80, 421, 192));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 329, 431, 221));
        tableViewListePresence = new QTableView(groupBox_2);
        tableViewListePresence->setObjectName(QStringLiteral("tableViewListePresence"));
        tableViewListePresence->setGeometry(QRect(0, 20, 421, 192));
        groupBoxAbsence = new QGroupBox(centralwidget);
        groupBoxAbsence->setObjectName(QStringLiteral("groupBoxAbsence"));
        groupBoxAbsence->setGeometry(QRect(460, 330, 431, 221));
        tableViewListeAbsence = new QTableView(groupBoxAbsence);
        tableViewListeAbsence->setObjectName(QStringLiteral("tableViewListeAbsence"));
        tableViewListeAbsence->setGeometry(QRect(10, 20, 421, 192));
        pushButtonConsulter = new QPushButton(centralwidget);
        pushButtonConsulter->setObjectName(QStringLiteral("pushButtonConsulter"));
        pushButtonConsulter->setGeometry(QRect(784, 40, 101, 23));
        pushButtonModifier = new QPushButton(centralwidget);
        pushButtonModifier->setObjectName(QStringLiteral("pushButtonModifier"));
        pushButtonModifier->setGeometry(QRect(784, 90, 101, 23));
        pushButtonSupprimer = new QPushButton(centralwidget);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));
        pushButtonSupprimer->setGeometry(QRect(784, 140, 101, 23));
        pushButtonConsulter_2 = new QPushButton(centralwidget);
        pushButtonConsulter_2->setObjectName(QStringLiteral("pushButtonConsulter_2"));
        pushButtonConsulter_2->setGeometry(QRect(784, 190, 101, 23));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 310, 891, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButtonChargerEmp = new QPushButton(centralwidget);
        pushButtonChargerEmp->setObjectName(QStringLiteral("pushButtonChargerEmp"));
        pushButtonChargerEmp->setGeometry(QRect(780, 240, 101, 23));
        Admin->setCentralWidget(centralwidget);
        calendarWidget->raise();
        groupBoxRecherche->raise();
        groupBox_2->raise();
        groupBoxAbsence->raise();
        pushButtonModifier->raise();
        pushButtonSupprimer->raise();
        pushButtonConsulter_2->raise();
        line->raise();
        pushButtonConsulter->raise();
        pushButtonChargerEmp->raise();
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 21));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        groupBoxRecherche->setTitle(QApplication::translate("Admin", "Recherche", 0));
        pushButtonRecherche->setText(QApplication::translate("Admin", "Recherche", 0));
        groupBox_2->setTitle(QApplication::translate("Admin", "Liste des pr\303\251sences", 0));
        groupBoxAbsence->setTitle(QApplication::translate("Admin", "Liste des absences", 0));
        pushButtonConsulter->setText(QApplication::translate("Admin", "Consulter ", 0));
        pushButtonModifier->setText(QApplication::translate("Admin", "Modifier", 0));
        pushButtonSupprimer->setText(QApplication::translate("Admin", "Supprimer", 0));
        pushButtonConsulter_2->setText(QApplication::translate("Admin", "Consulter absences", 0));
        pushButtonChargerEmp->setText(QApplication::translate("Admin", "Charger Employ\303\251s", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
