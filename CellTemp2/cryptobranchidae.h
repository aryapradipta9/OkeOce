#ifndef CRYPTOBRANCHIDAE_H
#define CRYPTOBRANCHIDAE_H
#include "water_animal.h"
#include "land_animal.h"

class Cryptobranchidae : virtual public WaterAnimal, virtual public LandAnimal
{
public:
	/**	@brief Inisialisasi Famili
	  */
	Cryptobranchidae();
};
#endif