#ifndef OMNIFORA_H
#define OMNIFORA_H
#include "animal.h"

class Omnifora : virtual public Animal
{
public:
	/** @brief Inisialisasi Omnifora
	  */
	Omnifora();
	/** @brief Jumlah makanan tiap hewan
	  * return jumlah makan
	  */
	virtual int GetFoodNum();
protected:
};
#endif
