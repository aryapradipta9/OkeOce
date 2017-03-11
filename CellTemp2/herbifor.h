#ifndef HERBIFOR_H
#define HERBIFOR_H
#include "animal.h"

class Herbifor : virtual public Animal
{
public:
	/** @brief Inisialisasi Herbifor
	  */
	Herbifor()
	{
		Animal::JenisMakanan = 1;
	}
	/** @brief Jumlah makanan tiap hewan
	  * return jumlah makan
	  */
	virtual int GetFoodNum()
	{
		// rumus herbifor
		return (Animal::Berat * 0.5);
	}
protected:

};
#endif
