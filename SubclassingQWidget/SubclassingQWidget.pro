SOURCES += \
    main.cpp \
    window.cpp

HEADERS += \
    window.h

TARGET = window
TEMPLATE = app

QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
