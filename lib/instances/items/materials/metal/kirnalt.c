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
        set("name", "Kirnalt");
        set("short", "Kirnalt");
        set("aliases", ({ "metal", "kirnalt" }));
        set("blueprint", "kirnalt");
    }
}
