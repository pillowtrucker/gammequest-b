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
        set("name", "Chickpea");
        set("short", "Chickpea");
        set("aliases", ({ "pea", "chick pea", "chickpea", "garbanzo bean", "garbanzo" }));
        set("blueprint", "chickpea");
    }
}
