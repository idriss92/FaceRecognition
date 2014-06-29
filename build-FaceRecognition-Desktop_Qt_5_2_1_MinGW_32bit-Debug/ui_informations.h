/********************************************************************************
** Form generated from reading UI file 'informations.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONS_H
#define UI_INFORMATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Informations
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Informations)
    {
        if (Informations->objectName().isEmpty())
            Informations->setObjectName(QStringLiteral("Informations"));
        Informations->resize(313, 100);
        centralwidget = new QWidget(Informations);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 10, 71, 31));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(80, 10, 141, 31));
        Informations->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Informations);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 313, 25));
        Informations->setMenuBar(menubar);
        statusbar = new QStatusBar(Informations);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Informations->setStatusBar(statusbar);

        retranslateUi(Informations);

        QMetaObject::connectSlotsByName(Informations);
    } // setupUi

    void retranslateUi(QMainWindow *Informations)
    {
        Informations->setWindowTitle(QApplication::translate("Informations", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Informations", "OK", 0));
        textBrowser->setHtml(QApplication::translate("Informations", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Fin d'aquisition</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Informations: public Ui_Informations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONS_H
