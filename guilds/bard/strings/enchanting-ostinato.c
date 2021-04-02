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
        addSpecification("name", "Enchanting Ostinato");
        addSpecification("source", "bard");
        addSpecification("composite research",
            "guilds/bard/compositions/root.c");
        addSpecification("composite type", "instrumental solo");
        addSpecification("composite class", "strings");
        addSpecification("default composite description",
            "solo transitioning from A to E and G");

        addSpecification("description", "This research provides the user "
            "knowledge of creating searing riffs that cause energy "
            "damage to all nearby enemies.");

        addSpecification("scope", "area");
        addSpecification("research type", "points");
        addSpecification("research cost", 1);
                
        addPrerequisite("level", 
            (["type": "level", 
              "guild": "bard",
              "value": 5 ]));

        addSpecification("limited by", ([
            "equipment":({ "instrument: plucked", "instrument: bowed" }),
        ]));

        addPrerequisite("guilds/bard/strings/root.c",
            (["type":"research"]));

        addSpecification("spell point cost", 50);
        addSpecification("damage hit points", ({ 
            ([
                "probability": 80,
                "base damage": 10,
                "range": 20
            ]),
            ([
                "probability": 20,
                "base damage": 25,
                "range": 50
            ]),
        }));

        addSpecification("modifiers", ({ 
            ([
                "type": "research",
                "research item": "guilds/bard/strings/vibrato.c",
                "name": "vibrato",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/staccato.c",
                "name": "staccato",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/legato.c",
                "name": "legato",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/ghost-notes.c",
                "name": "ghost-notes",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/tremolo.c",
                "name": "tremolo",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/octave-course.c",
                "name": "octave-course",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/poly-rhythms.c",
                "name": "poly-rhythms",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]), 
            ([
                "type": "research",
                "research item": "guilds/bard/strings/two-handed-tapping.c",
                "name": "two-handed-tapping",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/fluid-arpeggios.c",
                "name": "fluid-arpeggios",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/palm-muting.c",
                "name": "palm-muting",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/mixed-mode-playing.c",
                "name": "mixed-mode-playing",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/strings/chromatic-movement.c",
                "name": "chromatic-movement",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.25
            ]),
            ([
                "type": "research",
                "research item": "guilds/bard/compositions/freeform.c",
                "name": "freeform",
                "formula": "multiplicative",
                "base value": 1,
                "rate": 1.1
            ]),
            ([
                "type": "weapon damage",
                "name" : "strings",
                "types" : ({ "instrument: plucked", "instrument: bowed" }),
                "formula" : "additive",
                "rate" : 1.0
            ]),
            ([
                "type": "highest skill",
                "name" : "instrument skills",
                "skills": ({ "instrument: plucked", "instrument: bowed" }),
                "formula" : "additive",
                "rate" : 0.5
            ]),
            ([
                "type": "skill",
                "name": "spellcraft",
                "formula": "additive",
                "rate": 0.10
            ]), 
            ([
                "type": "skill",
                "name": "senses",
                "formula": "additive",
                "rate": 0.05
            ]), 
            ([
                "type": "skill",
                "name": "magical essence",
                "formula": "logarithmic",
                "rate": 1.25
            ]), 
            ([
                "type": "skill",
                "name": "dancing",
                "formula": "additive",
                "rate": 0.05
            ]), 
            ([
                "type":"attribute",
                "name": "charisma",
                "formula": "additive",
                "rate": 0.05
            ]), 
            ([
                "type":"attribute",
                "name": "dexterity",
                "formula": "additive",
                "rate": 0.05
            ]),
        }));

        addSpecification("damage type", "magical");
        addSpecification("event handler", "riffOfReportEvent");
        addSpecification("use composite message", "##InitiatorName## "
            "artfully ##Infinitive::perform## ##InitiatorPossessive## "
            "##InitiatorWeapon## in a ##CompositeSegment##.");
    }
}