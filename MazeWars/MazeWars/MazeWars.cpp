// MazeWars.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MazeWars.h"


// This is an example of an exported variable
MAZEWARS_API int nMazeWars=0;

// This is an example of an exported function.
MAZEWARS_API int fnMazeWars(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMazeWars::CMazeWars()
{
    return;
}
