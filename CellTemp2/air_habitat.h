#ifndef AIRHABITAT_H
#define AIRHABITAT_H
#include "habitat.h"

class AirHabitat : public Habitat{
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		AirHabitat(int posx, int posy);
		/**	@brief Destructor
		  */
		virtual ~AirHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		void render(char** cc);
	protected:
};
#endif
