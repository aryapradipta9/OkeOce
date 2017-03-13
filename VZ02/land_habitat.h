
#ifndef LANDHABITAT_H
#define LANDHABITAT_H

class LandHabitat{
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		LandHabitat();
		/**	@brief Destructor
		  */
		virtual ~LandHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		char GetRender();
	protected:
};
#endif