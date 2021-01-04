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
        set("name", "Magical crystal");
        set("short", "Magical crystal");
        set("aliases", ({ "crystal", "magical crystal" }));
        set("blueprint", "magical crystal");
    }
}
