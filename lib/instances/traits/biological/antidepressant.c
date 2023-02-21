//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "health");
    addSpecification("name", "on antidepressants");
    addSpecification("description", "You are on an antidepressant.");
    addSpecification("root", "biological");
    addSpecification("opinion", 5);
    addSpecification("duration", 300);
}
