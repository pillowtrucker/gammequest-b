//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

protected string WeaponType = "ERROR";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
}

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        knowledgeResearchItem::reset(arg);
        addSpecification("name", "Inferno Mark");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This research provides the user with the "
            "knowledge of the inferno mark technique. This form enhances "
            "the Scion's offensive spells.");
        Setup();

        addPrerequisite("level", 
            (["type":"level", 
              "guild": "Scion of Dhuras",
              "value": 39 ]));
        addPrerequisite(sprintf("guilds/scion/paths/%s/flame/enhanced-blaze.c", WeaponType),
            (["type":"research"]));

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("affected research", ([
            "Fire Bolt": 40,
            "Fireball": 40,
            "Conflagration": 40,
            "Inferno Spear": 40
        ]));
        addSpecification("affected research type", "percentage");
    }
}
