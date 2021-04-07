//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/knowledgeResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    addSpecification("name", "March of the Mephits");
    addSpecification("source", "bard");
    addSpecification("description", "This research attunes the "
        "'Pan's Mephit' and 'Majesty's Mephit' research to "
        "bring forth only more capable mephits.");

    addSpecification("limited by", ([
        "equipment": ({ "instrument: woodwind", "instrument: brass" }) ]));

    addPrerequisite("level", ([  
        "type":"level",
        "guild": "bard",
        "value": 33
    ]));

    addPrerequisite("guilds/bard/woodwind-brass/a-mephits-ballad.c",
        (["type":"research"]));

    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("related research", ({
        "guilds/bard/woodwind-brass/pans-mephit.c",
        "guilds/bard/woodwind-brass/majestys-mephit.c",
        "guilds/bard/woodwind-brass/minstrels-muse.c",
    }));
}
