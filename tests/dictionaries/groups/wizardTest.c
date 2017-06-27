//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/tests/framework/testFixture.c";

object Group;

/////////////////////////////////////////////////////////////////////////////
void Setup()
{
    Group = clone_object("/lib/dictionaries/groups/wizard.c");
    Group->init();
}

/////////////////////////////////////////////////////////////////////////////
void CleanUp()
{
    destruct(Group);
}