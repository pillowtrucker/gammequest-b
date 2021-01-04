//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Skirt");
        set("short", "Skirt");
        set("aliases", ({ "clothing", "clothes", "skirt" }));
        set("blueprint", "skirt");
    }
}
