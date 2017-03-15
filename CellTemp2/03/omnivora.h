#ifndef OMNIVORA_H
#define OMNIVORA_H
#include "animal.h"

class Omnivora : virtual public Animal {
public:
  /** @brief Inisialisasi Omnivora
    */
  Omnivora();
  /** @brief Jumlah makanan tiap hewan
    * return jumlah makan
    */
  virtual int GetFoodNum();
};
#endif