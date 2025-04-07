///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1
//
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#ifndef MAPIONRW_H
#define MAPIONRW_H

#include "mapio.h"

/// This class provides a simple hardcoded Map.
class MapIoNrw : public MapIo
{
public:
    MapIoNrw();
    virtual ~MapIoNrw();

    virtual void fillMap(AbstractMap &map) override;
};

#endif // MAPIONRW_H
