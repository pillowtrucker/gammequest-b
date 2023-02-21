//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/items/weapon.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    set("name", "Pollaxe");
    set("short", "Pollaxe");
    set("aliases", ({ "axe", "pollaxe", "pole axe" }));
    set("blueprint", "pollaxe");
}
