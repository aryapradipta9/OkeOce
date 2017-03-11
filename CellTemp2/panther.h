#ifndef PANTHER_H
#define PANTHER_H
#include "felidae.h"
#include "karnivora.h"

class Panther : public Felidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Panther();
};
#endif
