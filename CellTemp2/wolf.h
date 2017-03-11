#ifndef WOLF_H
#define WOLF_H
#include "canidae.h"
#include "karnivora.h"

class Wolf : public Canidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Wolf();
};
#endif
