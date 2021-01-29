TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    Correc_Prof/game.cpp \
    Correc_Prof/gridmanagement.cpp \
    Correc_Prof/params.cpp \
    Nos_Fichiers/game1v1.cpp \
    Nos_Fichiers/grid.cpp \
    Nos_Fichiers/mapsolo1v1.cpp \
    Nos_Fichiers/parameter.cpp \
    Nos_Fichiers/sologame.cpp \
    Nos_Fichiers/sologrid.cpp \
    main.cpp

DISTFILES += \
    Nos_fichiers/config.yaml

HEADERS += \
    Correc_Prof/game.h \
    Correc_Prof/gridmanagement.h \
    Correc_Prof/gridmanagementsolo.h \
    Correc_Prof/maps.h \
    Correc_Prof/params.h \
    Correc_Prof/type.h \
    Nos_Fichiers/detail.h \
    Nos_Fichiers/game1v1.h \
    Nos_Fichiers/gridmanagement.h \
    Nos_Fichiers/gridmanagementsolo.h \
    Nos_Fichiers/mapsolo1v1.h \
    Nos_Fichiers/parameter.h
