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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employe
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Authentifier;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Employe)
    {
        if (Employe->objectName().isEmpty())
            Employe->setObjectName(QStringLiteral("Employe"));
        Employe->resize(537, 158);
        centralwidget = new QWidget(Employe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 501, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Authentifier = new QPushButton(verticalLayoutWidget);
        Authentifier->setObjectName(QStringLiteral("Authentifier"));
        Authentifier->setIconSize(QSize(16, 58));

        verticalLayout->addWidget(Authentifier);

        Employe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Employe);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 25));
        Employe->setMenuBar(menubar);
        statusbar = new QStatusBar(Employe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Employe->setStatusBar(statusbar);

        retranslateUi(Employe);

        QMetaObject::connectSlotsByName(Employe);
    } // setupUi

    void retranslateUi(QMainWindow *Employe)
    {
        Employe->setWindowTitle(QApplication::translate("Employe", "Employe", 0));
        Authentifier->setText(QApplication::translate("Employe", "S'authentifier", 0));
    } // retranslateUi

};

namespace Ui {
    class Employe: public Ui_Employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYE_H
