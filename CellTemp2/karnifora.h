#ifndef KARNIFORA_H
#define KARNIFORA_H
#include "animal.h"

class Karnifora : virtual public Animal
{
public:
	/** @brief Inisialisasi Karnifora
	  */
	Karnifora();
	/** @brief Jumlah makanan tiap hewan
	  * return jumlah makan
	  */
	virtual int GetFoodNum();
protected:
};
#endif
