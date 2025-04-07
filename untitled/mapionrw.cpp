///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXIV
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#include "mapionrw.h"
#include "stateroad.h"
#include "motorway.h"

MapIoNrw::MapIoNrw()
{
}

MapIoNrw::~MapIoNrw()
{
}

void MapIoNrw::fillMap(AbstractMap &map)
{
    City* aachen = new City("Aachen", -250,250);
    City* bonn = new City("Bonn", -60,250);
    City* koeln = new City("Köln", -75,200);
    City* duesseldorf = new City("Düsseldorf", -100,125);
    City* wuppertal = new City("Wuppertal", -50,100);
    City* duisburg = new City("Duisburg", -100,50);
    City* dortmund = new City("Dortmund", 0,0);
    City* muenster = new City("Münster", 50,-150);
    City* bilafat = new City("Bilafat", 200,-175);

    Street* aachenKoeln = new StateRoad(aachen, koeln);
    Street* bonnKoeln = new Motorway(bonn, koeln);
    Street* ddorfKoeln = new StateRoad(duesseldorf, koeln);
    Street* aachenBonn = new Motorway(aachen, bonn);
    Street* aachenDdorf = new StateRoad(aachen, duesseldorf);
    Street* koelnWper = new Motorway(koeln, wuppertal);
    Street* ddorfWper = new Motorway(duesseldorf, wuppertal);
    Street* ddorfDuis = new StateRoad(duesseldorf, duisburg);
    Street* wperDuis = new StateRoad(wuppertal, duisburg);
    Street* wperDort = new Motorway(wuppertal, dortmund);
    Street* duisDort = new StateRoad(duisburg, dortmund);
    Street* dortMünst = new Motorway(dortmund, muenster);
    Street* dortBilafat = new StateRoad(dortmund, bilafat);
    Street* muenstBilafat = new Motorway(muenster, bilafat);

    map.addCity(aachen);
    map.addCity(bonn);
    map.addCity(koeln);
    map.addCity(duesseldorf);
    map.addCity(wuppertal);
    map.addCity(duisburg);
    map.addCity(dortmund);
    map.addCity(muenster);
    map.addCity(bilafat);

    map.addStreet(aachenKoeln);
    map.addStreet(bonnKoeln);
    map.addStreet(ddorfKoeln);
    map.addStreet(aachenBonn);
    map.addStreet(aachenDdorf);
    map.addStreet(koelnWper);
    map.addStreet(ddorfWper);
    map.addStreet(ddorfDuis);
    map.addStreet(wperDuis);
    map.addStreet(wperDort);
    map.addStreet(duisDort);
    map.addStreet(dortMünst);
    map.addStreet(dortBilafat);
    map.addStreet(muenstBilafat);


}
