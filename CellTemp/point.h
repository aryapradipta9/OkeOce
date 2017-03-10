#ifndef POINT_H
#define POINT_H
#include "renderable.h"

class Point : virtual public Renderable{
	public:
		Point()
		{

		}
		virtual ~Point()
		{

		}

		int getx()
		{
			return(x);
		}
		int gety()
		{
			return(y);
		}
		void SetX(int _X)
		{
			x = _X;
		}
		void SetY(int _Y)
		{
			y = _Y;
		}
		virtual bool isJalan()
		{
			return false;
		}
		virtual bool isHabitat()
		{
			return false;
		}
	protected:
		int x;
		int y;
};
#endif
