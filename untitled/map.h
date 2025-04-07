#ifndef MAP_H
#define MAP_H

#include <QVector>
#include "abstractmap.h"
using namespace std;



class Map : public AbstractMap
{
public:
    Map();
    ~Map();
    void addCity(City* city) override;
    bool addStreet(Street* street) override;
    void draw(QGraphicsScene& scene) ;
    City* findCity(const QString cityName) const override;
    QVector<City*> getCityList()  ;
    QVector<Street*> getStreetList(const City* city) const override;
    City* getOppositeCity(const Street* street, const City* city) const override;
    double getLength(const Street* street) const override;
    void deleteCities();
    double getTime(const Street *street) const override;




private:
    QVector<City*> cities;
    QVector<Street*> streets;
};

#endif // MAP_H
