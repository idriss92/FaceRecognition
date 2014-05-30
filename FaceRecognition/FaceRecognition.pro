#-------------------------------------------------
#
# Project created by QtCreator 2014-05-18T13:32:14
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FaceRecognition
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    administration.cpp \
    employe.cpp \
    logindialog.cpp \
    listeemploye.cpp \
    ajouteremploye.cpp \
    ajouterdepartement.cpp

HEADERS  += mainwindow.h \
    administration.h \
    employe.h \
    logindialog.h \
    listeemploye.h \
    ajouteremploye.h \
    ajouterdepartement.h

FORMS    += mainwindow.ui \
    administration.ui \
    employe.ui \
    logindialog.ui \
    listeemploye.ui \
    ajouteremploye.ui \
    ajouterdepartement.ui
