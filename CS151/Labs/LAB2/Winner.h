//Team: <REZK>
//Author: <Kehinde>
//Creation: <25.10.2017>
#ifndef WINNER_H
#define WINNER_H

#include "Archive.h"

bool winner()
{

	if (verticalWinner() == true){

         return true;

	}
	else if (horizontalWinner() == true){

		return true;
	}
	else if (diagonalWinner() == true){


         return true;

	}
	else {

		return false;
	}

}

#endif
