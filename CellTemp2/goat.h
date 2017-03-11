#ifndef GOAT_H
#define GOAT_H
#include "bovidae.h"
#include "herbivora.h"

class Goat : public Bovidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Goat();
};
#endif
