//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/commands/baseCommand.c";

private string TargetString;

/////////////////////////////////////////////////////////////////////////////
public nomask void reset(int arg)
{
    if (!arg)
    {
        addCommandTemplate("get [-a] ##Item##");
        addCommandTemplate("pick up [-a] ##Item##");
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask int execute(string command, object initiator)
{
    int ret = 0;

    object *targets = ({});
    TargetString = getTargetString(initiator, command);

    if (TargetString == "all")
    {
        targets += filter_array(all_inventory(environment(initiator)),
            (: $1->get() :));
        if (!sizeof(targets))
        {
            notify_fail("There is nothing to get.\n");
        }
    }
    else if (sizeof(regexp(({ command }), "-a")))
    {
        targets += filter_array(all_inventory(environment(initiator)),
            (: $1->get() && $1->id(TargetString) :));

        if (!sizeof(targets))
        {
            notify_fail(sprintf("Could not find any '%s' to get.\n",
                TargetString));
        }
    }
    else
    {
        object target = getTarget(initiator, command);

        if (target)
        {
            if (target->get())
            {
                targets += ({ target });
            }
            else
            {
                notify_fail("You cannot get that.\n");
            }
        }
        else
        {
            notify_fail(sprintf("Could not find '%s'.\n", TargetString));
        }
    }
    targets -= ({ 0 });

    if (sizeof(targets) && canExecuteCommand(command))
    {
        ret = 1;
        foreach(object target in targets)
        {
            if (initiator->canCarry(target))
            {
                move_object(target, initiator);
                displayMessage("##InitiatorName## ##Infinitive::pick## up " +
                    target->query("name") + ".\n", initiator);
            }
            else
            {
                tell_object(initiator, "You cannot carry any more weight.\n");
            }
        }
    }
    return ret;
}