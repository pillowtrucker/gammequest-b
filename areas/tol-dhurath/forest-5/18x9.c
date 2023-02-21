//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/trees/ash-stand.c", "southeast");

    addExit("east", "/areas/tol-dhurath/forest-5/19x9.c");
    addFeature("/lib/environment/features/paths/path.c", "east");
    addExit("west", "/areas/tol-dhurath/forest-5/17x9.c");
    addFeature("/lib/environment/features/paths/path.c", "west");
}
