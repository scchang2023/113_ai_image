#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    short s = -32766;
    float f = 4.4E+38;
    s = s-4;
    f = f*2;
    ui->labelIntOverflow->setText(QString::number(s));
    ui->labelFloatOverflow->setText(QString::number(s));
}

MainWindow::~MainWindow()
{
    delete ui;
}
