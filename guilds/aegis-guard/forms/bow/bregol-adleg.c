//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/instantaneousActiveResearchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        instantaneousActiveResearchItem::reset(arg);
        addSpecification("name", "Bregol Adleg");
        addSpecification("source", "Aegis Guard");
        addSpecification("description", "This research provides the user with the "
            "knowledge to set an arrow to magical stone as it flies from a bow.");

        addPrerequisite("guilds/aegis-guard/forms/bow/root.c",
            (["type":"research"]));

        addSpecification("limited by", (["equipment":({ "bow" })]));

        addPrerequisite("level",
            (["type":"level",
                "guild": "Aegis Guard",
                "value": 3
            ]));

        addSpecification("scope", "targeted");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);

        addSpecification("damage hit points", ({ ([
                "probability": 80,
                "base damage": 10,
                "range": 20
            ]),
            ([
                "probability": 20,
                "base damage": 25,
                "range": 50
            ])
        }));

        addSpecification("damage type", "physical");

        addSpecification("modifiers", ({ 
            /*
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-anwar.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-celair.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-edlothia.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-eiliant.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-manadh.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            ([
                "type": "research",
                "research item": "guilds/aegis-guard/forms/bow/pilin-dagnir.c",
                "name": "pilin-anwar",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.15
            ]),
            */
            ([
                "type": "weapon damage",
                "name" : "bow",
                "types" : ({ "bow" }),
                "formula" : "additive",
                "rate" : 1.75
            ]),
            ([
                "type": "skill",
                "name": "bow",
                "formula": "logarithmic",
                "rate": 1.25
            ]), 
            ([
                "type": "skill",
                "name": "anatomy and physiology",
                "formula": "additive",
                "rate": 0.10
            ]),
            ([
                "type": "skill",
                "name": "physics",
                "formula": "additive",
                "rate": 0.10
            ]),
            ([
                "type": "skill",
                "name": "mathematics",
                "formula": "additive",
                "rate": 0.10
            ]),
            ([
                "type": "attribute",
                "name": "dexterity",
                "formula": "additive",
                "rate": 0.25
            ]),
            ([
                "type": "attribute",
                "name": "wisdom",
                "formula": "additive",
                "rate": 0.25
            ]),
        }));

        addSpecification("consumables", (["arrow": 1]));

        addSpecification("stamina point cost", 50);
/*        addSpecification("spell point cost modifiers", ([
            "guilds/aegis-guard/forms/bow/gwaelphilin-celair.c": 10,
            "guilds/aegis-guard/forms/bow/gwaelphilin-edlothia.c": 10,
            "guilds/aegis-guard/forms/bow/gwaelphilin-manadh.c": 10,
            "guilds/aegis-guard/forms/bow/gwaelphilin-dagnir.c": 10
        ]));
*/
        addSpecification("cooldown", 60);
/*        addSpecification("cooldown modifiers", ([
            "guilds/aegis-guard/forms/bow/cu-ai-celair.c": 10,
            "guilds/aegis-guard/forms/bow/cu-ai-edlothia.c": 10,
            "guilds/aegis-guard/forms/bow/cu-ai-manadh.c": 10,
            "guilds/aegis-guard/forms/bow/cu-ai-dagnir.c": 10,
        ]));
*/
        addSpecification("event handler", "bregolAdlegEvent");
        addSpecification("command template", "bregol adleg [at ##Target##]");
        addSpecification("use ability message",  "##InitiatorPossessive::Name## "
            "##Infinitive::aim## ##InitiatorPossessive## "
            "##InitiatorWeapon## at ##TargetName##. The arrow "
            "hisses as it breaks through the air on its way toward ##TargetName##.");
    }
}
