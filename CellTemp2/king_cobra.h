#ifndef KINGCOBRA_H
#define KINGCOBRA_H
#include "elapidae.h"
#include "karnivora.h"

class KingCobra : public Elapidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	KingCobra();
};
#endif
