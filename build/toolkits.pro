QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
OBJECTS_DIR = ../obj
MOC_DIR = ../moc
UI_DIR = ../ui
DESTDIR = ../bin

INCLUDEPATH += \
    ../src \

SOURCES += \
    ../src/common.cpp \
    ../src/main.cpp \
    ../src/mainwindow.cpp \
    ../src/wggeneratebugfolder.cpp \

HEADERS += \
    ../src/common.h \
    ../src/datadef.h \
    ../src/mainwindow.h \
    ../src/wggeneratebugfolder.h \

FORMS += \
    ../src/mainwindow.ui \
    ../src/wggeneratebugfolder.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
