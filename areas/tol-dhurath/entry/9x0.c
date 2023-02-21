//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/landforms/mountain.c", "south");
    addFeature("/lib/environment/features/trees/pine-stand.c", "southwest");

    addExit("west", "/areas/tol-dhurath/entry/8x0.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
    addExit("east", "/areas/tol-dhurath/entry/10x0.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
}
