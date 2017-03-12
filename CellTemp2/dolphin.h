#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "cetacea.h"
#include "karnivora.h"

class Dolphin : public Cetacea, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Dolphin();
};
#endif
