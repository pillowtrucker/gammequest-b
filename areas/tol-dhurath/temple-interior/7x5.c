//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setStateMachine("/areas/tol-dhurath/state-machine/tol-dhurath-quest.c");

    setTerrain("/lib/environment/terrain/ruin-exterior.c");
    addDecorator("ruined interior courtyard with path");

    addExit("west", "/areas/tol-dhurath/temple-interior/6x5.c");
    addExit("east", "/areas/tol-dhurath/temple-interior/8x5.c");
    addExit("north", "/areas/tol-dhurath/temple-interior/7x6.c");
    addExit("south", "/areas/tol-dhurath/temple-interior/7x4.c");
}
