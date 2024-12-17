#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#include <opencv2/opencv.hpp>
#include <QTimer>
using namespace cv;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void showMatFrame(Mat &Frame);
    bool videoOpened;
    bool videoPlaying;
    QTimer *videoPlayerTimer;
    VideoCapture vcap;
    Mat currentFrame;
    int currentFrameCnt;
    int totalFrame;
    double frameRate;

    bool faceClassifierOpened;
    CascadeClassifier faceCascade;
    std::vector<Rect> faces;
    void faceDetection(Mat &orgFrame);
    bool webcamMode;

public slots:
    void openVideo();
    void playVideo();
    void videoFrameRender();
    void openWebcam();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


