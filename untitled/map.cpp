#include "map.h"
#include <QDebug>

Map::Map()
{
}

Map::~Map()
{
    for (City* city : cities) {
        delete city;
    }
    for (Street* street : streets) {
        delete street;
    }
}

void Map::addCity(City* city)
{
    cities.append(city);
    qDebug() << "Added city:" << city->getName();
}

bool Map::addStreet(Street* street)
{
    // Şehirlerin haritada olup olmadığını kontrol edin
    if (cities.contains(street->getCity1()) && cities.contains(street->getCity2())) {
        streets.append(street);
        qDebug() << "Added street between:" << street->getCity1()->getName() << "and" << street->getCity2()->getName();
        return true;
    } else {
        qDebug() << "Street not added. One or both cities not found in the map.";
        return false;
    }
}

void Map::draw(QGraphicsScene& scene)
{
    for (City* city : cities)
    {
        city->draw(scene);
    }
    for (Street* street : streets)
    {
        street->draw(scene);
    }
}



City* Map::findCity(const QString cityName) const {
    for (City* city : cities) {
        if (city->getName() == cityName) {

            return city;
        }
    }
    return nullptr;
}

QVector<City*> Map::getCityList() {

    return cities;

}

QVector<Street*> Map::getStreetList(const City* city) const {
    QVector<Street*> cityStreets;
    for (Street* street : streets) {
        if (street->getCity1() == city || street->getCity2() == city) {
            cityStreets.append(street);
        }
    }
    return cityStreets;
}

City* Map::getOppositeCity(const Street* street, const City* city) const {
    if (street->getCity1() == city) {
        return street->getCity2();
    } else if (street->getCity2() == city) {
        return street->getCity1();
    }
    return nullptr;
}

double Map::getLength(const Street* street) const {
    return street->getLength();
}

void Map::deleteCities(){


    cities.clear();

    streets.clear();

}

double Map::getTime(const Street *street) const{


    return street->getTime();

}



