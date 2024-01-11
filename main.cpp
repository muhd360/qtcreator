#include "mainwindow.h"
//#include "ros/ros.h"
//#include "std_msgs/String.h"
#include <QApplication>


#include <sstream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
