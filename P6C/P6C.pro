TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        main.cpp \
        movimiento.cpp \
        sistema.cpp

HEADERS += \
    movimiento.h \
    sistema.h

QT += widgets
