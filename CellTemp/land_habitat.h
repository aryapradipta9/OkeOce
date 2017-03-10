#ifndef LANDHABITAT_H
#define LANDHABITAT_H
#include "habitat.h"

class LandHabitat : public Habitat{
	public:
		LandHabitat(int posx, int posy) : Habitat(posx,posy)//ctor
		{
			Habitat::HabType = 1;
		}
		virtual ~LandHabitat(){};//dtor
		void render(char** cc)
		{
			cc[Point::y][Point::x] = 'L';
		}
	protected:
};
#endif
