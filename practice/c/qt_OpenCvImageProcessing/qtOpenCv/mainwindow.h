#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#include <opencv2/opencv.hpp>
using namespace cv;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showMatFrame(Mat &frame);
    bool imageOpened;
    Mat orgImage;

    Mat adjustedImage;
    double alpha;
    int beta;

public slots:
    void openImage();
    void brightAndContrast();
    void saveImage();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H



