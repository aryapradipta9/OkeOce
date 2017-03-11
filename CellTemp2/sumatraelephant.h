#ifndef SUMATRAELEPHANT_H
#define SUMATRAELEPHANT_H
#include "elephantidae.h"
#include "herbivora.h"

class SumatraElephant : public Elephantidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	SumatraElephant();
};
#endif
