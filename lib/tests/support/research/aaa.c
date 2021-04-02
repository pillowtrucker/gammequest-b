//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/research/compositeResearchTemplate.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        activeResearchItem::reset(arg);
        addSpecification("name", "AAA (Verse, Verse, Verse)");
        addSpecification("usage summary", "A song with three verses");
        addSpecification("source", "blarg");
        addSpecification("description", "This research provides the user with the "
            "knowledge of how to create songs structured as three verses.");

        addSpecification("research type", "points");
        addSpecification("research cost", 1);
        addSpecification("spell point cost", 25);
        addSpecification("stamina point cost", 25);

        addSpecification("segments", ({ 
            ([ "verse 1": ({ "lyric", "instrumental rhythm" }) ]),
            ([ "verse 2": ({ "lyric", "instrumental rhythm" }) ]),
            ([ "verse 3": ({ "lyric", "instrumental rhythm" }) ])
        }));
        addSpecification("event handler", "aaaEvent");
    }
}