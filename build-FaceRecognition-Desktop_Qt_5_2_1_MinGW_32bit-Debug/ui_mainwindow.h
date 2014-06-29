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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelEntree;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonEmploye;
    QPushButton *pushButtonAdmin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(557, 487);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelEntree = new QLabel(centralWidget);
        labelEntree->setObjectName(QStringLiteral("labelEntree"));
        labelEntree->setEnabled(true);
        labelEntree->setGeometry(QRect(140, 0, 301, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        labelEntree->setFont(font);
        labelEntree->setMidLineWidth(2);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 60, 491, 351));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonEmploye = new QPushButton(verticalLayoutWidget);
        pushButtonEmploye->setObjectName(QStringLiteral("pushButtonEmploye"));
        QIcon icon;
        icon.addFile(QStringLiteral("../icons/employe_2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEmploye->setIcon(icon);
        pushButtonEmploye->setIconSize(QSize(217, 194));

        verticalLayout_3->addWidget(pushButtonEmploye);

        pushButtonAdmin = new QPushButton(verticalLayoutWidget);
        pushButtonAdmin->setObjectName(QStringLiteral("pushButtonAdmin"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icons/acc\303\251s-compte-administrateur.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdmin->setIcon(icon1);
        pushButtonAdmin->setIconSize(QSize(183, 83));

        verticalLayout_3->addWidget(pushButtonAdmin);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 25));
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
        labelEntree->setText(QApplication::translate("MainWindow", "Face Recognition", 0));
        pushButtonEmploye->setText(QApplication::translate("MainWindow", "Employe", 0));
        pushButtonAdmin->setText(QApplication::translate("MainWindow", "ADMIN", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
