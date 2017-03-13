#ifndef GIRRAFE_H
#define GIRRAFE_H
#include "girrafidae.h"
#include "herbivora.h"

class Girrafe : public Girrafidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Girrafe();
};
#endif
