//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/ice/ice-storm.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "dagger";
    WeaponSkill = "dagger";

    addSpecification("limited by", (["equipment":({ "dagger", "short sword" })]));
}
