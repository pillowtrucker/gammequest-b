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
        set("name", "Grape Tomato");
        set("short", "Grape Tomato");
        set("aliases", ({ "grape tomato", "tomato" }));
        set("blueprint", "grape tomato");
    }
}
