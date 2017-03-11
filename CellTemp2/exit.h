#ifndef EXIT_H
#define EXIT_H
#include "road.h"
using namespace std;

class Exit : public Road
{
public:
	/**	@brief Jalan keluar
		@param posx posisi x
		@param posy posisi y
	  */
	Exit(int posx, int posy);
};
#endif
