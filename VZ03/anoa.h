#ifndef ANOA_H
#define ANOA_H
#include "bovidae.h"
#include "herbivora.h"

class Anoa : public Bovidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Anoa();
};
#endif
