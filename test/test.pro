#-------------------------------------------------
#
# Project created by QtCreator 2016-05-20T11:15:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app

INCLUDEPATH += ../

SOURCES += main.cpp\
        mainwindow.cpp \
    ../recorderlineedit.cpp \
    ../recordkeypressform.cpp

HEADERS  += mainwindow.h \
    ../recorderlineedit.h \
    ../recordkeypressform.h

FORMS    += mainwindow.ui \
    ../recordkeypressform.ui

RESOURCES += \
    ../recordkeysequence.qrc
