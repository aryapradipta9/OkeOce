#ifndef LION_H
#define LION_H
#include "felidae.h"
#include "karnivora.h"

class Lion : public Felidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Lion();
};
#endif
