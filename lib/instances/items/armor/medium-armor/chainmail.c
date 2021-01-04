//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/armor.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg) 
{
    if (!arg) 
    {
        set("name", "Chainmail");
        set("short", "Chainmail");
        set("aliases", ({ "mail", "armor", "chainmail" }));
        set("blueprint", "chainmail");
    }
}
