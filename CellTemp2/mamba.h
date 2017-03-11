#ifndef MAMBA_H
#define MAMBA_H
#include "elapidae.h"
#include "karnivora.h"

class Mamba : public Elapidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Mamba();
};
#endif
