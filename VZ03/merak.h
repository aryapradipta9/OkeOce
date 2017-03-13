#ifndef MERAK_H
#define MERAK_H
#include "phasianidae.h"
#include "omnivora.h"

class Penguin : public Phasianidae, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Merak();
};
#endif
