#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <opencv2/opencv.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showMatFrame(Mat &frame)
{
    Mat tmpMat;
    Size dSize(ui->labelPic->width(),ui->labelPic->height());
    cv::resize(frame,tmpMat,dSize,INTER_LINEAR);
    cvtColor(tmpMat,tmpMat,COLOR_BGR2RGB);

    QImage img((uchar*)(tmpMat.data),tmpMat.cols,tmpMat.rows,QImage::Format_RGB888);
    ui->labelPic->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::openImage()
{
    QString ImageFileName;
    std::string sTmp;
    QFileDialog *d = new QFileDialog();
    if(d->exec()==QDialog::Accepted)
    {
        ImageFileName = d->selectedFiles()[0];
        sTmp = (const char*)ImageFileName.toLocal8Bit();
        orgImage = imread(sTmp.c_str(),IMREAD_COLOR);
        showMatFrame(orgImage);
        imageOpened = true;
    }
}

void MainWindow::brightAndContrast()
{
    if(!imageOpened)
        return;
    alpha = ui->sliderAlpha->value()*0.01;
    beta = ui->sliderBeta->value();
    ui->labelAlpha->setText(QString::number(alpha));
    ui->labelBeta->setText(QString::number(beta));
    orgImage.convertTo(adjustedImage,-1,alpha,beta);
    showMatFrame(adjustedImage);
}

void MainWindow::saveImage()
{
    if(!imageOpened)
        return;

    QString imageSaveFileName;
    imageSaveFileName = QFileDialog::getSaveFileName(this);

    if(imageSaveFileName.isEmpty())
        return;

    std::string sTmp = (const char*)imageSaveFileName.toLocal8Bit();
    imwrite(sTmp.c_str(),adjustedImage);
}


















