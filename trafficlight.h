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
    ~TrafficLight();

signals:
    void stopSign(bool releaseButton);

private:
    Ui::TrafficLight *ui;


private slots:
    void start(bool run);
    void stopSlot(bool stop);

};

#endif // TRAFFICLIGHT_H
