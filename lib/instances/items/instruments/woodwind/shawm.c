//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/instrument.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Shawm");
    set("short", "Shawm");
    set("aliases", ({ "shawm", "windcap", "wind cap", "instrument" }));
    set("blueprint", "shawm");
}
