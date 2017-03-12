#ifndef OKAPI_H
#define OKAPI_H
#include "girrafidae.h"
#include "herbivora.h"

class Okapi : public Girrafidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Okapi();
};
#endif
