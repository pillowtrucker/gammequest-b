//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
virtual inherit "/lib/core/thing.c";
#include "/lib/modules/secure/settings.h"
#include "/lib/include/settings.h"

/////////////////////////////////////////////////////////////////////////////
public int blocked(object target)
{
    return objectp(target) && member(blocks, target->RealName()) &&
        (blocks[target->RealName()] == "block");
}

/////////////////////////////////////////////////////////////////////////////
public int block(string name)
{
    int ret = 0;

    if (name && stringp(name))
    {
        if (this_object()->playerExists(name))
        {
            ret = 1;
            blocks[name] = "block";
            tell_object(this_object(), format(sprintf("You are now blocking %s. You "
                "will no longer see communication (say, tell, shout, channels, "
                "emotes, or soul actions) from this person. All attempted "
                "interactions by them will be logged in the event you need "
                "to escalate a harassment claim.\n",
                capitalize(name)), 78));
        }
        else
        {
            tell_object(this_object(), format(sprintf("Blocking %s failed. That "
                "player does not exist.\n", capitalize(name)), 78));
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask string displayBlockedUsers()
{
    return sizeof(blocks) ?
        implode(sort_array(
            m_indices(filter(blocks, (: $2 == "block" :))),
            (: $1 > $2 :)), ", ") :
        "Nobody is currently blocked";
}

/////////////////////////////////////////////////////////////////////////////
public void unblock(string name)
{
    if (member(blocks, name))
    {
        blocks[name] = "unblock";
        tell_object(this_object(), sprintf("You are no longer blocking %s.\n",
            capitalize(name)));
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask int isBusy()
{
    return IsBusy;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int isEarmuffed()
{
    return Earmuffs;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int displayMiniMap()
{
    return DisplayMiniMap;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int displayLevelComparison()
{
    return DisplayLevelComparison;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setBusy(string state)
{
    IsBusy = (state == "on");
    tell_object(this_object(), sprintf("You have set your busy flag to '%s'.\n",
        IsBusy ? "on" : "off"));
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setEarmuffs(string state)
{
    Earmuffs = (state == "on");
    tell_object(this_object(), sprintf("You have set your earmuffs to '%s'.\n",
        Earmuffs ? "on" : "off"));
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setMiniMap(string state, int suppressMessage)
{
    DisplayMiniMap = (state == "on");
    if (!suppressMessage)
    {
        tell_object(this_object(), 
            sprintf("You have set your display mini map flag to '%s'.\n",
            DisplayMiniMap ? "on" : "off"));
    }
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setLevelComparison(string state)
{
    DisplayLevelComparison = (state == "on");
    tell_object(this_object(), sprintf("You have set your display level "
        "comparison flag to '%s'.\n",
        DisplayLevelComparison ? "on" : "off"));
}

/////////////////////////////////////////////////////////////////////////////
public nomask void clearReplyTo()
{
    ReplyTo = 0;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs int receiveMessage(string message, object initiator)
{
    int ret = MessageSent;
    if (blocked(initiator))
    {
        ret = Blocked;
    }

    else if (isBusy())
    {
        ret = Busy;
    }
    else
    {
        if (initiator)
        {
            ReplyTo = initiator;
        }
        tell_object(this_object(), message);
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask object ReplyToUser()
{
    return ReplyTo;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs int pageSize(int newSize)
{
    if (newSize)
    {
        PageSize = to_int(newSize);
        tell_object(this_object(), sprintf("You have set your page size to %d.\n",
            PageSize));
    }
    return PageSize ? PageSize : 1000;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs string colorConfiguration(string newColorSetting)
{
    if(member(({ "none", "3-bit", "8-bit", "24-bit", "grayscale" }), newColorSetting) > -1)
    {
        colorSetting = newColorSetting;
        tell_object(this_object(), sprintf("You have set your color to '%s'.\n",
            colorSetting));
    }
    return colorSetting;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs string charsetConfiguration(string newCharSet)
{
    if (member(({ "ascii", "unicode", "screen reader" }), newCharSet) > -1)
    {
        characterSet = newCharSet;
        configureCharset(this_object(), newCharSet);
        tell_object(this_object(), sprintf("You have set your character set to '%s'.\n",
            characterSet));
    }
    return characterSet;
}

/////////////////////////////////////////////////////////////////////////////
public nomask varargs string combatVerbosity(string newCombatVerbosity)
{
    if (member(({ "normal", "only hits", "digest", "show vitals",
        "only vitals" }), newCombatVerbosity) > -1)
    {
        combatVerbosity = newCombatVerbosity;
        tell_object(this_object(), sprintf("You have set your combat "
            "verbosity to '%s'.\n", combatVerbosity));
    }
    return combatVerbosity;
}

/////////////////////////////////////////////////////////////////////////////
public nomask string primaryGuildSetting(string displayGuild)
{
    string ret = PrimaryGuild;

    if (stringp(displayGuild))
    {
        if (this_object()->memberOfGuild(displayGuild))
        {
            PrimaryGuild = displayGuild;
            ret = PrimaryGuild;
            tell_object(this_object(), sprintf("You have set your primary "
                "guild to '%s'.\n", PrimaryGuild));
        }
        else
        {
            ret = 0;
            tell_object(this_object(), "You can only set your primary guild "
                "to a guild to which you belong.\n");
        }
    }

    if (!ret)
    {
        string *guilds = this_object()->memberOfGuilds();
        if (sizeof(guilds))
        {
            ret = guilds[0];
        }
        else
        {
            ret = "guildless";
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask string displayRoles()
{
    string ret = "";

    if (sizeof(roles))
    {
        object configuration = getDictionary("configuration");
        string colorConfiguration = this_player() ?
            this_player()->colorConfiguration() :
            this_object()->colorConfiguration();

        ret = configuration->decorate(sprintf("%s has the following roles -> ",
            capitalize(this_object()->Pronoun())),
            "description", "roles", colorConfiguration);

        foreach(string role in m_indices(roles))
        {
            ret += configuration->decorate(sprintf("    %s", role),
                roles[role], "roles", colorConfiguration);
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int addRole(string newRole)
{
    int ret = 0;
    string roleLevel = addRoleToPlayer(this_object(), newRole);
    if (roleLevel)
    {
        ret = 1;
        roles[newRole] = roleLevel;
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void removeRole(string role)
{
    int removeFromList = removeRoleFromPlayer(this_object(), role);
    if (removeFromList)
    {
        m_delete(roles, role);
    }
}
