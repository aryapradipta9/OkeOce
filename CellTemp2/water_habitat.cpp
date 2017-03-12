#include "water_habitat.h"

/** @brief constructor
  * @param posx posisi x
  * @param posy posisi y
  */
WaterHabitat::WaterHabitat(int posx, int posy) : Habitat(posx,posy)//ctor
{
	Habitat::HabType = 1;
}
/**	@brief Destructor
  */
WaterHabitat::~WaterHabitat(){}//dtor
/**	@brief render nawn
  *	@param cc nawnnawn
  */
void WaterHabitat::render(char** cc)
{
	cc[Point::y][Point::x] = 'L';
}
