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
	protected:
		int x;
		int y;
};
#endif