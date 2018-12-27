//Team: <RAYNIF>
//Author: <Egide>
//Creation: <Date>
#ifndef ZSCORES_H
#define ZSCORES_H

#include "Archive.h"

void zscores(double& x, double& y, double& z, double& w, double& v)
{
	double hold =mean(x,y,z,w,v);
  double holdRoot_Variance = sqrt(variance(x,y,z,w,v));

  x = (x - hold) / holdRoot_Variance;
  y = (y - hold) / holdRoot_Variance;
  z = (z - hold) / holdRoot_Variance;
  w = (w - hold) / holdRoot_Variance;
  v = (v - hold) / holdRoot_Variance;

}

#endif
