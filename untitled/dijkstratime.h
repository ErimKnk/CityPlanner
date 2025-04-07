#ifndef DIJKSTRATIME_H
#define DIJKSTRATIME_H
#include "abstractmap.h"
class dijkstratime
{
public:

    static QVector<Street*> search(const AbstractMap &map, QString start, QString target);


private:

    dijkstratime();
};

#endif // DIJKSTRATIME_H
