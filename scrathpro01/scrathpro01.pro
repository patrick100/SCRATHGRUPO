#-------------------------------------------------
#
# Project created by QtCreator 2015-07-07T11:10:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scrathpro01
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    girarder.cpp \
    mover.cpp \
    gato.cpp \
    sprites.cpp \
    ventana.cpp \
    posicion.cpp \
    ventanacat.cpp \
    ventanabotones.cpp

HEADERS  += mainwindow.h \
    gato.h \
    girarder.h \
    sprites.h \
    mover.h \
    ventana.h \
    posicion.h \
    ventanacat.h \
    ventanabotones.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc