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
        addSpecification("name", "golden hair");
        addSpecification("description", "Your hair is yellow-orange with very vibrant sheen and reddish highlights.");
        addSpecification("root", "hair");
        "baseTrait"::reset(arg);
    }

}

