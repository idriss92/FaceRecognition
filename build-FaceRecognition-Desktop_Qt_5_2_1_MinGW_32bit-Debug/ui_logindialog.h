/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBoxSignIn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonConnexion;
    QLabel *labelStatut;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(468, 354);
        LoginDialog->setAutoFillBackground(true);
        groupBoxSignIn = new QGroupBox(LoginDialog);
        groupBoxSignIn->setObjectName(QStringLiteral("groupBoxSignIn"));
        groupBoxSignIn->setGeometry(QRect(90, 70, 271, 181));
        label = new QLabel(groupBoxSignIn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 51, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(groupBoxSignIn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 81, 16));
        label_2->setFont(font);
        lineEditUser = new QLineEdit(groupBoxSignIn);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setGeometry(QRect(130, 40, 121, 20));
        lineEditPassword = new QLineEdit(groupBoxSignIn);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(130, 100, 121, 20));
        pushButtonConnexion = new QPushButton(groupBoxSignIn);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(110, 150, 75, 23));
        labelStatut = new QLabel(LoginDialog);
        labelStatut->setObjectName(QStringLiteral("labelStatut"));
        labelStatut->setGeometry(QRect(40, 290, 111, 21));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Login", 0));
        groupBoxSignIn->setTitle(QApplication::translate("LoginDialog", "Sign In", 0));
        label->setText(QApplication::translate("LoginDialog", "User", 0));
        label_2->setText(QApplication::translate("LoginDialog", "Password", 0));
        pushButtonConnexion->setText(QApplication::translate("LoginDialog", "Connexion", 0));
        labelStatut->setText(QApplication::translate("LoginDialog", "Statut", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
