#ifndef PARK_H
#define PARK_H
#include "facility.h"
using namespace std;

class Park : public Facility
{
public:
	/**	@brief Constructor
	  *	@param posx posisi x
	  *	@param posy posisi y
	  */
	Park(int posx, int posy);

	/**	@brief render nawn
		*	@param cc nawnnawn
		*/
	void render(char** cc);
};
#endif
