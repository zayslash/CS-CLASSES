//Team: <REZA>
//Author: <RAYONA>
//Creation: <30.10.2017>
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

bool diagonalWinner()
{
	if (( grid[4] == grid[2] && grid[4] == grid[6] && grid[6] == grid[2]) && (grid[2] != '-') && (grid[4] != '-' )&& (grid[6] != '-')){
		return true;
	}
	else if (( grid[4] == grid[0] && grid[4] == grid[8] && grid[0] == grid[8]) && (grid[0] != '-') && (grid[4] != '-') && (grid[8] != '-')){
		return true;
	}

	return false;
}

#endif
