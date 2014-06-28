#-------------------------------------------------
#
# Project created by QtCreator 2014-05-18T13:32:14
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FaceRecognition
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    administration.cpp \
    employe.cpp \
    logindialog.cpp \
    listeemploye.cpp \
    ajouteremploye.cpp \
    ajouterdepartement.cpp \
    recognizer.cpp \
    rec.cpp \
    capture.cpp \
    main.cpp \
    personne.cpp \
    service.cpp \
    identifier.cpp \
    informations.cpp

HEADERS  += mainwindow.h \
    administration.h \
    employe.h \
    logindialog.h \
    listeemploye.h \
    ajouteremploye.h \
    ajouterdepartement.h \
    recognizer.h \
    rec.h \
    capture.h \
    personne.h \
    service.h \
    identifier.h \
    informations.h

FORMS    += mainwindow.ui \
    administration.ui \
    logindialog.ui \
    listeemploye.ui \
    ajouteremploye.ui \
    ajouterdepartement.ui \
    recognize.ui \
    identifier.ui \
    employe.ui \
    informations.ui


INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib \
-lopencv_core \
-lopencv_imgproc \
-lopencv_highgui \
-lopencv_ml \
-lopencv_video \
-lopencv_features2d \
-lopencv_calib3d \
-lopencv_objdetect \
-lopencv_contrib \
-lopencv_legacy \
-lopencv_flann
