QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    capot.cpp \
    codeur.cpp \
    main.cpp \
    equilibreuse.cpp \
    mcculdaq.cpp \
    moteur.cpp

HEADERS += \
    capot.h \
    codeur.h \
    constantes.h \
    equilibreuse.h \
    mcculdaq.h \
    moteur.h

FORMS += \
    equilibreuse.ui

TRANSLATIONS += \
    CommandeMoteur_MesureVitesse_etu_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += /usr/local/lib/libuldaq.a
LIBS += -lusb-1.0
