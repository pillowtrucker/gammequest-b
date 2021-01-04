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
        set("name", "Ornate robes");
        set("short", "Ornate robes");
        set("aliases", ({ "armor", "robes", "ornate robes" }));
        set("blueprint", "ornate robes");
    }
}
