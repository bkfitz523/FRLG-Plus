#include "global.h"
#include "metatile_behavior.h"
#include "constants/metatile_behaviors.h"

static const bool8 sTileSurfable[METATILE_COUNT] = {
    [MB_POND_WATER] = TRUE,
    [MB_SEMI_DEEP_WATER] = TRUE,
    [MB_DEEP_WATER] = TRUE,
    [MB_WATERFALL] = TRUE,
    [MB_OCEAN_WATER] = TRUE,
    [MB_1A] = TRUE,
    [MB_1B] = TRUE,
    [MB_EASTWARD_CURRENT] = TRUE,
    [MB_WESTWARD_CURRENT] = TRUE,
    [MB_NORTHWARD_CURRENT] = TRUE,
    [MB_SOUTHWARD_CURRENT] = TRUE
};

static const u8 sTileBitAttributes[32] = {
    [0] = 0x00,
    [1] = 0x01,
    [2] = 0x02,
    [3] = 0x04,
    [4] = 0x08,
};

bool8 MetatileBehavior_IsATile(u8 metatileBehavior)
{
    return TRUE;
}

bool8 MetatileBehavior_IsJumpEast(u8 metatileBehavior)
{
    if(metatileBehavior == MB_JUMP_EAST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsJumpWest(u8 metatileBehavior)
{
    if(metatileBehavior == MB_JUMP_WEST)
            return TRUE;
        else
            return FALSE;
}

bool8 MetatileBehavior_IsJumpNorth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_JUMP_NORTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsJumpSouth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_JUMP_SOUTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPokeGrass(u8 metatileBehavior)
{
    if(metatileBehavior == MB_TALL_GRASS || metatileBehavior == MB_CYCLING_ROAD_PULL_DOWN_GRASS || metatileBehavior == MB_LONG_GRASS || metatileBehavior == MB_ASHGRASS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSand(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SAND || metatileBehavior == MB_SAND_CAVE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSandOrShallowFlowingWater(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SAND || metatileBehavior == MB_SHALLOW_WATER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDeepSand(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsReflective(u8 metatileBehavior)
{
    if(metatileBehavior == MB_POND_WATER
        || metatileBehavior == MB_PUDDLE
        || metatileBehavior == MB_1A
        || metatileBehavior == MB_1B
        || metatileBehavior == MB_ICE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsIce(u8 metatileBehavior)
{
    if(metatileBehavior == MB_ICE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWarpDoor(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WARP_DOOR)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWarpDoor_2(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WARP_DOOR)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsEscalator(u8 metatileBehavior)
{
    if(metatileBehavior >= MB_UP_ESCALATOR && metatileBehavior <= MB_DOWN_ESCALATOR)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDirectionalUpRightStairWarp(u8 metatileBehavior)
{
    u8 result = FALSE;

    if(metatileBehavior == MB_UP_RIGHT_STAIR_WARP)
        result = TRUE;

    return result;
}

bool8 MetatileBehavior_IsDirectionalUpLeftStairWarp(u8 metatileBehavior)
{
    u8 result = FALSE;

    if(metatileBehavior == MB_UP_LEFT_STAIR_WARP)
        result = TRUE;

    return result;
}

bool8 MetatileBehavior_IsDirectionalDownRightStairWarp(u8 metatileBehavior)
{
    u8 result = FALSE;

    if(metatileBehavior == MB_DOWN_RIGHT_STAIR_WARP)
        result = TRUE;

    return result;
}

bool8 MetatileBehavior_IsDirectionalDownLeftStairWarp(u8 metatileBehavior)
{
    u8 result = FALSE;

    if(metatileBehavior == MB_DOWN_LEFT_STAIR_WARP)
        result = TRUE;

    return result;
}

bool8 MetatileBehavior_IsDirectionalStairWarp(u8 metatileBehavior)
{
    bool8 result = FALSE;

    if(metatileBehavior >= MB_UP_RIGHT_STAIR_WARP && metatileBehavior <= MB_DOWN_LEFT_STAIR_WARP)
        result = TRUE;
    else
        result = FALSE;

    return result;
}

bool8 MetatileBehavior_IsLadder(u8 metatileBehavior)
{
    if(metatileBehavior == MB_LADDER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsNonAnimDoor(u8 metatileBehavior)
{
    if(metatileBehavior == MB_CAVE_DOOR)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDeepSouthWarp(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsSurfable(u8 metatileBehavior)
{
    if(sTileSurfable[metatileBehavior] & 1)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSemiDeepWater(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SEMI_DEEP_WATER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsEastArrowWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_EAST_ARROW_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWestArrowWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WEST_ARROW_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsNorthArrowWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_NORTH_ARROW_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSouthArrowWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SOUTH_ARROW_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedIsArrowWarp(u8 metatileBehavior)
{
    u8 result = FALSE;

    if(MetatileBehavior_IsEastArrowWarp(metatileBehavior)
    || MetatileBehavior_IsWestArrowWarp(metatileBehavior)
    || MetatileBehavior_IsNorthArrowWarp(metatileBehavior)
    || MetatileBehavior_IsSouthArrowWarp(metatileBehavior))
        result = TRUE;

    return result;
}

bool8 MetatileBehavior_IsForcedMovementTile(u8 metatileBehavior)
{
    if((metatileBehavior >= MB_WALK_EAST && metatileBehavior <= MB_UNKNOWN_MOVEMENT_48)
        ||(metatileBehavior >= MB_EASTWARD_CURRENT && metatileBehavior <= MB_SOUTHWARD_CURRENT)
        || metatileBehavior == MB_WATERFALL
        || metatileBehavior == MB_ICE
        || (metatileBehavior >= MB_SPIN_RIGHT && metatileBehavior <= MB_SPIN_DOWN))
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsIce_2(u8 metatileBehavior)
{
    if(metatileBehavior == MB_ICE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsUnknownMovement48(u8 metatileBehavior)
{
    if(metatileBehavior == MB_UNKNOWN_MOVEMENT_48)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWalkNorth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WALK_NORTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWalkSouth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WALK_SOUTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWalkWest(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WALK_WEST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWalkEast(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WALK_EAST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsNorthwardCurrent(u8 metatileBehavior)
{
    if(metatileBehavior == MB_NORTHWARD_CURRENT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSouthwardCurrent(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SOUTHWARD_CURRENT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWestwardCurrent(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WESTWARD_CURRENT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsEastwardCurrent(u8 metatileBehavior)
{
    if(metatileBehavior == MB_EASTWARD_CURRENT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSlideNorth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SLIDE_NORTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSlideSouth(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SLIDE_SOUTH)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSlideWest(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SLIDE_WEST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSlideEast(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SLIDE_EAST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsCounter(u8 metatileBehavior)
{
    if(metatileBehavior == MB_COUNTER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingTVScreen(u8 tile, u8 playerDirection)
{
    if(playerDirection != DIR_NORTH)
        return FALSE;
    else if(tile == MB_TELEVISION)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPC(u8 metatileBehavior)
{
    if(metatileBehavior == MB_PC)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_HasRipples(u8 metatileBehavior)
{
    if(metatileBehavior == MB_POND_WATER || metatileBehavior == MB_PUDDLE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPuddle(u8 metatileBehavior)
{
    if(metatileBehavior == MB_PUDDLE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsTallGrass_2(u8 metatileBehavior)
{
    if(metatileBehavior == MB_TALL_GRASS || metatileBehavior == MB_CYCLING_ROAD_PULL_DOWN_GRASS || metatileBehavior == MB_ASHGRASS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsLongGrass(u8 metatileBehavior)
{
    if(metatileBehavior == MB_LONG_GRASS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_4(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsFootprints(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsBridge(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_GetBridgeType(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_UnusedIsMB_01(u8 metatileBehavior)
{
    if(metatileBehavior == MB_01)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedIsTallGrass(u8 metatileBehavior)
{
    if(metatileBehavior == MB_TALL_GRASS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsIndoorEncounter(u8 metatileBehavior)
{
    if(metatileBehavior == MB_0B)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsMountain(u8 metatileBehavior)
{
    if(metatileBehavior == MB_0C)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDiveable(u8 metatileBehavior)
{
    if(metatileBehavior >= MB_SEMI_DEEP_WATER && metatileBehavior <= MB_DEEP_WATER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsUnableToEmerge(u8 metatileBehavior)
{
    if(metatileBehavior == MB_UNDERWATER_BLOCKED_ABOVE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsShallowFlowingWater(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SHALLOW_WATER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsThinIce(u8 metatileBehavior)
{
    if(metatileBehavior == MB_THIN_ICE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsCrackedIce(u8 metatileBehavior)
{
    if(metatileBehavior == MB_CRACKED_ICE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDeepSemiDeepOrSplashingWater(u8 metatileBehavior)
{
    if((metatileBehavior >= MB_SEMI_DEEP_WATER && metatileBehavior <= MB_DEEP_WATER)
        || metatileBehavior == MB_OCEAN_WATER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedIsMB1A(u8 metatileBehavior)
{
    if(metatileBehavior == MB_1A)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSurfableAndNotWaterfall(u8 metatileBehavior)
{
    if(MetatileBehavior_IsSurfable(metatileBehavior)
        && !MetatileBehavior_IsWaterfall(metatileBehavior))
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsEastBlocked(u8 metatileBehavior)
{
    if(metatileBehavior == MB_IMPASSABLE_EAST
        || metatileBehavior == MB_IMPASSABLE_NORTHEAST
        || metatileBehavior == MB_IMPASSABLE_SOUTHEAST)
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWestBlocked(u8 metatileBehavior)
{
    if(metatileBehavior == MB_IMPASSABLE_WEST
        || metatileBehavior == MB_IMPASSABLE_NORTHWEST
        || metatileBehavior == MB_IMPASSABLE_SOUTHWEST)
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsNorthBlocked(u8 metatileBehavior)
{
    if(metatileBehavior == MB_IMPASSABLE_NORTH
        || metatileBehavior == MB_IMPASSABLE_NORTHEAST
        || metatileBehavior == MB_IMPASSABLE_NORTHWEST)
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSouthBlocked(u8 metatileBehavior)
{
    if(metatileBehavior == MB_IMPASSABLE_SOUTH
        || metatileBehavior == MB_IMPASSABLE_SOUTHEAST
        || metatileBehavior == MB_IMPASSABLE_SOUTHWEST)
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsShortGrass(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsHotSprings(u8 metatileBehavior)
{
    if(metatileBehavior == 0x28)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWaterfall(u8 metatileBehavior)
{
    if(metatileBehavior == MB_WATERFALL)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_9(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse(u8 metatileBehavior){ return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_2(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_3(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_4(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsPacifidlogLog(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_ReturnFalse_11(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsRegionMap(u8 metatileBehavior)
{
    if(metatileBehavior == MB_REGION_MAP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedReturnFalse_5(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_6(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_7(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_8(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsLavaridgeB1FWarp(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsLavaridge1FWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_LAVARIDGE_1F_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWarpPad(u8 metatileBehavior)
{
    if(metatileBehavior == MB_REGULAR_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsUnionRoomWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_UNION_ROOM_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsWater(u8 metatileBehavior)
{
    if((metatileBehavior >= MB_POND_WATER && metatileBehavior <= MB_DEEP_WATER)
        || metatileBehavior == MB_OCEAN_WATER
        || (metatileBehavior >= MB_EASTWARD_CURRENT && metatileBehavior <= MB_SOUTHWARD_CURRENT))
            return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsFallWarp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_FALL_WARP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_13(u8 metatileBehavior){ return FALSE; }

bool32 MetatileBehavior_IsCyclingRoadPullDownTile(u8 metatileBehavior)
{
    if(metatileBehavior >= MB_CYCLING_ROAD_PULL_DOWN && metatileBehavior <= MB_CYCLING_ROAD_PULL_DOWN_GRASS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsCyclingRoadPullDownTileGrass(u8 metatileBehavior)
{
    return metatileBehavior == MB_CYCLING_ROAD_PULL_DOWN_GRASS;
}

bool8 MetatileBehavior_IsBumpySlope(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsIsolatedVerticalRail(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsIsolatedHorizontalRail(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsVerticalRail(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_IsHorizontalRail(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsSeaweed(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SEAWEED)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsMB0A(u8 metatileBehavior)
{
    if(metatileBehavior == MB_0A)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedReturnFalse_9(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsBookshelf(u8 metatileBehavior)
{
    if(metatileBehavior == MB_BOOKSHELF)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPokeMartShelf(u8 metatileBehavior)
{
    if(metatileBehavior == MB_POKEMART_SHELF)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingPokemonCenterSign(u8 tile, u8 playerDirection)
{
    if(playerDirection != DIR_NORTH)
        return FALSE;
    else if(tile == MB_POKEMON_CENTER_SIGN)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingPokeMartSign(u8 tile, u8 playerDirection)
{
    if(playerDirection != DIR_NORTH)
        return FALSE;
    else if(tile == MB_POKEMART_SIGN)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_UnusedReturnFalse_10(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_11(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_12(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_UnusedReturnFalse_13(u8 metatileBehavior) { return FALSE; }

bool8 TestMetatileAttributeBit(u8 arg1, u8 arg2)
{
    if(sTileBitAttributes[arg1] & arg2)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSpinRight(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SPIN_RIGHT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSpinLeft(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SPIN_LEFT)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSpinUp(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SPIN_UP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSpinDown(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SPIN_DOWN)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsStopSpinning(u8 metatileBehavior)
{
    if(metatileBehavior == MB_STOP_SPINNING)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSpinTile(u8 metatileBehavior)
{
    bool8 result = FALSE;

    if(metatileBehavior >= MB_SPIN_RIGHT && metatileBehavior <= MB_SPIN_DOWN)
        result = TRUE;
    else
        result = FALSE;

    return result;
}

bool8 MetatileBehavior_IsSignpost(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SIGNPOST)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsCabinet(u8 metatileBehavior)
{
    if(metatileBehavior == MB_CABINET)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsKitchen(u8 metatileBehavior)
{
    if(metatileBehavior == MB_KITCHEN)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsDresser(u8 metatileBehavior)
{
    if(metatileBehavior == MB_DRESSER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSnacks(u8 metatileBehavior)
{
    if(metatileBehavior == MB_SNACKS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsStrengthButton(u8 metatileBehavior)
{
    if(metatileBehavior == MB_STRENGTH_BUTTON)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingMB_8D(u8 tile, u8 playerDirection)
{
    if(playerDirection != DIR_NORTH)
        return FALSE;
    else if(tile == MB_8D)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingBattleRecords(u8 tile, u8 playerDirection)
{
    if(playerDirection != DIR_NORTH)
        return FALSE;
    else if(tile == MB_BATTLE_RECORDS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsQuestionnaire(u8 metatileBehavior)
{
    if(metatileBehavior == MB_QUESTIONNAIRE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsIndigoPlateauMark(u8 metatileBehavior)
{
    if(metatileBehavior == MB_INDIGO_PLATEAU_MARK_DPAD)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsIndigoPlateauMark2(u8 metatileBehavior)
{
    if(metatileBehavior == MB_INDIGO_PLATEAU_MARK_2_DPAD)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsFood(u8 metatileBehavior)
{
    if(metatileBehavior == MB_FOOD)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsRockStairs(u8 metatileBehavior)
{
    bool8 result = FALSE;

    if(metatileBehavior == MB_ROCK_STAIRS)
        result = TRUE;
    else
        result = FALSE;

    return result;
}

bool8 MetatileBehavior_IsBlueprints(u8 metatileBehavior)
{
    if(metatileBehavior == MB_BLUEPRINTS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPainting(u8 metatileBehavior)
{
    if(metatileBehavior == MB_PAINTING)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsPowerPlantMachine(u8 metatileBehavior)
{
    if(metatileBehavior == MB_POWER_PLANT_MACHINE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsTelephone(u8 metatileBehavior)
{
    if(metatileBehavior == MB_TELEPHONE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsComputer(u8 metatileBehavior)
{
    if(metatileBehavior == MB_COMPUTER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsAdvertisingPoster(u8 metatileBehavior)
{
    if(metatileBehavior == MB_ADVERTISING_POSTER)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsTastyFood(u8 metatileBehavior)
{
    if(metatileBehavior == MB_FOOD_SMELLS_TASTY)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsTrashBin(u8 metatileBehavior)
{
    if(metatileBehavior == MB_TRASH_BIN)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsCup(u8 metatileBehavior)
{
    if(metatileBehavior == MB_CUP)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_19(u8 metatileBehavior) { return FALSE; }
bool8 MetatileBehavior_ReturnFalse_20(u8 metatileBehavior) { return FALSE; }

bool8 MetatileBehavior_IsBlinkingLights(u8 metatileBehavior)
{
    if(metatileBehavior == MB_BLINKING_LIGHTS)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsMB9F(u8 metatileBehavior)
{
    if(metatileBehavior == MB_9F)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsImpressiveMachine(u8 metatileBehavior)
{
    if(metatileBehavior == MB_IMPRESSIVE_MACHINE)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsVideoGame(u8 metatileBehavior)
{
    if(metatileBehavior == MB_VIDEO_GAME)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsBurglary(u8 metatileBehavior)
{
    if(metatileBehavior == MB_BURGLARY)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsMBA3(u8 metatileBehavior)
{
    if(metatileBehavior == MB_A3)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsAshGrass(u8 metatileBehavior)
{
    if (metatileBehavior == MB_ASHGRASS)
        return TRUE;
    else
        return FALSE;
}
