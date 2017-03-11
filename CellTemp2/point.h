#ifndef POINT_H
#define POINT_H
#include "renderable.h"

class Point : virtual public Renderable{
	public:
		/** @brief constructor
		  */
		Point();
		/** @brief destructor
		  */
		virtual ~Point();
		/** @brief dapat x
		  *	@return posisi x
		  */
		int getx();
		/** @brief dapat y
		  *	@return posisi y
		  */
		int gety();
		/** @brief set x
		  *	@param posisi x
		  */
		void SetX(int _X);
		/** @brief set x
		  *	@param posisi x
		  */
		void SetY(int _Y);
		/** @brief isJalan
		  *	@return true jika jalan. false jika tidak.
		  */
		virtual bool isJalan();
		/** @brief isHabitat
		  *	@return true jika habitat. false jika tidak.
		  */
		virtual bool isHabitat();
	protected:
		/** posisi x
		  */
		int x;
		/** posisi y
		  */
		int y;
};
#endif
