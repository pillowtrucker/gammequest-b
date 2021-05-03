//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    cloneEnvironment();
    setInterior("/tutorial/temple/environment/interiors/pedestal-chamber.c");
    addFeature("/tutorial/temple/environment/features/amethyst-floor.c");
    addFeature("/tutorial/temple/environment/features/amethyst-ceiling.c");
    addFeature("/tutorial/temple/environment/features/purple-liquid.c");

    addDecorator("ruined interior amethyst floor", "default");

    // First test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x1.c", "first test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x2.c", "first test");
    
    // Fourth test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x1.c", "fourth test");
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x3.c", "fourth test");

    // Fifth test
    addExit("west", "/tutorial/temple/environment/rooms/pedestal-1x1.c", "fifth test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x2.c", "fifth test");
    
    // Sixth test
    addExit("east", "/tutorial/temple/environment/rooms/pedestal-1x3.c", "sixth test");
    addExit("south", "/tutorial/temple/environment/rooms/pedestal-2x2.c", "sixth test");

    setStateMachine("/tutorial/temple/stateMachine/obedienceStateMachine.c");
}
