#ifndef STREET_H
#define STREET_H

#include "city.h"
#include <QGraphicsScene>
#include <cmath>

class Street
{
public:
    Street(City* city1, City* city2);
    virtual ~Street();
    virtual void draw(QGraphicsScene& scene);

    City* getCity1() const;
    City* getCity2() const;
    double getLength() const;
     QGraphicsLineItem* drawRed(QGraphicsScene &scene);
    virtual double getSpeed() const = 0;
    double getTime() const ;


protected:
    City* city1;
    City* city2;
};

#endif // STREET_H
