//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "The Fool");
    addSpecification("source", "Scion of Dhuras Guild");
    addSpecification("description", "This skill provides the user with the "
        "knowledge of an offensive maneuver where the blade is "
        "lowered toward the ground, appearing to expose the upper body to "
        "an attack. It provides excellent lower defense and opens up a series "
        "of vicious counter-attacks.");
    addSpecification("limited by", (["equipment":({
        "long sword", "hand and a half sword", "two-handed sword" })]));

    addPrerequisite("level", 
        (["type":"level", 
          "guild": "Scion of Dhuras",
          "value": 6 ]));

    addPrerequisite("guilds/scion/paths/sword/forms/the-plough.c",
        (["type":"research"]));

    addSpecification("scope", "self");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("bonus long sword", 1);
    addSpecification("bonus hand and a half sword", 1);
    addSpecification("bonus two-handed sword", 1);
    addSpecification("bonus defense", 1);
    addSpecification("equivalence", "the fool");
}
