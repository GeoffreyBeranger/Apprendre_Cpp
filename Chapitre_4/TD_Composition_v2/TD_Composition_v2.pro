TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        capteurhumidite.cpp \
        main.cpp \
        td_agregation.cpp \
        vanne.cpp \
        zonearrosage.cpp

HEADERS += \
    capteurhumidite.h \
    td_agregation.h \
    vanne.h \
    zonearrosage.h
