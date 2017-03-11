#ifndef HABITAT_H
#define HABITAT_H
#include "point.h"
using namespace std;

class Habitat : public Point{
	public:
		/**	@brief Constructor
		  *	@param posx posisi x
		  *	@param posy posisi y
		  */
		Habitat(int posx, int posy);

		/** @brief setcagenum
		  * @param x nomor
		  */
		void SetCageNum(int x);
		/** @brief dapat cage num
		  * @return cagenum
		  */
		int GetCageNum();
		/** @brief apakah Habitat
		  * @return true
		  */
		virtual bool isHabitat();

	protected:
		/**	tipe habitat 1 land 2 air 3 water
		  */
		short HabType;
		/** nomor kandang dalam cell
		  */
		int CageNum;
};
#endif
