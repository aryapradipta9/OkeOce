#include "omnivora.h"

/** @brief Inisialisasi Omnivora
  */
Omnivora::Omnivora() {
  Animal::jenis_makanan = 3;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Omnivora::GetFoodNum() {
  return (Animal::berat * 0.3);
}
