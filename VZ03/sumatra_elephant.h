#ifndef SUMATRA_ELEPHANT_H
#define SUMATRA_ELEPHANT_H
#include "elephantidae.h"
#include "herbivora.h"

class SumatraElephant : public Elephantidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SumatraElephant();
};
#endif
