//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/canyon-stream.c", "south");
    addFeature("/lib/environment/features/trees/hemlock-stand.c", "south");

    addExit("west", "/areas/eledhel/west-rural/3x9.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("south", "/areas/eledhel/west-rural/4x8.c");
    addFeature("/lib/environment/features/paths/path.c", "south");
}
