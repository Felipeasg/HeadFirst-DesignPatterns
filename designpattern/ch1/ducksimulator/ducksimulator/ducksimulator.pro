QT += core
QT -= gui

TARGET = ducksimulator
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    duck.cpp \
    typesofquackbehavior.cpp \
    typesoffly.cpp \
    mallardduck.cpp \
    duckmodel.cpp

HEADERS += \
    duck.h \
    flybehavior.h \
    quackbehavior.h \
    typesofquackbehavior.h \
    mallardduck.h \
    typesofflybehavior.h \
    duckmodel.h

