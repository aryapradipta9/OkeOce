#ifndef POINT_H
#define POINT_H

class Point{
	public:
		Point()
		{

		}
		~Point()
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
