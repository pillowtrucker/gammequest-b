//*****************************************************************************
// Copyright (c) 2023 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/environment/region.c";

/////////////////////////////////////////////////////////////////////////////
public void Setup()
{
    setRegionName("Tol-Dhurath Forest 4");
    setRegionType("forest");
    setDimensions(25, 10);
    // EntryCoordinate
    setSettlementChance(-1);

    setCoordinate(0, 2,
        "/areas/tol-dhurath/forest-4/0x2.c", "exit");
    setCoordinate(0, 3,
        "/areas/tol-dhurath/forest-4/0x3.c", "path");
    setCoordinate(0, 4,
        "/areas/tol-dhurath/forest-4/0x4.c", "room");
    setCoordinate(0, 7,
        "/areas/tol-dhurath/forest-4/0x7.c", "path");
    setCoordinate(0, 8,
        "/areas/tol-dhurath/forest-4/0x8.c", "path");
    setCoordinate(0, 9,
        "/areas/tol-dhurath/forest-4/0x9.c", "room");
    setCoordinate(10, 0,
        "/areas/tol-dhurath/forest-4/10x0.c", "path");
    setCoordinate(10, 1,
        "/areas/tol-dhurath/forest-4/10x1.c", "path");
    setCoordinate(10, 4,
        "/areas/tol-dhurath/forest-4/10x4.c", "path");
    setCoordinate(10, 5,
        "/areas/tol-dhurath/forest-4/10x5.c", "path");
    setCoordinate(11, 1,
        "/areas/tol-dhurath/forest-4/11x1.c", "path");
    setCoordinate(11, 2,
        "/areas/tol-dhurath/forest-4/11x2.c", "room");
    setCoordinate(11, 5,
        "/areas/tol-dhurath/forest-4/11x5.c", "path");
    setCoordinate(11, 6,
        "/areas/tol-dhurath/forest-4/11x6.c", "path");
    setCoordinate(12, 0,
        "/areas/tol-dhurath/forest-4/12x0.c", "room");
    setCoordinate(12, 1,
        "/areas/tol-dhurath/forest-4/12x1.c", "path");
    setCoordinate(12, 2,
        "/areas/tol-dhurath/forest-4/12x2.c", "path");
    setCoordinate(12, 3,
        "/areas/tol-dhurath/forest-4/12x3.c", "path");
    setCoordinate(12, 4,
        "/areas/tol-dhurath/forest-4/12x4.c", "path");
    setCoordinate(12, 5,
        "/areas/tol-dhurath/forest-4/12x5.c", "path");
    setCoordinate(12, 6,
        "/areas/tol-dhurath/forest-4/12x6.c", "path");
    setCoordinate(12, 7,
        "/areas/tol-dhurath/forest-4/12x7.c", "path");
    setCoordinate(12, 8,
        "/areas/tol-dhurath/forest-4/12x8.c", "room");
    setCoordinate(12, 9,
        "/areas/tol-dhurath/forest-4/12x9.c", "path");
    setCoordinate(13, 0,
        "/areas/tol-dhurath/forest-4/13x0.c", "path");
    setCoordinate(13, 1,
        "/areas/tol-dhurath/forest-4/13x1.c", "path");
    setCoordinate(13, 3,
        "/areas/tol-dhurath/forest-4/13x3.c", "path");
    setCoordinate(13, 4,
        "/areas/tol-dhurath/forest-4/13x4.c", "path");
    setCoordinate(13, 5,
        "/areas/tol-dhurath/forest-4/13x5.c", "path");
    setCoordinate(13, 6,
        "/areas/tol-dhurath/forest-4/13x6.c", "path");
    setCoordinate(13, 7,
        "/areas/tol-dhurath/forest-4/13x7.c", "path");
    setCoordinate(13, 9,
        "/areas/tol-dhurath/forest-4/13x9.c", "room");
    setCoordinate(14, 0,
        "/areas/tol-dhurath/forest-4/14x0.c", "path");
    setCoordinate(14, 1,
        "/areas/tol-dhurath/forest-4/14x1.c", "path");
    setCoordinate(14, 2,
        "/areas/tol-dhurath/forest-4/14x2.c", "room");
    setCoordinate(14, 3,
        "/areas/tol-dhurath/forest-4/14x3.c", "path");
    setCoordinate(14, 4,
        "/areas/tol-dhurath/forest-4/14x4.c", "room");
    setCoordinate(14, 6,
        "/areas/tol-dhurath/forest-4/14x6.c", "path");
    setCoordinate(14, 7,
        "/areas/tol-dhurath/forest-4/14x7.c", "room");
    setCoordinate(14, 8,
        "/areas/tol-dhurath/forest-4/14x8.c", "room");
    setCoordinate(15, 1,
        "/areas/tol-dhurath/forest-4/15x1.c", "path");
    setCoordinate(15, 2,
        "/areas/tol-dhurath/forest-4/15x2.c", "path");
    setCoordinate(15, 3,
        "/areas/tol-dhurath/forest-4/15x3.c", "room");
    setCoordinate(15, 4,
        "/areas/tol-dhurath/forest-4/15x4.c", "room");
    setCoordinate(15, 5,
        "/areas/tol-dhurath/forest-4/15x5.c", "path");
    setCoordinate(15, 6,
        "/areas/tol-dhurath/forest-4/15x6.c", "path");
    setCoordinate(15, 8,
        "/areas/tol-dhurath/forest-4/15x8.c", "path");
    setCoordinate(16, 3,
        "/areas/tol-dhurath/forest-4/16x3.c", "path");
    setCoordinate(16, 4,
        "/areas/tol-dhurath/forest-4/16x4.c", "path");
    setCoordinate(16, 5,
        "/areas/tol-dhurath/forest-4/16x5.c", "path");
    setCoordinate(16, 7,
        "/areas/tol-dhurath/forest-4/16x7.c", "path");
    setCoordinate(16, 8,
        "/areas/tol-dhurath/forest-4/16x8.c", "room");
    setCoordinate(17, 1,
        "/areas/tol-dhurath/forest-4/17x1.c", "room");
    setCoordinate(17, 3,
        "/areas/tol-dhurath/forest-4/17x3.c", "path");
    setCoordinate(17, 5,
        "/areas/tol-dhurath/forest-4/17x5.c", "room");
    setCoordinate(17, 7,
        "/areas/tol-dhurath/forest-4/17x7.c", "path");
    setCoordinate(18, 1,
        "/areas/tol-dhurath/forest-4/18x1.c", "room");
    setCoordinate(18, 3,
        "/areas/tol-dhurath/forest-4/18x3.c", "path");
    setCoordinate(18, 4,
        "/areas/tol-dhurath/forest-4/18x4.c", "path");
    setCoordinate(18, 5,
        "/areas/tol-dhurath/forest-4/18x5.c", "path");
    setCoordinate(18, 6,
        "/areas/tol-dhurath/forest-4/18x6.c", "path");
    setCoordinate(18, 7,
        "/areas/tol-dhurath/forest-4/18x7.c", "path");
    setCoordinate(18, 8,
        "/areas/tol-dhurath/forest-4/18x8.c", "path");
    setCoordinate(18, 9,
        "/areas/tol-dhurath/forest-4/18x9.c", "path");
    setCoordinate(19, 0,
        "/areas/tol-dhurath/forest-4/19x0.c", "path");
    setCoordinate(19, 1,
        "/areas/tol-dhurath/forest-4/19x1.c", "path");
    setCoordinate(19, 3,
        "/areas/tol-dhurath/forest-4/19x3.c", "path");
    setCoordinate(19, 4,
        "/areas/tol-dhurath/forest-4/19x4.c", "path");
    setCoordinate(19, 9,
        "/areas/tol-dhurath/forest-4/19x9.c", "path");
    setCoordinate(1, 0,
        "/areas/tol-dhurath/forest-4/1x0.c", "path");
    setCoordinate(1, 1,
        "/areas/tol-dhurath/forest-4/1x1.c", "path");
    setCoordinate(1, 2,
        "/areas/tol-dhurath/forest-4/1x2.c", "path");
    setCoordinate(1, 3,
        "/areas/tol-dhurath/forest-4/1x3.c", "room");
    setCoordinate(1, 4,
        "/areas/tol-dhurath/forest-4/1x4.c", "path");
    setCoordinate(1, 5,
        "/areas/tol-dhurath/forest-4/1x5.c", "path");
    setCoordinate(1, 6,
        "/areas/tol-dhurath/forest-4/1x6.c", "path");
    setCoordinate(1, 7,
        "/areas/tol-dhurath/forest-4/1x7.c", "path");
    setCoordinate(1, 8,
        "/areas/tol-dhurath/forest-4/1x8.c", "path");
    setCoordinate(1, 9,
        "/areas/tol-dhurath/forest-4/1x9.c", "room");
    setCoordinate(20, 0,
        "/areas/tol-dhurath/forest-4/20x0.c", "path");
    setCoordinate(20, 1,
        "/areas/tol-dhurath/forest-4/20x1.c", "room");
    setCoordinate(20, 3,
        "/areas/tol-dhurath/forest-4/20x3.c", "path");
    setCoordinate(20, 8,
        "/areas/tol-dhurath/forest-4/20x8.c", "room");
    setCoordinate(20, 9,
        "/areas/tol-dhurath/forest-4/20x9.c", "path");
    setCoordinate(21, 0,
        "/areas/tol-dhurath/forest-4/21x0.c", "room");
    setCoordinate(21, 3,
        "/areas/tol-dhurath/forest-4/21x3.c", "path");
    setCoordinate(21, 5,
        "/areas/tol-dhurath/forest-4/21x5.c", "path");
    setCoordinate(21, 6,
        "/areas/tol-dhurath/forest-4/21x6.c", "path");
    setCoordinate(21, 8,
        "/areas/tol-dhurath/forest-4/21x8.c", "room");
    setCoordinate(21, 9,
        "/areas/tol-dhurath/forest-4/21x9.c", "path");
    setCoordinate(22, 0,
        "/areas/tol-dhurath/forest-4/22x0.c", "path");
    setCoordinate(22, 3,
        "/areas/tol-dhurath/forest-4/22x3.c", "path");
    setCoordinate(22, 4,
        "/areas/tol-dhurath/forest-4/22x4.c", "room");
    setCoordinate(22, 5,
        "/areas/tol-dhurath/forest-4/22x5.c", "path");
    setCoordinate(22, 6,
        "/areas/tol-dhurath/forest-4/22x6.c", "path");
    setCoordinate(22, 7,
        "/areas/tol-dhurath/forest-4/22x7.c", "path");
    setCoordinate(22, 8,
        "/areas/tol-dhurath/forest-4/22x8.c", "path");
    setCoordinate(22, 9,
        "/areas/tol-dhurath/forest-4/22x9.c", "path");
    setCoordinate(23, 0,
        "/areas/tol-dhurath/forest-4/23x0.c", "path");
    setCoordinate(23, 1,
        "/areas/tol-dhurath/forest-4/23x1.c", "path");
    setCoordinate(23, 3,
        "/areas/tol-dhurath/forest-4/23x3.c", "path");
    setCoordinate(23, 6,
        "/areas/tol-dhurath/forest-4/23x6.c", "room");
    setCoordinate(23, 7,
        "/areas/tol-dhurath/forest-4/23x7.c", "room");
    setCoordinate(23, 9,
        "/areas/tol-dhurath/forest-4/23x9.c", "path");
    setCoordinate(24, 1,
        "/areas/tol-dhurath/forest-4/24x1.c", "entry");
    setCoordinate(24, 2,
        "/areas/tol-dhurath/forest-4/24x2.c", "path");
    setCoordinate(24, 3,
        "/areas/tol-dhurath/forest-4/24x3.c", "path");
    setCoordinate(24, 6,
        "/areas/tol-dhurath/forest-4/24x6.c", "room");
    setCoordinate(24, 7,
        "/areas/tol-dhurath/forest-4/24x7.c", "room");
    setCoordinate(24, 8,
        "/areas/tol-dhurath/forest-4/24x8.c", "path");
    setCoordinate(24, 9,
        "/areas/tol-dhurath/forest-4/24x9.c", "path");
    setCoordinate(2, 0,
        "/areas/tol-dhurath/forest-4/2x0.c", "path");
    setCoordinate(2, 1,
        "/areas/tol-dhurath/forest-4/2x1.c", "path");
    setCoordinate(2, 2,
        "/areas/tol-dhurath/forest-4/2x2.c", "path");
    setCoordinate(2, 3,
        "/areas/tol-dhurath/forest-4/2x3.c", "path");
    setCoordinate(2, 4,
        "/areas/tol-dhurath/forest-4/2x4.c", "room");
    setCoordinate(2, 7,
        "/areas/tol-dhurath/forest-4/2x7.c", "room");
    setCoordinate(2, 9,
        "/areas/tol-dhurath/forest-4/2x9.c", "path");
    setCoordinate(3, 1,
        "/areas/tol-dhurath/forest-4/3x1.c", "path");
    setCoordinate(3, 7,
        "/areas/tol-dhurath/forest-4/3x7.c", "room");
    setCoordinate(3, 8,
        "/areas/tol-dhurath/forest-4/3x8.c", "path");
    setCoordinate(3, 9,
        "/areas/tol-dhurath/forest-4/3x9.c", "path");
    setCoordinate(4, 1,
        "/areas/tol-dhurath/forest-4/4x1.c", "path");
    setCoordinate(4, 8,
        "/areas/tol-dhurath/forest-4/4x8.c", "room");
    setCoordinate(4, 9,
        "/areas/tol-dhurath/forest-4/4x9.c", "room");
    setCoordinate(5, 1,
        "/areas/tol-dhurath/forest-4/5x1.c", "path");
    setCoordinate(5, 6,
        "/areas/tol-dhurath/forest-4/5x6.c", "room");
    setCoordinate(6, 1,
        "/areas/tol-dhurath/forest-4/6x1.c", "room");
    setCoordinate(6, 6,
        "/areas/tol-dhurath/forest-4/6x6.c", "path");
    setCoordinate(6, 7,
        "/areas/tol-dhurath/forest-4/6x7.c", "path");
    setCoordinate(7, 1,
        "/areas/tol-dhurath/forest-4/7x1.c", "path");
    setCoordinate(7, 5,
        "/areas/tol-dhurath/forest-4/7x5.c", "path");
    setCoordinate(7, 6,
        "/areas/tol-dhurath/forest-4/7x6.c", "path");
    setCoordinate(7, 7,
        "/areas/tol-dhurath/forest-4/7x7.c", "path");
    setCoordinate(7, 8,
        "/areas/tol-dhurath/forest-4/7x8.c", "path");
    setCoordinate(7, 9,
        "/areas/tol-dhurath/forest-4/7x9.c", "path");
    setCoordinate(8, 1,
        "/areas/tol-dhurath/forest-4/8x1.c", "path");
    setCoordinate(8, 2,
        "/areas/tol-dhurath/forest-4/8x2.c", "path");
    setCoordinate(8, 5,
        "/areas/tol-dhurath/forest-4/8x5.c", "room");
    setCoordinate(8, 6,
        "/areas/tol-dhurath/forest-4/8x6.c", "room");
    setCoordinate(8, 7,
        "/areas/tol-dhurath/forest-4/8x7.c", "path");
    setCoordinate(8, 8,
        "/areas/tol-dhurath/forest-4/8x8.c", "room");
    setCoordinate(8, 9,
        "/areas/tol-dhurath/forest-4/8x9.c", "room");
    setCoordinate(9, 0,
        "/areas/tol-dhurath/forest-4/9x0.c", "path");
    setCoordinate(9, 1,
        "/areas/tol-dhurath/forest-4/9x1.c", "path");
    setCoordinate(9, 2,
        "/areas/tol-dhurath/forest-4/9x2.c", "path");
    setCoordinate(9, 4,
        "/areas/tol-dhurath/forest-4/9x4.c", "path");
    setCoordinate(9, 5,
        "/areas/tol-dhurath/forest-4/9x5.c", "path");

    // MapIcons
}
