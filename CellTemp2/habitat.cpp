#include "habitat.h"

/**	@brief Constructor
  *	@param posx posisi x
  *	@param posy posisi y
  */
Habitat::Habitat(int posx, int posy) : Point()
{
	Point::x = posx;
	Point::y = posy;
}

/** @brief setcagenum
  * @param x nomor
  */
void Habitat::SetCageNum(int x)
{
	CageNum = x;
}
/** @brief dapat cage num
  * @return cagenum
  */
int Habitat::GetCageNum()
{
	return CageNum;
}
/** @brief apakah Habitat
  * @return true
  */
bool Habitat::isHabitat()
{
	return true;
}
