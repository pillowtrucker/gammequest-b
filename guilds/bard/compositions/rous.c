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
        addSpecification("name", "Rodents of Unusual Size");
        addSpecification("source", "bard");
        addSpecification("description", "This research attunes the "
            "'A Rat's Serenade' research to bring forth only the "
            "largest of rats.");

        addPrerequisite("level", ([  
            "type":"level",
            "guild": "bard",
            "value": 4
        ]));

        addPrerequisite("guilds/bard/compositions/a-rats-serenade.c",
            (["type":"research"]));

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("related research", ({
            "guilds/bard/compositions/a-rats-serenade.c" }));
    }
}
