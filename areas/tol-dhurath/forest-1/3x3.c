//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/hickory-stand.c", "north");
    addFeature("/lib/environment/features/water/gorge-creek.c", "south");
    addFeature("/lib/environment/features/landforms/combe.c", "northwest");

    addExit("south", "/areas/tol-dhurath/forest-1/3x2.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
    addExit("north", "/areas/tol-dhurath/forest-1/3x4.c");
    addFeature("/lib/environment/features/paths/path.c", "north");
}
