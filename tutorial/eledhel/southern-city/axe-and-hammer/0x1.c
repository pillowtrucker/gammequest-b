//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/inn.c");
    addItem("/lib/environment/items/lighting/window.c", "west");

    addExitWithDoor("west", "/lib/tutorial/eledhel/southern-city/14x8.c");
}