#ifndef HARAMBE_H
#define HARAMBE_H
#include "hominidae.h"
#include "herbivora.h"

class Harambe : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Harambe();
};
#endif
