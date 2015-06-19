#-------------------------------------------------
#
# Project created by QtCreator 2015-05-11T10:02:20
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NEW
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myitem.cpp \
    logindialog.cpp \
    progressbar_thread.cpp \
    clickedlabel.cpp \
    lotterydialog.cpp \
    introdialog.cpp \
    seldialog.cpp \
    finaldialog.cpp \
    gamedialog.cpp

HEADERS  += widget.h \
    myitem.h \
    logindialog.h \
    progressbar_thread.h \
    clickedlabel.h \
    lotterydialog.h \
    introdialog.h \
    seldialog.h \
    finaldialog.h \
    gamedialog.h

FORMS    += widget.ui \
    logindialog.ui \
    lotterydialog.ui \
    introdialog.ui \
    seldialog.ui \
    finaldialog.ui \
    gamedialog.ui

RESOURCES += \
    image.qrc
