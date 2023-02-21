//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Bubinga");
    set("short", "Bubinga");
    set("aliases", ({ "wood", "bubinga" }));
    set("blueprint", "bubinga");
}
