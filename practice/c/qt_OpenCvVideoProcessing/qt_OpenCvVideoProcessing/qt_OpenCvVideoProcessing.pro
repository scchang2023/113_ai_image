QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += C:\openCvMGW_x64_412\include\opencv\
               C:\openCvMGW_x64_412\include\opencv2\
               C:\openCvMGW_x64_412\include

LIBS += C:\openCvMGW_x64_412\lib\libopencv_core412.dll.a\
        C:\openCvMGW_x64_412\lib\libopencv_highgui412.dll.a\
        C:\openCvMGW_x64_412\lib\libopencv_videoio412.dll.a\
        C:\openCvMGW_x64_412\lib\libopencv_imgproc412.dll.a\
        C:\openCvMGW_x64_412\lib\libopencv_objdetect412.dll.a

#INCLUDEPATH += /usr/local/include/opencv4

#LIBS += -L/usr/local/lib -lopencv_core -lopencv_highgui -lopencv_videoio -lopencv_imgproc -lopencv_objdetect


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
