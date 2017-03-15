#include "karnivora.h"

/** @brief Inisialisasi Karnifora
  */
Karnivora::Karnivora() {
  Animal::jenis_makanan = 2;
}
/** @brief Jumlah makanan tiap hewan
  * return jumlah makan
  */
int Karnivora::GetFoodNum() {
  return (Animal::berat * 0.2);
}