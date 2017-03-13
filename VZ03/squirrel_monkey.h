#ifndef SQUIRREL_MONKEY_H
#define SQUIRREL_MONKEY_H
#include "cercopithecidae.h"
#include "herbivora.h"

class SquirrelMonkey : public Cercopithecidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SquirrelMonkey();
};
#endif
