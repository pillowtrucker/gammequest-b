//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/drink.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Blackberry Lambic Ale");
        set("short", "Blackberry Lambic Ale");
        set("biological effect", "alcohol");
        set("biological strength", 1);
        set("aliases", ({ "blackberry lambic", "beer", "lambic", "ale" }));
        set("blueprint", "blackberry lambic ale");
    }
}
