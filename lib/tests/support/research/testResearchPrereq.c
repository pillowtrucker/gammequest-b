//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("source", "mage guild");
        addSpecification("description", "This is a description");
        addSpecification("name", "weasel improvement");
        addSpecification("scope", "self");
        addSpecification("research type", "timed");
        addSpecification("research cost", 20);
        addSpecification("bonus long sword", 2);
        addPrerequisite("lib/tests/support/research/testResearchA.c",
            (["type":"research"]));
    }
}
