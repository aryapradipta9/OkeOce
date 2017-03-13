#ifndef CAPE_COBRA_H
#define CAPE_COBRA_H
#include "elapidae.h"
#include "karnivora.h"

class CapeCobra : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  CapeCobra();
};
#endif
