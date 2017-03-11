#ifndef SHEEP_H
#define SHEEP_H
#include "bovidae.h"
#include "herbivora.h"

class Sheep : public Bovidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Sheep();
};
#endif
