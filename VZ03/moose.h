#ifndef MOOSE_H
#define MOOSE_H
#include "cervidae.h"
#include "herbivora.h"

class Moose : public Cervidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Moose();
};
#endif
