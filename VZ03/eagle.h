#ifndef EAGLE_H
#define EAGLE_H
#include "accipitridae.h"
#include "karnivora.h"

class Eagle : public Accipitridae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Eagle();
};
#endif
