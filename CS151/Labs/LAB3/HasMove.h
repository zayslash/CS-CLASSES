//Team: <REZA>
//Author: <ZANIF>
//Creation: <30.10.2017>
#ifndef HASMOVE_H
#define HASMOVE_H

#include "Archive.h"

bool hasMove()
{


if (grid[0] =='-' || grid[1] == '-' || grid[2]== '-' || grid[3]== '-' || grid[4]== '-' || grid[5]== '-' || grid[6]== '-' || grid[7]== '-' || grid[8]== '-'){
		return true;
	}
return false;





}

#endif