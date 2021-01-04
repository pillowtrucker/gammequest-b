//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/material.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Hawk Feather");
        set("short", "Hawk Feather");
        set("aliases", ({ "feather", "hawk feather" }));
        set("blueprint", "hawk feather");
    }
}
