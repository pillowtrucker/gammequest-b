//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "genetic");
        addSpecification("name", "light gray eyes");
        addSpecification("description", "Your eyes are pale, light gray.");
        addSpecification("root", "eyes");
        "baseTrait"::reset(arg);
    }
}
