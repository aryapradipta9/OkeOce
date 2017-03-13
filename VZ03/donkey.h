#ifndef DONKEY_H
#define DONKEY_H
#include "equidae.h"
#include "herbivora.h"

class Donkey : public Equidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Donkey();
};
#endif
