#include "facility.h"

/**	@brief Constructor
  *	@param pos_x posisi x
  *	@param pos_y posisi y
  */
Facility::Facility(int posx, int posy) : Point() {
  Point::x = pos_x;
  Point::y = pos_y;
}
