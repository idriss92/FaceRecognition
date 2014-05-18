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
    logindialog.cpp

HEADERS  += mainwindow.h \
    administration.h \
    employe.h \
    logindialog.h

FORMS    += mainwindow.ui \
    administration.ui \
    employe.ui \
    logindialog.ui
