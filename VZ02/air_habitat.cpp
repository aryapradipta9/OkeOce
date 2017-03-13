
#include "air_habitat.h"

/** @brief constructor
  * @param posx posisi x
  * @param posy posisi y
  */
AirHabitat::AirHabitat(){}
/**	@brief Destructor
  */
AirHabitat::~AirHabitat(){}//dtor
/**	@brief render nawn
  *	@param cc nawnnawn
  */
char AirHabitat::GetRender()
{
	return ('%');
}