//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/guilds/scion/common/electricity/sweeping-shock.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    WeaponType = "staff";

    addSpecification("limited by", (["equipment":({ "staff" })]));
}
