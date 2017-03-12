#ifndef WATERHABITAT_H
#define WATERHABITAT_H
#include "habitat.h"

class WaterHabitat : public Habitat{
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		WaterHabitat(int posx, int posy);
		/**	@brief Destructor
		  */
		virtual ~WaterHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		void render(char** cc);
	protected:
};
#endif
