#ifndef CROCODYLIDAE_H
#define CROCODYLIDAE_H
#include "water_animal.h"
#include "land_animal.h"

class Crocodylidae : virtual public WaterAnimal, virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Crocodylidae();
};
#endif
