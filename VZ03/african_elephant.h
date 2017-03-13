#ifndef AFRICAN_ELEPHANT_H
#define AFRICAN_ELEPHANT_H
#include "elephantidae.h"
#include "herbivora.h"

class AfricanElephant : public Elephantidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  AfricanElephant();
};
#endif
