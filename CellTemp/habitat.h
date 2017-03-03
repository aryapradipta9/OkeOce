#ifndef HABITAT_H
#define HABITAT_H

class Habitat : public Cell{
	public:
		Habitat(int posx, int posy) : Cell()
		{
			Cell::x = posx;
			Cell::y = posy;
		}
		int get_x();	//dapat x
		int get_y();	//dapat y
	protected:
};
#endif
