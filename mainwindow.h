#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "science.h"
#include "camera_feed.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double currentTime;
    double currentTime1;

private slots:


    void on_actionButton1_clicked();

    void on_actionButton2_clicked();
    void on_actionButton3_clicked();
    void on_actionButton4_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //double currentTime;
    SCIENCE *science;
    camera_feed *camera_feed1;

};
#endif // MAINWINDOW_H
