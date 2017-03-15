#ifndef HERBIVORA_H
#define HERBIVORA_H
#include "animal.h"

class Herbivora : virtual public Animal {
public:
  /** @brief Inisialisasi Herbivor
    */
  Herbivora();
  /** @brief Jumlah makanan tiap hewan
    * return jumlah makan
    */
  virtual int GetFoodNum();
};
#endif
