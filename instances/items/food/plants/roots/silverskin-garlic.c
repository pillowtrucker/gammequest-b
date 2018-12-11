//*****************************************************************************
// Copyright (c) 2018 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/food.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Silverskin Garlic");
        set("short", "Silverskin Garlic");
        set("aliases", ({ "silverskin garlic", "garlic" }));
        set("blueprint", "silverskin garlic");
    }
}
