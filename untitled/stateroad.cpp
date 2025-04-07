#include "stateroad.h"
#include <QPen>

StateRoad::StateRoad(City* city1, City* city2) : Street(city1, city2) {}

void StateRoad::draw(QGraphicsScene &scene)
{
    QPen pen(Qt::green);
    pen.setWidth(2);
    scene.addLine(city1->getX(), city1->getY(), city2->getX(), city2->getY(), pen);


}

double StateRoad::getSpeed() const
{
    return 50.0;
}
