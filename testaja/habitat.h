#ifndef HABITAT_H
#define HABITAT_H

class Habitat : public Point{
	public:
		Habitat(int posx, int posy) : Point()
		{
			Point::x = posx;
			Point::y = posy;
		}
		int get_x();	//dapat x
		int get_y();	//dapat y
	protected:
};
#endif
