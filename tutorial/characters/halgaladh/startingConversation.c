//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/modules/conversations/baseConversation.c";

/////////////////////////////////////////////////////////////////////////////
protected void Setup()
{
    addTopic("aye but how", "@S@`Aye, but how?' @D@asks "
        "Halgaladh as he steps up next to Galadhel.");
    addTopicInterjection("aye but how",
        "/lib/tutorial/characters/galadhel/galadhel.c",
        "I do not know", 1);

    addTopic("stinks too", "@S@`He's been dead quite "
        "some time by the smell of him.' @D@notes "
        "Halgaladh as he investigates the corpse.");

    addResponse("stinks too", "@I@Examine corpse@E@", "@D@@C@##InitiatorName## "
        "##ResponseInfinitive::examine## the corpse closely and "
        "##ResponseInfinitive::say##, @S@`Yet I would bet Halgaladh�s meal "
        "tonight that this was the killer. All of the signs point to it � "
        "the bow and arrows, the trail we've followed...'");
    addResponse("stinks too", "It does stink...", "@D@@C@##InitiatorName## "
        "##ResponseInfinitive::wrinkle## ##InitiatorPossessive## nose and "
        "##ResponseInfinitive::say##, @S@`Yet I would bet Halgaladh�s meal "
        "tonight that this was the killer. All of the signs point to it � "
        "the bow and arrows, the trail we've followed...");
}
