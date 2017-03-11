#ifndef LANDHABITAT_H
#define LANDHABITAT_H
#include "habitat.h"

class LandHabitat : public Habitat{
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		LandHabitat(int posx, int posy);
		/**	@brief Destructor
		  */
		virtual ~LandHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		void render(char** cc);
	protected:
};
#endif
