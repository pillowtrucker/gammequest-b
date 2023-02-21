//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/terrain/baseTerrain.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    Name("fake forest2");

    addAdjectives(({ "a cedar grotto" }));

    addDescriptionTemplate("##Adjective##");
    addSourceOfLight(10);
    suppressEntryMessage();
}
