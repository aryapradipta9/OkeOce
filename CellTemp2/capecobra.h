#ifndef CAPECOBRA_H
#define CAPECOBRA_H
#include "elapidae.h"
#include "karnivora.h"

class CapeCobra : public Elapidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	CapeCobra();
};
#endif
