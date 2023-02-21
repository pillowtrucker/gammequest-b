//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/modules/traits/baseTrait.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addSpecification("type", "health");
    addSpecification("name", "hallucinating");
    addSpecification("description", "You are under the influence of hallucinogens.");
    addSpecification("root", "biological");
    addSpecification("opinion", -75);
    addSpecification("duration", 300);
    addSpecification("expire message", "You are no longer hallucinating.");
}
