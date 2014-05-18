/********************************************************************************
** Form generated from reading UI file 'administration.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATION_H
#define UI_ADMINISTRATION_H

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

class Ui_Administration
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Administration)
    {
        if (Administration->objectName().isEmpty())
            Administration->setObjectName(QStringLiteral("Administration"));
        Administration->resize(800, 600);
        menubar = new QMenuBar(Administration);
        menubar->setObjectName(QStringLiteral("menubar"));
        Administration->setMenuBar(menubar);
        centralwidget = new QWidget(Administration);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Administration->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Administration);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Administration->setStatusBar(statusbar);

        retranslateUi(Administration);

        QMetaObject::connectSlotsByName(Administration);
    } // setupUi

    void retranslateUi(QMainWindow *Administration)
    {
        Administration->setWindowTitle(QApplication::translate("Administration", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Administration: public Ui_Administration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATION_H
