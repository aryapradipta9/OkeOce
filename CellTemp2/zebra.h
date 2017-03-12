#ifndef ZEBRA_H
#define ZEBRA_H
#include "equidae.h"
#include "herbivora.h"

class Zebra : public Equidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Zebra();
};
#endif
