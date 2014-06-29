/********************************************************************************
** Form generated from reading UI file 'identifier.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTIFIER_H
#define UI_IDENTIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_identifier
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QFrame *frame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *identifier)
    {
        if (identifier->objectName().isEmpty())
            identifier->setObjectName(QStringLiteral("identifier"));
        identifier->resize(481, 477);
        centralwidget = new QWidget(identifier);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 370, 131, 31));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 30, 371, 331));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        identifier->setCentralWidget(centralwidget);
        menubar = new QMenuBar(identifier);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 481, 25));
        identifier->setMenuBar(menubar);
        statusbar = new QStatusBar(identifier);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        identifier->setStatusBar(statusbar);

        retranslateUi(identifier);

        QMetaObject::connectSlotsByName(identifier);
    } // setupUi

    void retranslateUi(QMainWindow *identifier)
    {
        identifier->setWindowTitle(QApplication::translate("identifier", "MainWindow", 0));
        pushButton->setText(QApplication::translate("identifier", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class identifier: public Ui_identifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENTIFIER_H
