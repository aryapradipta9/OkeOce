#ifndef REINDEER_H
#define REINDEER_H
#include "cervidae.h"
#include "herbivora.h"

class Reindeer : public Cervidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Reindeer();
};
#endif
