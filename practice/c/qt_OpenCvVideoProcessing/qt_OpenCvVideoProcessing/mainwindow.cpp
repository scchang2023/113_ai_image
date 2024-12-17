#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <opencv2/opencv.hpp>
#include <qfiledialog.h>
#include <opencv2/imgproc/imgproc_c.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    videoOpened = false;
    videoPlaying = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
//---------------------------------//
void MainWindow::showMatFrame(Mat &frame)
{
    Mat tmpMat;
    Size dSize(ui->labelPic->width(),ui->labelPic->height());
    cv::resize(frame,tmpMat,dSize,INTER_LINEAR);
    cvtColor(tmpMat,tmpMat,COLOR_BGR2RGB);

    QImage img((uchar*)(tmpMat.data),tmpMat.cols,tmpMat.rows,QImage::Format_RGB888);
    ui->labelPic->setPixmap(QPixmap::fromImage(img));
}
//---------------------------------//
void MainWindow::openVideo()
{
    QString videoFilename;
    std::string sTmp;
    QFileDialog *d = new QFileDialog();
    if(d->exec()==QDialog::Accepted)
    {
        videoFilename = d->selectedFiles()[0];
        sTmp = (const char*)videoFilename.toLocal8Bit();
        vcap.open(sTmp.c_str());
        if(!vcap.isOpened())
            return;
        vcap >> currentFrame;
        showMatFrame(currentFrame);

        videoPlayerTimer = new QTimer(this);
        connect(videoPlayerTimer,SIGNAL(timeout()),this,SLOT(videoFrameRender()));

        totalFrame = vcap.get(CAP_PROP_FRAME_COUNT);
        frameRate = 1000.0 / vcap.get(CAP_PROP_FPS);
        currentFrameCnt = 0;
        videoOpened = true;
        videoPlaying = false;

        if(!faceCascade.load("c:/OpenCvMGW/cascadeClassifier/haarcascade_frontalface_alt2.xml"))
        {
            ui->labelResult->setText("face classifier load fail");
            faceClassifierOpened = false;
        }
        else
        {
            ui->labelResult->setText("ready");
            faceClassifierOpened = true;
        }

        webcamMode = false;
    }
}
//---------------------------------//
void MainWindow::playVideo()
{
    if(!videoOpened)
        return;

    if(!videoPlaying)
    {
        videoPlaying = true;
        videoPlayerTimer->start(frameRate);
    }
    else
    {
        videoPlaying = false;
        videoPlayerTimer->stop();
    }
}
//---------------------------------//
void MainWindow::videoFrameRender()
{
    if(!videoOpened)
        return;

    if((currentFrameCnt>totalFrame-1)&&!webcamMode)
        currentFrameCnt = 1;
    currentFrameCnt++;
    ui->labelFrameCnt->setText(QString::number(currentFrameCnt));
    vcap.set(CAP_PROP_POS_FRAMES,currentFrameCnt);
    vcap >> currentFrame;

    faceDetection(currentFrame);

    showMatFrame(currentFrame);
}
//---------------------------------//
void MainWindow::faceDetection(Mat &orgFrame)
{
    Mat grayFrame;
    if(!faceClassifierOpened)
        return;

    cvtColor(orgFrame,grayFrame,COLOR_BGR2GRAY);
    faceCascade.detectMultiScale(grayFrame,faces);

    if(faces.size()<=0)
    {
        ui->labelResult->setText("沒人臉");
    }
    else
    {
        ui->labelResult->setText(QString::number(faces.size())+" 張臉");
        for(size_t i = 0;i<faces.size();i++)
            rectangle(orgFrame,Point(faces[i].x,faces[i].y),
                      Point(faces[i].x+faces[i].width,faces[i].y+faces[i].height),
                      CV_RGB(255,0,0),3,CV_AA,0);
    }
}
//---------------------------------//
void MainWindow::openWebcam()
{
    vcap.open(0);
    if(!vcap.isOpened())
    {
        ui->labelResult->setText("No webcam");
        return;
    }
    vcap >> currentFrame;
    videoPlayerTimer = new QTimer(this);
    connect(videoPlayerTimer,SIGNAL(timeout()),this,SLOT(videoFrameRender()));
    showMatFrame(currentFrame);

    frameRate = 1000.0 / 30.0;
    currentFrameCnt = 0;
    videoOpened = true;
    videoPlaying = false;

    if(!faceCascade.load("c:/OpenCvMGW/cascadeClassifier/haarcascade_frontalface_alt2.xml"))
    {
        ui->labelResult->setText("face classifier load fail");
        faceClassifierOpened = false;
    }
    else
    {
        ui->labelResult->setText("ready");
        faceClassifierOpened = true;
    }

    webcamMode = true;
}
//---------------------------------//



