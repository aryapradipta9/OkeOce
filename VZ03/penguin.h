#ifndef PENGUIN_H
#define PENGUIN_H
#include "spheniscidae.h"
#include "karnivora.h"

class Penguin : public Spheniscidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Penguin();
};
#endif
