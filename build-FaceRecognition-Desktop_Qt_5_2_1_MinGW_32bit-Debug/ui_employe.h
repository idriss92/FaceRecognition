/********************************************************************************
** Form generated from reading UI file 'employe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYE_H
#define UI_EMPLOYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employe
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Employe)
    {
        if (Employe->objectName().isEmpty())
            Employe->setObjectName(QStringLiteral("Employe"));
        Employe->resize(800, 600);
        menubar = new QMenuBar(Employe);
        menubar->setObjectName(QStringLiteral("menubar"));
        Employe->setMenuBar(menubar);
        centralwidget = new QWidget(Employe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Employe->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Employe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Employe->setStatusBar(statusbar);

        retranslateUi(Employe);

        QMetaObject::connectSlotsByName(Employe);
    } // setupUi

    void retranslateUi(QMainWindow *Employe)
    {
        Employe->setWindowTitle(QApplication::translate("Employe", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Employe: public Ui_Employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYE_H
