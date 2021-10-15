//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/ravine-dry-creek.c", "south");

    addExit("east", "/areas/eledhel/west-rural/6x2.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
    addExit("north", "/areas/eledhel/west-rural/5x3.c");
    addFeature("/lib/environment/features/paths/path.c", "north");

    addRandomCreature(({"ruffian","fisher"}));
}
