#include "karnifora.h"

/** @brief Inisialisasi Karnifora
  */
Karnifora::Karnifora()
{
	Animal::JenisMakanan = 2;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Karnifora::GetFoodNum()
{
	// rumus Karnifora
	return (Animal::Berat * 0.2);
}
