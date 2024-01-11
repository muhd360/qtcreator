#include "science.h"
#include "ui_science.h"

SCIENCE::SCIENCE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SCIENCE)
{
    ui->setupUi(this);
    ui->QCustomPlot1->hide();

    // Setup graph for qcustomplot1
    ui->QCustomPlot1->addGraph();
    ui->QCustomPlot1->xAxis->setLabel("Time");
    ui->QCustomPlot1->xAxis->setRange(0, 70);
    ui->QCustomPlot1->yAxis->setLabel("Sensor Output");
    ui->QCustomPlot1->yAxis->setRange(0, 100);

    // Setup graph for dht11
    ui->dht11->addGraph();
    ui->dht11->xAxis->setLabel("Time");
    ui->dht11->xAxis->setRange(0, 70);
    ui->dht11->yAxis->setLabel("Sensor Output");
    ui->dht11->yAxis->setRange(0, 100);

    // Initialize times
    currentTime = 0.0;
    currentTime1 = 0.0;

    // Initialize QTimer for qcustomplot1 updates
    myTimer = new QTimer(this);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(updateDiagram()));
    myTimer->start(250);

    // Initialize QTimer for dht11 updates
    myTimer2 = new QTimer(this);
    connect(myTimer2, SIGNAL(timeout()), this, SLOT(updateDiagram1()));
    myTimer2->start(250);
    updateDiagram();
}

void SCIENCE::updateDiagram() {
    // Ensure QCustomPlot1 is not null and is properly initialized in the UI
    if (ui->QCustomPlot1) {
        currentTime += 0.25;
        double x = 35.00;
        ui->QCustomPlot1->graph(0)->addData(currentTime, x);

        if (currentTime > 60)
            ui->QCustomPlot1->xAxis->setRange(currentTime - 60, currentTime + 10);

        ui->QCustomPlot1->replot();
    }
}

void SCIENCE::updateDiagram1() {
    currentTime1 += 0.5;
    double y = 59.00;
    ui->dht11->graph(0)->addData(currentTime1, y);
    if (currentTime1 > 60)
        ui->dht11->xAxis->setRange(currentTime1 - 60, currentTime1 + 10);
    ui->dht11->replot();
}

SCIENCE::~SCIENCE() {
    delete ui;
    delete myTimer;
    delete myTimer2;
}

void SCIENCE::MQ135_1() {
    // Implementation for MQ135_1 function
}

void SCIENCE::MQ135_2() {
    // Implementation for MQ135_2 function
}

void SCIENCE::BMP180() {
    // Implementation for BMP180 function
}

void SCIENCE::Loadcell1() {
    // Implementation for Loadcell1 function
}

void SCIENCE::SHT10_1() {
    // Implementation for SHT10_1 function
}

void SCIENCE::SHT10_2() {
    // Implementation for SHT10_2 function
}
