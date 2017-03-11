#ifndef HERBIFORA_H
#define HERBIFORA_H
#include "animal.h"

class Herbifora : virtual public Animal
{
public:
	/** @brief Inisialisasi Herbifor
	  */
	Herbifora();
	/** @brief Jumlah makanan tiap hewan
	  * return jumlah makan
	  */
	virtual int GetFoodNum();
protected:
};
#endif
