#include "herbivora.h"

/** @brief Inisialisasi Herbivora
  */
Herbivora::Herbivora()
{
	Animal::JenisMakanan = 1;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Herbivora::GetFoodNum()
{
	// rumus Herbivora
	return (Animal::Berat * 0.5);
}