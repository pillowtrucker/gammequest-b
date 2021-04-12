//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/secure/master/security/priviledgeGroup.c";

/////////////////////////////////////////////////////////////////////////////
protected nomask void applyGroupDetails()
{
    setName("/lib/dictionaries/traitsDictionary");
    addPermission("/lib/modules/traits/baseTrait.c", Read);
    addPermission("/lib/instances", Read);
    addPermission("/lib/tests", Read);
    addPermission("/areas", Read);
    addPermission("/guilds", Read);
    addPermission("/players", Read);

    addPriviledgedEfun("file_size");
    addPriviledgedEfun("get_dir");
}
