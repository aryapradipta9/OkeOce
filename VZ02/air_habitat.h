#ifndef AIRHABITAT_H
#define AIRHABITAT_H

class AirHabitat {
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		AirHabitat();
		/**	@brief Destructor
		  */
		virtual ~AirHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		char GetRender();
	protected:
};
#endif