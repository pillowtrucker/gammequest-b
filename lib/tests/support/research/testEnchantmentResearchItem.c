//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("name", "Enchantment research");
        addSpecification("source", "mage guild");
        addSpecification("description", "This is enchantment research");
        addSpecification("scope", "self");
        addSpecification("research type", "granted");
        addSpecification("bonus fire enchantment", 2);
        addSpecification("bonus electricity enchantment", 5);
        addSpecification("bonus magical enchantment", 1);
    }
}
