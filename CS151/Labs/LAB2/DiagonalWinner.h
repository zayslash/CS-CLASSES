//Team: <REZK>
//Author: <RAYONA>
//Creation: <25.10.2017>
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

bool diagonalWinner()
{

	if (a == 'X' && e == 'X' && i == 'X' || a == 'O' && e == 'O' && i == 'O' ){

      return true ;

	}else if (c == 'X' && e == 'X' && g == 'X' || c == 'O' && e == 'O' && g == 'O') {

      return true;

	} else {
      return false;
	}




}

#endif
