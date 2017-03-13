#include "habitat.h"

/**	@brief Constructor
  *	@param pos_x posisi x
  *	@param pos_y posisi y
  */
Habitat::Habitat(int pos_x, int pos_y) : Point() {
	Point::x = pos_x;
	Point::y = pos_y;
}
/** @brief setcage_num
  * @param x nomor
  */
void Habitat::SetCageNum(int x) {
	cage_num = x;
}
/** @brief dapat cage num
  * @return cage_num
  */
int Habitat::GetCageNum() {
	return cage_num;
}
/** @brief apakah Habitat
  * @return true
  */
bool Habitat::IsHabitat() {
	return true;
}
