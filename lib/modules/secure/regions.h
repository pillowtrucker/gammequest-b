//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************

private object service = 
    load_object("/lib/modules/secure/dataServices/regionDataService.c");

/////////////////////////////////////////////////////////////////////////////
private nomask mapping loadRegionData(string enterFrom, string location)
{
    return service->loadRegion(enterFrom, location);
}

/////////////////////////////////////////////////////////////////////////////
private nomask void saveRegionData(string name, string type, int x, int y,
    string entryPoint, string entryDirection, mapping *rooms)
{
    service->saveRegion(name, type, x, y, entryPoint, entryDirection, rooms);
}
