//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

private mapping holdings = ([]);
private mapping henchmen = ([]);

private string *honoraryTitles = ({});

/////////////////////////////////////////////////////////////////////////////
static nomask void loadDomains(mapping data, object persistence)
{
    if (isValidPersistenceObject(persistence))
    {
        holdings = persistence->extractSavedMapping("holdings", data);
        henchmen = persistence->extractSavedMapping("henchmen", data);
    }
}

/////////////////////////////////////////////////////////////////////////////
static nomask mapping sendDomains()
{
    mapping ret = ([
        "holdings": holdings + ([]),
        "henchmen": henchmen + ([])
    ]);

    return ret;
}
