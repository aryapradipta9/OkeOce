#ifndef FACILITY_H
#define FACILITY_H
#include "point.h"
using namespace std;

class Facility : public Point
{
public:
	/**	@brief Constructor
	  *	@param posx posisi x
	  *	@param posy posisi y
	  */
	Facility(int posx, int posy);
};
#endif
