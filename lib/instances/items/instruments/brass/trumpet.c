//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/instrument.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Trumpet");
        set("short", "Trumpet");
        set("aliases", ({ "trumpet", "brass", "wind cap", "instrument" }));
        set("blueprint", "trumpet");
    }
}
