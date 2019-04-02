//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/food.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Striped Maize");
        set("short", "Striped Maize");
        set("aliases", ({ "striped maize", "maize", "corn" }));
        set("blueprint", "striped maize");
    }
}