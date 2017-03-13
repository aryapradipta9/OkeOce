#ifndef DOG_H
#define DOG_H
#include "canidae.h"
#include "karnivora.h"

class Dog : public Canidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Dog();
};
#endif
