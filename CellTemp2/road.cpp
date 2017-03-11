#include "road.h"

/** @brief jalan
  * @param posx posisi x
  *	@param posy posisi y
  */
Road::Road(int posx, int posy) : Facility(posx,posy)
{}
/** @brief IsJalan
  * @return true jika jalan.
  */
bool Road::isJalan()
{
	return true;
}
/** @brief render nawn nawn
  * @param cc nawn nawn
  */
void Road::render(char** cc)
{
	cc[Point::y][Point::x] = '-';
}
