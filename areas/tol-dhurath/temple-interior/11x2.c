//*****************************************************************************
// Copyright (c) 2020 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/environment.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setInterior("/lib/environment/interiors/ruin-great-hall.c");
    addFeature("/lib/environment/features/floors/ruined-marble-floor.c");
    addItem("/lib/environment/items/lighting/sconce.c", "east");
    addDecorator("ruined interior northeast corner north entry");

    addExit("west",
        "/areas/tol-dhurath/temple-interior/9x2.c");
    addExitWithDoor("north",
        "/areas/tol-dhurath/temple-interior/11x3.c");
    addExit("south",
        "/areas/tol-dhurath/temple-interior/11x1.c");
}

/////////////////////////////////////////////////////////////////////////////
public string **customIcon(string **baseIcon, string color, string charset)
{
    string baseColor = getDictionary("region")->iconColor(
        decoratorType(), color);

    baseIcon[2][2] = sprintf("%s%s%s", baseColor,
        (charset == "unicode") ? "\xe2\x95\xa0" : "+",
        (baseColor != "") ? "\x1b[0m" : baseColor);

    return baseIcon;
}
