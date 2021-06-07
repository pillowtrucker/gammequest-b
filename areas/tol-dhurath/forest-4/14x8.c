//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/generatedEnvironment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setTerrain("/lib/environment/terrain/forest.c");
    addFeature("/lib/environment/features/water/brook.c", "east");
    addFeature("/lib/environment/features/landforms/knoll.c", "east");

    addExit("east", "/areas/tol-dhurath/forest-4/15x8.c");
    addFeature("/lib/environment/features/paths/path.c", "east");

    addRandomCreature(({"zombie","muskrat","gopher","weasel","brown bear","gray wolf"}));
}
