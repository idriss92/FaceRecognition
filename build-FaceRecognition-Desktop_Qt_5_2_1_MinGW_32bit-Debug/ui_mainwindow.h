/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonAdmin;
    QPushButton *pushButtonEmploye;
    QLabel *labelEntree;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(777, 497);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonAdmin = new QPushButton(centralWidget);
        pushButtonAdmin->setObjectName(QStringLiteral("pushButtonAdmin"));
        pushButtonAdmin->setGeometry(QRect(80, 190, 261, 121));
        pushButtonEmploye = new QPushButton(centralWidget);
        pushButtonEmploye->setObjectName(QStringLiteral("pushButtonEmploye"));
        pushButtonEmploye->setGeometry(QRect(420, 190, 271, 121));
        labelEntree = new QLabel(centralWidget);
        labelEntree->setObjectName(QStringLiteral("labelEntree"));
        labelEntree->setEnabled(true);
        labelEntree->setGeometry(QRect(260, 50, 301, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        labelEntree->setFont(font);
        labelEntree->setMidLineWidth(2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FaceRecognition", 0));
        pushButtonAdmin->setText(QApplication::translate("MainWindow", "Administration", 0));
        pushButtonEmploye->setText(QApplication::translate("MainWindow", "Employe", 0));
        labelEntree->setText(QApplication::translate("MainWindow", "Gestionnaire", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
