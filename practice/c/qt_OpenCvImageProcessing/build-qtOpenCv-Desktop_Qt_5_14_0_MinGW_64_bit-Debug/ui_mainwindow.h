/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelPic;
    QPushButton *pushButton;
    QSlider *sliderAlpha;
    QSlider *sliderBeta;
    QLabel *labelBeta;
    QLabel *labelAlpha;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 570);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelPic = new QLabel(centralwidget);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setGeometry(QRect(150, 20, 720, 480));
        labelPic->setFrameShape(QFrame::Box);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        sliderAlpha = new QSlider(centralwidget);
        sliderAlpha->setObjectName(QString::fromUtf8("sliderAlpha"));
        sliderAlpha->setGeometry(QRect(10, 50, 101, 22));
        sliderAlpha->setMinimum(0);
        sliderAlpha->setMaximum(200);
        sliderAlpha->setSingleStep(2);
        sliderAlpha->setSliderPosition(100);
        sliderAlpha->setOrientation(Qt::Horizontal);
        sliderBeta = new QSlider(centralwidget);
        sliderBeta->setObjectName(QString::fromUtf8("sliderBeta"));
        sliderBeta->setGeometry(QRect(10, 80, 101, 22));
        sliderBeta->setMinimum(-128);
        sliderBeta->setMaximum(128);
        sliderBeta->setOrientation(Qt::Horizontal);
        labelBeta = new QLabel(centralwidget);
        labelBeta->setObjectName(QString::fromUtf8("labelBeta"));
        labelBeta->setGeometry(QRect(120, 80, 21, 16));
        labelAlpha = new QLabel(centralwidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));
        labelAlpha->setGeometry(QRect(120, 50, 21, 16));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 120, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(openImage()));
        QObject::connect(sliderAlpha, SIGNAL(valueChanged(int)), MainWindow, SLOT(brightAndContrast()));
        QObject::connect(sliderBeta, SIGNAL(valueChanged(int)), MainWindow, SLOT(brightAndContrast()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(saveImage()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelPic->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        labelBeta->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelAlpha->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
