//Team: <REZ>
//Author: <RAYONA>
//Creation: <11.14.17>
#ifndef VELOCITY_H
#define VELOCITY_H

#include "Archive.h"

double velocity(double v,double t,double a)
{	
  
//  v = vsin@ + a*t;
  
	return   v*sin(toRad(a)) + G*t  ;
}

#endif