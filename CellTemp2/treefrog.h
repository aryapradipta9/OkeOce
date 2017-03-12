#ifndef TREEFROG_H
#define TREEFROG_H
#include "hylidae.h"
#include "karnivora.h"

class TreeFrog : public Hylidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	TreeFrog();
};
#endif
