#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
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
