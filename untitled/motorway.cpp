#include "motorway.h"
#include <QPen>

Motorway::Motorway(City* city1, City* city2) : Street(city1, city2) {}

void Motorway::draw(QGraphicsScene &scene)
{
    QPen pen(Qt::darkMagenta);
    pen.setWidth(3);
    scene.addLine(city1->getX(), city1->getY(), city2->getX(), city2->getY(), pen);


}

double Motorway::getSpeed() const
{
    return 130.0;
}
