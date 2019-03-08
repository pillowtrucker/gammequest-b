//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/passiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        passiveResearchItem::reset(arg);
        addSpecification("name", "Zucken");
        addSpecification("source", "Scion of Dhuras Guild");
        addSpecification("description", "This skill provides the user with the "
            "knowledge of a technique used during a strong bind between "
            "blades. The combatant goes weak in the bind so as to disengage "
            "their blade from the bind and counter with an attack to the "
            "other side of the other combatant's blade. This technique is "
            "based upon the concept of using weakness against strength.");
        addSpecification("limited by", (["equipment":({
            "axe" })]));

        addPrerequisite("level", 
            (["type":"level", 
              "guild": "Scion of Dhuras",
              "value": 25 ]));

        addPrerequisite("lib/guilds/scion/paths/axe/forms/changing-through.c",
            (["type":"research"]));

        addSpecification("scope", "self");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("bonus axe", 1);
        addSpecification("bonus parry", 1);
        addSpecification("bonus attack", 2);
        addSpecification("bonus damage", 1);
    }
}
