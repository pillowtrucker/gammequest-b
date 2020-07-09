//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/ruin-hallway.c");
    addFeature("/lib/environment/features/floors/ruined-marble-floor.c");
    addItem("/lib/environment/items/lighting/sconce.c", "east");
    addDecorator("ruined interior north entry alcove");

    addExitWithDoor("north", "/areas/tol-dhurath/temple-interior/3x5.c");
    addExit("south", "/areas/tol-dhurath/temple-interior/3x3.c");
}
