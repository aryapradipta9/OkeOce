#include "herbifora.h"

/** @brief Inisialisasi Herbifora
  */
Herbifora::Herbifora()
{
	Animal::JenisMakanan = 1;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Herbifora::GetFoodNum()
{
	// rumus Herbifora
	return (Animal::Berat * 0.5);
}
