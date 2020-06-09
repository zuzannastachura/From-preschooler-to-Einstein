#-------------------------------------------------
#
# Project created by QtCreator 2020-03-27T15:54:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = count
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    dialog1.cpp \
    dialog4.cpp \
        main.cpp \
        mainwindow.cpp \
    mywidget.cpp \
    mygreenwidget.cpp \
    mydialog.cpp \
    dialog2.cpp \
    dialog3.cpp

HEADERS += \
    dialog1.h \
    dialog4.h \
        mainwindow.h \
    mywidget.h \
    mygreenwidget.h \
    mydialog.h \
    dialog2.h \
    dialog3.h

FORMS += \
    dialog1.ui \
    dialog4.ui \
        mainwindow.ui \
    mydialog.ui \
    dialog2.ui \
    dialog3.ui

RESOURCES += \
    img.qrc
