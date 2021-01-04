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
        set("name", "Winesap Apple");
        set("short", "Winesap Apple");
        set("aliases", ({ "winesap apple", "apple" }));
        set("blueprint", "winesap apple");
    }
}
