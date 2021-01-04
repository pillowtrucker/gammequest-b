//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/food.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "maple Samara");
        set("short", "maple Samara");
        set("aliases", ({ "maple samaras", "maple samara", "samaras", "samara" }));
        set("blueprint", "maple samara");
    }
}
