#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opencv/highgui.h"

#include <QFileDialog>
#include <QImage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    IplImage *img = cvLoadImage("D:/WORK/113_ai_image/practice/c/qtImgProc2/test1.jpg");
    cvNamedWindow("a");
    cvShowImage("a", img);
    cvWaitKey(0);

    imageOpened = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openImage()
{
    QString ImageFileName;
    QFileDialog *d = new QFileDialog();
    if(d->exec()==QDialog::Accepted)
    {
        ImageFileName = d->selectedFiles()[0];
        orgImg = new QImage();
        orgImg->load(ImageFileName);
        adjustedImg = new QImage(orgImg->width(),orgImg->height(),orgImg->format());
        showImg = new QImage(*orgImg);

        *showImg = showImg->scaled(ui->labelPic->size());
        ui->labelPic->setPixmap(QPixmap::fromImage(*showImg));
        ui->labelBrightAdjustValue->setText("0");
        ui->sliderImageBrightness->setSliderPosition(0);

        imageOpened = true;
    }
}

void MainWindow::brightAdjust()
{
    unsigned char *rgba;
    double adjustValue = ui->sliderImageBrightness->value();

    if(!imageOpened)
        return;

    adjustValue /=100.0;
    ui->labelBrightAdjustValue->setText(QString::number(adjustValue));

    rgba = orgImg->bits();
    int w = orgImg->width();
    int h = orgImg->height();

    for(int y=0;y<h;y++)
        for(int x=0;x<w*4;x+=4)
        {
            int r,g,b;
            r = rgba[y*w*4+x+2]*(1+adjustValue);
            (r>255)?r=255:r=r;
            (r<0)?r=0:r=r;
            g = rgba[y*w*4+x+1]*(1+adjustValue);
            (g>255)?g=255:g=g;
            (g<0)?g=0:g=g;
            b = rgba[y*w*4+x]*(1+adjustValue);
            (b>255)?b=255:b=b;
            (b<0)?b=0:b=b;

            adjustedImg->setPixel(x/4,y,qRgb(r,g,b));
        }

    *showImg = adjustedImg->scaled(ui->labelPic->width(),ui->labelPic->height());
    ui->labelPic->setPixmap(QPixmap::fromImage(*showImg));
}




























