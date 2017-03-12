#include "omnivora.h"

/** @brief Inisialisasi Omnivora
  */
Omnivora::Omnivora()
{
	Animal::JenisMakanan = 3;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Omnivora::GetFoodNum()
{
	// rumus Omnivora
	return (Animal::Berat * 0.3);
}
