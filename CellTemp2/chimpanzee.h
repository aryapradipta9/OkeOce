#ifndef CHIMP_H
#define CHIMP_H
#include "hominidae.h"
#include "herbivora.h"

class Chimpanzee : public Hominidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Chimpanzee();
};
#endif
