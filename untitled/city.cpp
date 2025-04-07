#include "city.h"
#include <QGraphicsEllipseItem>
#include <QPen>
#include <QDebug>

City::City(QString name, int x, int y)
    : name(name), x(x), y(y)
{
}

City::~City()
{
    qDebug() << "City destroyed:" << name;
}

void City::draw(QGraphicsScene& scene)
{
    QPen pen(Qt::red);
    pen.setWidth(2);
    scene.addEllipse(x, y, 5, 5, pen, QBrush(Qt::red));
    scene.addText(name)->setPos(x + 5, y + 5);
    qDebug() << "City drawn:" << name << "at" << x << "," << y;
}



QString City::getName() const
{
    return name;
}

int City::getX() const
{
    return x;
}

int City::getY() const
{
    return y;
}

