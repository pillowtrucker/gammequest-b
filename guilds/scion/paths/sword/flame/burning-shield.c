//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/flame/burning-shield.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "sword";

    addSpecification("limited by", (["equipment":({
        "long sword", "hand and a half sword", "two-handed sword" })]));
}
