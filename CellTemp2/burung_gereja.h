#ifndef BURUNGGEREJA_H
#define BURUNGGEREJA_H
#include "passeridae.h"
#include "herbivora.h"

class BurungGereja : public Passeridae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	BurungGereja();
};
#endif
