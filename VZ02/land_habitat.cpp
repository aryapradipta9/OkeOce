#include "land_habitat.h"

/** @brief constructor
  * @param posx posisi x
  * @param posy posisi y
  */
LandHabitat::LandHabitat()//ctor{}
/**	@brief Destructor
  */
LandHabitat::~LandHabitat(){}//dtor
/**	@brief render nawn
  *	@param cc nawnnawn
  */
char LandHabitat::GetRender()
{
	return('*');
}