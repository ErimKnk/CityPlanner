#ifndef STATEROAD_H
#define STATEROAD_H

#include "street.h"

class StateRoad : public Street
{
public:
    StateRoad(City* city1, City* city2);
    void draw(QGraphicsScene &scene) override;
    double getSpeed() const override;  // Hız fonksiyonunu geçersiz kılma
};

#endif // STATEROAD_H
