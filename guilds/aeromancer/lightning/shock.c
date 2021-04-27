//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("name", "Shock");
    addSpecification("source", "aeromancer");
    addSpecification("description", "This research provides the user with the "
        "knowledge of the shock spell. By means of this, the "
        "aeromancer is able to emit a static discharge at a foe.");

    addPrerequisite("/guilds/aeromancer/lightning/root.c",
        (["type":"research"]));

    addSpecification("scope", "targeted");
    addSpecification("research type", "points");
    addSpecification("research cost", 1);
    addSpecification("spell point cost", 10);

    addSpecification("damage hit points", ({ ([
            "probability": 80,
            "base damage": 5,
            "range": 10
        ]),
        ([
            "probability": 20,
            "base damage": 10,
            "range": 20
        ])
    }));
    addSpecification("damage type", "electricity");

    addSpecification("modifiers", ({ 
        //([
        //    "type":"research",
        //    "research item": "/guilds/aeromancer/lightning/discharge.c",
        //    "name" : "discharge",
        //    "formula" : "multiplicative",
        //    "base value" : 1,
        //    "rate": 1.25
        //]),
        //([
        //    "type":"research",
        //    "research item": "/guilds/aeromancer/lightning/electrostatics.c",
        //    "name": "electrostatics",
        //    "formula": "multiplicative",
        //    "base value" : 1,
        //    "rate": 1.25
        //]),
        ([
            "type":"skill",
            "name" : "elemental air",
            "formula" : "additive",
            "rate" : 1.10
        ]),
        ([
            "type": "level",
            "name": "level",
            "formula": "logarithmic",
            "rate": 1.05
        ]),
        ([
            "type": "skill",
            "name": "spellcraft",
            "formula": "logarithmic",
            "rate": 1.25
        ]),
        ([
            "type":"skill",
            "name": "magical essence",
            "formula": "logarithmic",
            "rate": 1.25
        ]),
        ([
            "type":"skill",
            "name" : "physics",
            "formula" : "additive",
            "rate" : 1.10
        ]),
        ([
            "type": "skill",
            "name": "mathematics",
            "formula": "additive",
            "rate": 1.05
        ]),
        ([
            "type": "skill",
            "name": "chemistry",
            "formula": "additive",
            "rate": 1.05
        ]),
        ([
            "type": "attribute",
            "name": "intelligence",
            "formula": "additive",
            "rate": 1.05
        ]), 
        ([
            "type": "attribute",
            "name": "dexterity",
            "formula": "additive",
            "rate": 1.025
        ]), 
        ([
            "type": "attribute",
            "name": "wisdom",
            "formula": "additive",
            "rate": 1.025
        ]), 
    }));

    addSpecification("cooldown", 6);
    addSpecification("event handler", "shockEvent");
    addSpecification("command template", "shock [at ##Target##]");
    addSpecification("use ability message",  "Sinuous tendrils of electricity "
        "arc from ##InitiatorPossessive::Name## "
        "##InitiatorWeapon## into ##TargetName##.");
}
