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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditUser;
    QPushButton *pushButtonConnexion;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *labelStatut;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(502, 228);
        LoginDialog->setAutoFillBackground(true);
        gridLayoutWidget = new QWidget(LoginDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 40, 421, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUser = new QLineEdit(gridLayoutWidget);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));

        gridLayout->addWidget(lineEditUser, 0, 1, 1, 1);

        pushButtonConnexion = new QPushButton(gridLayoutWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        gridLayout->addWidget(pushButtonConnexion, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(gridLayoutWidget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 1, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 101, 31));
        labelStatut = new QLabel(LoginDialog);
        labelStatut->setObjectName(QStringLiteral("labelStatut"));
        labelStatut->setGeometry(QRect(30, 190, 441, 21));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Login", 0));
        pushButtonConnexion->setText(QApplication::translate("LoginDialog", "Connexion", 0));
        label->setText(QApplication::translate("LoginDialog", "User", 0));
        label_2->setText(QApplication::translate("LoginDialog", "Password", 0));
        pushButton->setText(QApplication::translate("LoginDialog", "Annuler", 0));
        label_3->setText(QApplication::translate("LoginDialog", "Connexion", 0));
        labelStatut->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
