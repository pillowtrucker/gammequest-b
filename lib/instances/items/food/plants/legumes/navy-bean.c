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
        set("name", "Navy Bean");
        set("short", "Navy Bean");
        set("aliases", ({ "bean", "navy bean" }));
        set("blueprint", "navy bean");
    }
}
