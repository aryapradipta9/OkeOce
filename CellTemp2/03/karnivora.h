#ifndef KARNIVORA_H
#define KARNIVORA_H
#include "animal.h"

class Karnivora : virtual public Animal {
public:
  /** @brief Inisialisasi Karnivora
    */
  Karnivora();
  /** @brief Jumlah makanan tiap hewan
    * return jumlah makan
    */
  virtual int GetFoodNum();
};
#endif
