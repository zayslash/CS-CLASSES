//Team: <RAYNIF>
//Author: <ZANIF>
//Creation: <Date>
#ifndef VARIANCE_H
#define VARIANCE_H

#include "Archive.h"

double variance(double x, double y, double z, double w, double v)
{
double result;
  double hold = mean(x,y,z,w,v);
	
    x -=   hold;
	x *=  x;
	
	y -=  hold;
	y *=  y;

    z -=  hold;
	z *=  z; 

	w -=  hold;
	w *=  w;
	v -=  hold;
	v *= v;

	result = mean(x,y,z,w,v);
	return result;
}

#endif
