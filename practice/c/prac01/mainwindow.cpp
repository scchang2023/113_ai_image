#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate()
{
    int a = ui->edtA->text().toInt();
    int b = ui->edtB->text().toInt();

    double c = sqrt(pow(a,2)+pow(b,2));
    ui->labelResult->setText(QString::number(c));
}
