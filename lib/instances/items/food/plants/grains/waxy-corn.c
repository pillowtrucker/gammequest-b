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
        set("name", "Waxy Corn");
        set("short", "Waxy Corn");
        set("aliases", ({ "waxy corn", "corn" }));
        set("blueprint", "waxy corn");
    }
}
