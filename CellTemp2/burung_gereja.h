#ifndef BURUNGGEREJA_H
#define BURUNGGEREJA_H
#include "Passeridae.h"
#include "herbivora.h"

class BurungGereja : public Passeridae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	BurungGereja();
};
#endif
