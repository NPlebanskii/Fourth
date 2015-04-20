#include "trafficlight.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TrafficLight w;
    w.show();

    return a.exec();
}
