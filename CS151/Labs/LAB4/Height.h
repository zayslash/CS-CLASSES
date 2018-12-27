//Team: <REZ>
//Author: <EGIDE>
//Creation: <11.14.17>
#ifndef HEIGHT_H
#define HEIGHT_H

#include "Archive.h"

double height(double v,double t,double a)
{
  // formula of the height of a projectile
  
  // 
 
	return ( (v*sin(toRad(a)) * t) + (0.5* G * (t*t)) ) ;
}

#endif 