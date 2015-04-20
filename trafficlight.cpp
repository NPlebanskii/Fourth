#include "trafficlight.h"
#include "ui_trafficlight.h"
#include <QThread>

TrafficLight::TrafficLight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrafficLight)
{
    ui->setupUi(this);

    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(start()));
    connect(ui->stopButton, SIGNAL(clicked()), this, SLOT(stop()));

    runTraffic();

}

void TrafficLight::runTraffic()
{
    while(this->run)
    {
        QThread::sleep(1);
        ui->greenRadio->setChecked(true);
        QThread::sleep(1);
        ui->yellowRadio->setChecked(true);
        QThread::sleep(1);
        ui->redRadio->setChecked(true);
        QThread::sleep(1);
        ui->yellowRadio->setChecked(true);
    }
}

TrafficLight::~TrafficLight()
{
    delete ui;
}

void TrafficLight::stop()
{
    this->run = false;
}

void TrafficLight::start()
{
    this->run = true;
}
