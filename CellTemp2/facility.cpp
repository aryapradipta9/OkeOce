#include "facility.h"

/**	@brief Constructor
  *	@param posx posisi x
  *	@param posy posisi y
  */
Facility::Facility(int posx, int posy) : Point()
{
	Point::x = posx;
	Point::y = posy;
}
