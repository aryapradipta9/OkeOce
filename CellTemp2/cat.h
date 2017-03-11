#ifndef CAT_H
#define CAT_H
#include "felidae.h"
#include "karnivora.h"

class Cat : public Felidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Cat();
};
#endif
