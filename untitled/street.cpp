#include "street.h"
#include <QGraphicsLineItem>
#include <QPen>
#include <QDebug>

Street::Street(City* city1, City* city2) : city1(city1), city2(city2) {

}



Street::~Street(){

    qDebug() << "Street Destroyed: " << city1 << city2;

}

void Street::draw(QGraphicsScene& scene)
{
    QPen pen(Qt::blue);
    pen.setWidth(2);
    scene.addLine(city1->getX(), city1->getY(), city2->getX(), city2->getY(), pen);
    qDebug() << "Street drawn between:" << city1->getName() << "and" << city2->getName();


}

City* Street::getCity1() const
{
    return city1;
}

City* Street::getCity2() const
{
    return city2;
}

double Street::getLength() const
{


    int lengthX = (city1->getX()-city2->getX());
    int lengthY = (city1->getY()-city2->getY());

    double length = sqrt((lengthX*lengthX)+(lengthY*lengthY));

        return length;
}

QGraphicsLineItem* Street::drawRed(QGraphicsScene &scene)
{
    QPen pen(Qt::red);
    pen.setWidth(3);
    return scene.addLine(city1->getX(), city1->getY(), city2->getX(), city2->getY(), pen);
}
double Street::getTime() const
{
    return getLength() / getSpeed();
}
