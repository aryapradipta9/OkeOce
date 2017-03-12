#include "air_habitat.h"

/** @brief constructor
  * @param posx posisi x
  * @param posy posisi y
  */
AirHabitat::AirHabitat(int posx, int posy) : Habitat(posx,posy)//ctor
{
	Habitat::HabType = 1;
}
/**	@brief Destructor
  */
AirHabitat::~AirHabitat(){}//dtor
/**	@brief render nawn
  *	@param cc nawnnawn
  */
void AirHabitat::render(char** cc)
{
	cc[Point::y][Point::x] = 'L';
}
