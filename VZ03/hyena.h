#ifndef HYENA_H
#define HYENA_H
#include "hyaenidae.h"
#include "karnivora.h"

class Hyena : public Hyaenidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Hyena();
};
#endif
