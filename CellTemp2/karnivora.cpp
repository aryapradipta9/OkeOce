#include "karnivora.h"

/** @brief Inisialisasi Karnifora
  */
Karnivora::Karnivora()
{
	Animal::JenisMakanan = 2;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Karnivora::GetFoodNum()
{
	// rumus Karnivora
	return (Animal::Berat * 0.2);
}