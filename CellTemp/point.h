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
	protected:
		int x;
		int y;
};
#endif
