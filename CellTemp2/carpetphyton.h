#ifndef CARPETPHYTON_H
#define CARPETPHYTON_H
#include "phytonidae.h"
#include "karnivora.h"

class CarpetPhyton : public Phytonidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	CarpetPhyton();
};
#endif
