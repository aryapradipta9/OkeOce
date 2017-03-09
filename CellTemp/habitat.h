#ifndef HABITAT_H
#define HABITAT_H

class Habitat : public Point{
	public:
		Habitat(int posx, int posy) : Cell()
		{
			Cell::x = posx;
			Cell::y = posy;
		}
		int get_x();	//dapat x
		int get_y();	//dapat y
	protected:
		short HabType; // 1 land 2 air 3 water;
};
#endif
