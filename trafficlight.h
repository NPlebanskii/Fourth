#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QWidget>

namespace Ui {
class TrafficLight;
}

class TrafficLight : public QWidget
{
    Q_OBJECT

public:
    explicit TrafficLight(QWidget *parent = 0);
    void runTraffic();
    ~TrafficLight();

private:
    Ui::TrafficLight *ui;
    bool run;

private slots:
    void start();
    void stop();

};

#endif // TRAFFICLIGHT_H
