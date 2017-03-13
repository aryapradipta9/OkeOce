#ifndef PANDA_H
#define PANDA_H
#include "ursoidea.h"
#include "herbivora.h"

class Panda : public Ursoidea, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Panda();
};
#endif
