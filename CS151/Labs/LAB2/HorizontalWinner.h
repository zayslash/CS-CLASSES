//Team: <REZK>
//Author: <EGIDE>
//Creation: <25.10.2017>
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

bool horizontalWinner()
{
	if (a == 'X' && b == 'X' && c == 'X' || a == 'O' && b == 'O' && c == 'O' ){

      return true ;

	}else if (d == 'X' && e == 'X' && f == 'X' || d == 'O' && e == 'O' && f == 'O') {

      return true;

	} else if (g == 'X' && h == 'X' && i == 'X' || g == 'O' && h == 'O' && i == 'O') {

      return true;

	}else {

      return false;
	}


}

#endif
