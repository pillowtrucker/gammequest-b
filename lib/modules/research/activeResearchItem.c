//*****************************************************************************
// Class: activeResearchItem
// File Name: activeResearchItem.c
//
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/modules/research/researchItem.c";

/////////////////////////////////////////////////////////////////////////////
public void reset(int arg)
{
    if (!arg)
    {
        addSpecification("type", "active");
    }
}

/////////////////////////////////////////////////////////////////////////////
protected int addSpecification(string type, mixed value)
{
    int ret = 0;
    switch(type)
    {
        case "hit point cost":
        case "spell point cost":
        case "stamina point cost":
        case "cooldown":
        {
            if(intp(value) && (value > 0))
            {
                specificationData[type] = value;
                ret = 1;
            }
            else
            {
                raise_error(sprintf("ERROR - activeResearchItem: the '%s'"
                    " specification must be an integer greater than 0.\n",
                    type));
            }
            break;
        }
        case "event handler":
        case "use ability message":
        case "use ability fail message":
        case "use ability cooldown message":
        {
            if (value && stringp(value))
            {
                specificationData[type] = value;
                ret = 1;
            }
            else
            {
                raise_error(sprintf("ERROR - activeResearchItem: the '%s'"
                    " specification must be a string.\n",
                    type));
            }
            break;
        }
        case "command template":
        {
            if(value && stringp(value))
            {
                ret = addCommandTemplate(value);
            }
            else
            {
                raise_error(sprintf("ERROR - activeResearchItem: the '%s'"
                    " specification must be a string.\n",
                    type));
            }
            break;
        }
        default:
        {
            ret = "researchItem"::addSpecification(type, value);
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeOnSelf(object owner, string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeOnTarget(string unparsedCommand, object owner,
    string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeInArea(object owner, string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeOnEnvironment(object owner, string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeOnRegion(object owner, string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
protected int executeGlobally(object owner, string researchName)
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
private nomask int applyToScope(string command, object owner,
    string researchName)
{
    int ret = 0;
    if(member(specificationData, "scope"))
    {
        switch(specificationData["scope"])
        {
            case "self":
            {
                ret = executeOnSelf(owner, researchName);
                break;
            }
            case "targeted":
            {
                ret = executeOnTarget(command, owner, researchName);
                break;
            }
            case "area":
            {
                ret = executeInArea(owner, researchName);
                break;
            }
            case "environmental":
            {
                ret = executeOnEnvironment(owner, researchName);
                break;
            }
            case "region":
            {
                ret = executeOnRegion(owner, researchName);
                break;
            }
            case "global":
            {
                ret = executeGlobally(owner, researchName);
                break;
            }
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int execute(string command, object initiator)
{
    int ret = 0;
    string researchName = program_name(this_object());

    if(initiator && objectp(initiator) && canExecuteCommand(command) &&
       function_exists("isResearched", initiator) &&
       initiator->isResearched(researchName))
    {
        notify_fail("");
        ret = 1;
        if(initiator->blockedByCooldown(researchName))
        {
            string coolDownMessage = 
                (member(specificationData, "use ability cooldown message") && 
                stringp(specificationData["use ability cooldown message"])) ?
                specificationData["use ability cooldown message"] :
                sprintf("You must wait longer before you use '%s' again.\n",
                    member(specificationData, "name") ? specificationData["name"] :
                    "that skill");
                    
            displayMessageToSelf(coolDownMessage, initiator);
            ret = 0;
        }
        if(ret && ((member(specificationData, "hit point cost") &&
           (specificationData["hit point cost"] > initiator->hitPoints())) ||
           (member(specificationData, "spell point cost") &&
           (specificationData["spell point cost"] > initiator->spellPoints())) ||
           (member(specificationData, "stamina point cost") &&
           (specificationData["stamina point cost"] > initiator->staminaPoints()))))
        {
            string costsTooMuch = sprintf("You do not have the required "
                "energy reserve to use '%s'.\n", member(specificationData, "name") ?
                specificationData["name"] : "that skill");
                
            displayMessageToSelf(costsTooMuch, initiator);
            ret = 0;
        }
        
        if(ret && !initiator->spellAction())
        {
            ret = applyToScope(command, initiator, researchName);
            if(ret)
            {
                if(member(specificationData, "hit point cost"))
                {
                    initiator->hitPoints(-specificationData["hit point cost"]);
                }
                if(member(specificationData, "spell point cost"))
                {
                    initiator->spellPoints(-specificationData["spell point cost"]);
                }
                if(member(specificationData, "stamina point cost"))
                {
                    initiator->staminaPoints(-specificationData["stamina point cost"]);
                }
            }
            initiator->spellAction(1);
        }
    }
    return ret;
}
