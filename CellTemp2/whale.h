#ifndef WHALE_H
#define WHALE_H
#include "cetacea.h"
#include "karnivora.h"

class Whale : public Cetacea, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Whale();
};
#endif
