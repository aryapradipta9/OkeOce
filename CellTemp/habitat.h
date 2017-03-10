#ifndef HABITAT_H
#define HABITAT_H
#include "point.h"
using namespace std;

class Habitat : public Point{
	public:
		Habitat(int posx, int posy) : Point()
		{
			Point::x = posx;
			Point::y = posy;
		}
		int get_x();	//dapat x
		int get_y();	//dapat y
		void SetCageNum(int x)
		{
			CageNum = x;
		}
		int GetCageNum()
		{
			return CageNum;
		}

	protected:
		short HabType; // 1 land 2 air 3 water;
		int CageNum;// nomor kandang dalam cell;
};
#endif
