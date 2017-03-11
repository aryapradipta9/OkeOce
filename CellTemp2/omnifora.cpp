#include "omnifora.h"

/** @brief Inisialisasi Omnifora
  */
Omnifora::Omnifora()
{
	Animal::JenisMakanan = 1;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
virtual int Omnifora::GetFoodNum()
{
	// rumus Omnifora
	return (Animal::Berat * 0.3);
}
