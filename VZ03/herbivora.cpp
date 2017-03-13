#include "herbivora.h"

/** @brief Inisialisasi Herbivora
  */
Herbivora::Herbivora() {
	Animal::jenis_makanan = 1;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Herbivora::GetFoodNum() {
  return (Animal::berat * 0.5);
}
