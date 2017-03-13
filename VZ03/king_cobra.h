#ifndef KING_COBRA_H
#define KING_COBRA_H
#include "elapidae.h"
#include "karnivora.h"

class KingCobra : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
	KingCobra();
};
#endif
