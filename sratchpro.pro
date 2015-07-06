#-------------------------------------------------
#
# Project created by QtCreator 2015-07-06T12:50:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sratchpro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gato.cpp \
    girarder.cpp \
    girarizq.cpp \
    mover.cpp \
    ventana.cpp

HEADERS  += mainwindow.h \
    gato.h \
    girarder.h \
    girarizq.h \
    mover.h \
    ventana.h

FORMS    += mainwindow.ui

SUBDIRS += \
    scratch.pro

DISTFILES +=

RESOURCES += \
    imagen.qrc
