#include "herbifor.h"

/** @brief Inisialisasi Herbifor
  */
Herbifor::Herbifor()
{
	Animal::JenisMakanan = 1;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
virtual int Herbifor::GetFoodNum()
{
	// rumus herbifor
	return (Animal::Berat * 0.5);
}