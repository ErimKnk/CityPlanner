#ifndef MOTORWAY_H
#define MOTORWAY_H

#include "street.h"

class Motorway : public Street
{
public:
    Motorway(City* city1, City* city2);
    void draw(QGraphicsScene &scene) override;
    double getSpeed() const override;
};

#endif // MOTORWAY_H
