
#ifndef WATERHABITAT_H
#define WATERHABITAT_H

class WaterHabitat{
	public:
		/** @brief constructor
		  * @param posx posisi x
		  * @param posy posisi y
		  */
		WaterHabitat();
		/**	@brief Destructor
		  */
		virtual ~WaterHabitat();//dtor
		/**	@brief render nawn
		  *	@param cc nawnnawn
		  */
		char GetRender();
	protected:
};
#endif