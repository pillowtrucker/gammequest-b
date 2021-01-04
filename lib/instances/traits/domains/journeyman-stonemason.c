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
        addSpecification("type", "professional");
        addSpecification("name", "journeyman stonemason");
        addSpecification("description", "You are an adept stonemason");
        addSpecification("root", "stonemason");
        addSpecification("opinion", 1);
        addSpecification("bonus stonemasonry", 10);
        "baseTrait"::reset(arg);
    }
}
