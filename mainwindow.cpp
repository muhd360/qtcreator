 #include "mainwindow.h"
//#include <iostream>
//using namespace std;
#include "ui_mainwindow.h"
#include <QStringList>
#include <QProcess>
//#include <cstdlib>
#include <QToolButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create a custom dropdown widget to hold buttons
    QMenu* buttonMenu = new QMenu(this);

    QAction* actionButton1 = new QAction("LAUNCH SCIENCE", this);
    connect(actionButton1, &QAction::triggered, this, &MainWindow::on_actionButton1_clicked);
    buttonMenu->addAction(actionButton1);

    QAction* actionButton2 = new QAction("AUTONOMUS", this);
    connect(actionButton2, &QAction::triggered, this, &MainWindow::on_actionButton2_clicked);
    buttonMenu->addAction(actionButton2);

    QAction* actionButton3 = new QAction("RECON MISSION", this);
    connect(actionButton3, &QAction::triggered, this, &MainWindow::on_actionButton3_clicked);
    buttonMenu->addAction(actionButton3);

    QAction* actionButton4 = new QAction("INSTRUMENT DEPLOYMENT", this);
    connect(actionButton4, &QAction::triggered, this, &MainWindow::on_actionButton4_clicked);
    buttonMenu->addAction(actionButton4);


    QToolButton* comboBoxButton = new QToolButton(this);
    comboBoxButton->setText("Select");
    comboBoxButton->setMenu(buttonMenu);
    comboBoxButton->setPopupMode(QToolButton::InstantPopup);


    // Place the button in the layout or wherever it should be displayed
    // For example:
    QVBoxLayout* layout = new QVBoxLayout(ui->centralwidget);

    // Add a stretch to the layout to center the button vertically
    layout->addStretch();

    // Add the button to the layout
    layout->addWidget(comboBoxButton, 0, Qt::AlignCenter); // Set alignment to center

    // Add another stretch to center the button horizontally
    layout->addStretch();

    // Apply the layout to the central widget
    ui->centralwidget->setLayout(layout);

    // Increase the size of the button (for example, doubling its size)
    comboBoxButton->setFixedSize(comboBoxButton->sizeHint() *4);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionButton1_clicked()
{
    science = new SCIENCE(this);
    science->show();

}




void MainWindow::on_actionButton2_clicked()
{
    camera_feed1 = new camera_feed(this);
    camera_feed1->show();

}
void MainWindow::on_actionButton3_clicked()
{


}
void MainWindow::on_actionButton4_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
//    system(("gnome-terminal -- bash -c 'source /opt/ros/noetic/setup.bash ;roscore'&"));
   // system(("gnome-terminal -- bash -c 'source /opt/ros/noetic/setup.bash ; python3 hi.py'&"));
    system("gnome-terminal -- bash -c 'python3 /home/muhd/catkin_ws/src/final-robotics; exec bash'&");

}
