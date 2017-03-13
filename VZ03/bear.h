#ifndef BEAR_H
#define BEAR_H
#include "ursoidea.h"
#include "omnivora.h"

class Bear : public Ursoidea, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Bear();
};
#endif
