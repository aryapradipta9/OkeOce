#ifndef RHINO_H
#define RHINO_H
#include "rhinocerotidae.h"
#include "herbivora.h"

class Rhino : public Rhinocerotidae, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Rhino();
};
#endif
