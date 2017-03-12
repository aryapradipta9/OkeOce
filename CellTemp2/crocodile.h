#ifndef CROCODILE_H
#define CROCODILE_H
#include "crocodylidae.h"
#include "karnivora.h"

class Crocodile : public Crocodylidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Crocodile();
};
#endif
