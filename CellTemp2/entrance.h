#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "road.h"
using namespace std;

class Entrance : public Road
{
public:
	/**	@brief Jalan masuk
		@param posx posisi x
		@param posy posisi y
	  */
	Entrance(int posx, int posy);
};
#endif
