QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change.cpp \
    change2.cpp \
    log.cpp \
    loginproject.cpp \
    main.cpp \
    login.cpp \
    register.cpp

HEADERS += \
    change.h \
    change2.h \
    log.h \
    login.h \
    loginproject.h \
    register.h

FORMS += \
    change.ui \
    change2.ui \
    log.ui \
    login.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
