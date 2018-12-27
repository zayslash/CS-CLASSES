//Team: <REZ>
//Author: <ZANIF>
//Creation: <11.13.17>
#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

#include "Archive.h"

double displacement(double v,double t,double a)
{
  
  //
  
	return (v*cos(toRad(a))*t);
}

#endif 