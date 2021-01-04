//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Craft Leather Armor");
        addSpecification("source", "crafting");
        addSpecification("description", "This skill provides the user with the "
            "knowledge required to craft leather armor.");
        addSpecification("research type", "granted");
        addPrerequisite("lib/instances/research/crafting/armor/craftArmor.c", (["type":"research"]));
    }
}
