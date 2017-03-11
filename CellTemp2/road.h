#ifndef ROAD_H
#define ROAD_H
#include "facility.h"
using namespace std;

class Road : public Facility
{
public:
	/** @brief jalan
	  * @param posx posisi x
	  *	@param posy posisi y
	  */
	Road(int posx, int posy);
	/** @brief IsJalan
	  * @return true jika jalan.
	  */
	virtual bool isJalan();
	/** @brief render nawn nawn
	  * @param cc nawn nawn
	  */
	void render(char** cc);
};
#endif
