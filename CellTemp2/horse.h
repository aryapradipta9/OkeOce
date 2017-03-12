#ifndef HORSE_H
#define HORSE_H
#include "equidae.h"
#include "herbivora.h"

class Horse : public Equidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Horse();
};
#endif
