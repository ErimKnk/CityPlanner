#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QGraphicsScene>
#include <QGraphicsTextItem>

class City
{
public:
    City(QString name, int x, int y);
    ~City();
    void draw(QGraphicsScene& scene);

    QString getName() const;
    int getX() const;  // Yeni ekleme
    int getY() const;  // Yeni ekleme


private:
    QString name;
    int x;
    int y;

};

#endif // CITY_H
