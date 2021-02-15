//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/dictionaries/attacks/baseAttack.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        ::reset(arg);
        setDamageType("physical");
        addHitDictionary(({
            "crush", "squeeze", "crunch", "strangle", "constrict", "clutch",
            "grip" }));

        addSimileDictionary(({
            "squashing ##TargetPossessive## ##BodyPart## tightly",
            "on ##TargetPossessive## ##BodyPart## like a tourniquet",
            "with a ##BodyPart##-choking force" }));

        addMissMessage("##AttackerName## ##Infinitive::wave## ##AttackerPossessive##"
            " tentacles wildly around!");

        addHitMessage("##AttackerName## ##HitDictionary## ##TargetName## "
            "##SimileDictionary## with ##AttackerPossessive## tentacles.",
            "1-150");
    }
}
