#ifndef GORILLA_H
#define GORILLA_H
#include "hominidae.h"
#include "herbivora.h"

class Gorilla : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Gorilla();
};
#endif
