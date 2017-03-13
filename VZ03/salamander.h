#ifndef SALAMANDER_H
#define SALAMANDER_H
#include "cryptobranchidae.h"
#include "karnivora.h"

class Salamander : public Cryptobranchidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Salamander();
};
#endif
