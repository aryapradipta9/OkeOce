#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "facility.h"
using namespace std;

class Restaurant : public Facility
{
public:
	/**	@brief Constructor
	  *	@param posx posisi x
	  *	@param posy posisi y
	  */
	Restaurant(int posx, int posy);

	/**	@brief render nawn
		*	@param cc nawnnawn
		*/
	void render(char** cc);
};
#endif
