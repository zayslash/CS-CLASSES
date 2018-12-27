//Team: <REZK>
//Author: <Egide>
//Creation: <25.10.2017>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{

	if (a == 'X' && d == 'X' && g == 'X' || a == 'O' && d == 'O' && g == 'O' ){

      return true ;

	}else if (b == 'X' && e == 'X' && h == 'X' || b == 'O' && e == 'O' && h == 'O') {

      return true;

	} else if (c == 'X' && f == 'X' && i == 'X' || c == 'O' && f == 'O' && i == 'O') {

      return true;

	}else {
      return false;
	}



  return false;
}

#endif
