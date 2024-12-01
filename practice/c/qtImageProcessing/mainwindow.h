#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QImage *orgImg;
    QImage *showImg;
    QImage *adjustedImg;
    bool imageOpened;

public slots:
    void openImage();
    void brightAdjust();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


