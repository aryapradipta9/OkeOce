#ifndef ORANGUTAN_H
#define ORANGUTAN_H
#include "hominidae.h"
#include "herbivora.h"

class Orangutan : public Hominidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Orangutan();
};
#endif
