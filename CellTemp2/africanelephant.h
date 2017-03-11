#ifndef AFRICANELEPHANT_H
#define AFRICANELEPHANT_H
#include "elephantidae.h"
#include "herbivora.h"

class AfricanElephant : public Elephantidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	AfricanElephant();
};
#endif
