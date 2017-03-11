#include "point.h"

/** @brief constructor
  */
Point::Point()
{

}
/** @brief destructor
  */
Point::~Point()
{

}
/** @brief dapat x
  *	@return posisi x
  */
int Point::getx()
{
	return(x);
}
/** @brief dapat y
  *	@return posisi y
  */
int Point::gety()
{
	return(y);
}
/** @brief set x
  *	@param posisi x
  */
void Point::SetX(int _X)
{
	x = _X;
}
/** @brief set x
  *	@param posisi x
  */
void Point::SetY(int _Y)
{
	y = _Y;
}
/** @brief isJalan
  *	@return true jika jalan. false jika tidak.
  */
bool Point::isJalan()
{
	return false;
}
/** @brief isHabitat
  *	@return true jika habitat. false jika tidak.
  */
bool Point::isHabitat()
{
	return false;
}
