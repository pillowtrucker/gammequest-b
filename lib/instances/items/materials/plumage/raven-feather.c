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
        set("name", "Raven Feather");
        set("short", "Raven Feather");
        set("aliases", ({ "feather", "raven feather" }));
        set("blueprint", "raven feather");
    }
}
