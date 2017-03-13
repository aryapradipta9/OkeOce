#include "point.h"

/** @brief constructor
  */
Point::Point() {}
/** @brief destructor
  */
Point::~Point() {}
/** @brief dapat x
  *	@return posisi x
  */
int Point::GetX() {
  return(x);
}
/** @brief dapat y
  *	@return posisi y
  */
int Point::GetY() {
  return(y);
}
/** @brief set x
  *	@param posisi x
  */
void Point::SetX(int input_x) {
  x = input_x;
}
/** @brief set x
  *	@param posisi x
  */
void Point::SetY(int input_y) {
	y = input_y;
}
/** @brief isJalan
  *	@return true jika jalan. false jika tidak.
  */
bool Point::IsJalan() {
	return false;
}
/** @brief isHabitat
  *	@return true jika habitat. false jika tidak.
  */
bool Point::IsHabitat()
{
	return false;
}
