//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Pecan");
    set("short", "Pecan (Wood)");
    set("aliases", ({ "wood", "pecan" }));
    set("blueprint", "pecan");
}
