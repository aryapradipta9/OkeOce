#ifndef HYLIDAE_H
#define HYLIDAE_H
#include "water_animal.h"
#include "land_animal.h"

class Hylidae : virtual public WaterAnimal, virtual public LandAnimal
{
public:
	/**	@brief Inisialisasi Famili
	  */
	Hylidae();
};
#endif