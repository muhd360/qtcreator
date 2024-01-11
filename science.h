#ifndef SCIENCE_H
#define SCIENCE_H

#include <QMainWindow>
#include <qtimer.h>
#include "qcustomplot.h"
#include <QScrollBar>
#include <QWidget>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QLabel>
//#include <std_msgs/String.h>
namespace Ui {
class SCIENCE;
}

class SCIENCE : public QMainWindow
{
    Q_OBJECT

public:
    explicit SCIENCE(QWidget *parent = nullptr);
    ~SCIENCE();
public slots:
    void spinOnce();

private:
    Ui::SCIENCE *ui;
    //double Time;
    QTimer *myTimer;
    QTimer *myTimer2;
    QTimer *myTimer3;
    QTimer *myTimer4;
    QTimer *myTimer5;
    QTimer *myTimer6;
    QTimer *myTimer7;
    QTimer *myTimer8;
    double currentTime;
    double currentTime1;
    double currentTime2;
    double currentTime3;
    double currentTime4;
    double currentTime5;
    double currentTime6;
    double currentTime7;
    QScrollArea *SA;
    QWidget *d_scroll_area_widget;
    //ros::NodeHandle nh;
    //ros::Subscriber ros_subscriber;
    //QTimer *ros_timer;

        // ROS callback function for receiving messages





private slots:
    void updateDiagram();
    void updateDiagram1();
    //void rosCallback(const std_msgs::Float64::ConstPtr& msg);

    //void togglePlotVisibility();

    void MQ135_1();
    void MQ135_2();
    void BMP180();
    void Loadcell1();
    void SHT10_1();
    void SHT10_2();
    void UM();
};

#endif // SCIENCE_H
