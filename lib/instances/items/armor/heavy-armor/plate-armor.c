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
        set("name", "Plate armor");
        set("short", "Plate armor");
        set("aliases", ({ "armor", "plate", "plate armor" }));
        set("blueprint", "plate armor");
    }
}
