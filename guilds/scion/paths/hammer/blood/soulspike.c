//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/guilds/scion/common/blood/soulspike.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "hammer";
    WeaponSkill = "hammer";
    ValidWeaponTypes = ({ "hammer" });

    addSpecification("limited by", (["equipment": ValidWeaponTypes]));
}
