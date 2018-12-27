//Team: <RAYNIF>
//Author: <Zanif>
//Creation: <Date>
#ifndef STATS_H
#define STATS_H

#include "Archive.h"

std::string stats(double x, double y, double z, double w, double v)
{
	//Rewrite the body of this function
	std::stringstream result;
	result.precision(2);
	result << std::fixed;
	result << "For values\n";
	result << "[" << x << "," << y << "," << z << "," << w << "," << v << "]\n" ;
	result << "Mean\n";
    result << mean(x,y,z,w,v) << "\n";
	result << "Standard Deviation\n";
	result << sqrt(variance(x,y,z,w,v)) << "\n" ;
	result << "Z-scores\n";
	zscores(x,y,z,w,v);
	result << "[" << x << "," << y << "," << z << "," << w << "," << v << "]";



	return result.str();}

#endif
