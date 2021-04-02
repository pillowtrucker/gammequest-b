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
        addSpecification("name", "Defense I");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This research attunes the "
            "scion's avatar to be more adept at defneding against "
            "attacks.");

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("related research", ({
            "guilds/scion/avatars/blood/root.c",
            "guilds/scion/avatars/electricity/root.c",
            "guilds/scion/avatars/evocation/root.c",
            "guilds/scion/avatars/flame/root.c",
            "guilds/scion/avatars/ice/root.c",
            "guilds/scion/avatars/spirit/root.c",
        }));
    }
}