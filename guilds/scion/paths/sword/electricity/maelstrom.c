//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/electricity/maelstrom.c";

/////////////////////////////////////////////////////////////////////////////
protected void SetupResearch()
{
    WeaponType = "sword";
    WeaponSkill = "long sword";
    ValidWeaponTypes = ({ "long sword", "hand and a half sword",
        "two-handed sword" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}
