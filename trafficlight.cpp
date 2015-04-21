#include "trafficlight.h"
#include "ui_trafficlight.h"
#include <QThread>

TrafficLight::TrafficLight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrafficLight)
{
    ui->setupUi(this);

    ui->startButton->setCheckable(true);
    ui->stopButton->setCheckable(true);

    connect(ui->startButton, SIGNAL(toggled(bool)), this, SLOT(start(bool)));
    connect(ui->stopButton, SIGNAL(toggled(bool)), this, SLOT(stopSlot(bool)));
    connect(this, SIGNAL(stopSign(bool)), ui->startButton, SLOT(setChecked(bool)));

}

TrafficLight::~TrafficLight()
{
    delete ui;
}

void TrafficLight::start(bool run)
{
    /*while(this->run)
    {
        QThread::sleep(1);
        ui->greenRadio->setChecked(true);
        QThread::sleep(1);
        ui->yellowRadio->setChecked(true);
        QThread::sleep(1);
        ui->redRadio->setChecked(true);
        QThread::sleep(1);
        ui->yellowRadio->setChecked(true);
    }*/
}

void TrafficLight::stopSlot(bool stop)
{
    emit stopSign(!stop);
}
