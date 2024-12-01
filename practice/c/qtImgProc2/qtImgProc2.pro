#-------------------------------------------------
#
# Project created by QtCreator 2024-12-01T21:00:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtImgProc2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:\openCvMGWx86\include\opencv\
                                    C:\openCvMGWx86\include\opencv2\
                                    C:\openCvMGWx86\include

LIBS += C:\openCvMGWx86\lib\libopencv_core2413.dll.a\
                C:\openCvMGWx86\lib\libopencv_highgui2413.dll.a\
