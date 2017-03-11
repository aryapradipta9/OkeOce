#include "land_habitat.h"

/** @brief constructor
  * @param posx posisi x
  * @param posy posisi y
  */
LandHabitat::LandHabitat(int posx, int posy) : Habitat(posx,posy)//ctor
{
	Habitat::HabType = 1;
}
/**	@brief Destructor
  */
virtual LandHabitat::~LandHabitat(){}//dtor
/**	@brief render nawn
  *	@param cc nawnnawn
  */
void LandHabitat::render(char** cc)
{
	cc[Point::y][Point::x] = 'L';
}
