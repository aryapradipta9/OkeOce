#ifndef AMPHIBI_H
#define AMPHIBI_H
#include "animal.h"
#include "herbivora.h"
#include "karnivora.h"
#include "omnivora.h"
#include "land_animal.h"
#include "water_animal.h"

class Cryptobranchidae : virtual public WaterAnimal, virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Cryptobranchidae();
};

class Hylidae : virtual public WaterAnimal, virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Hylidae();
};

class Crocodylidae : virtual public WaterAnimal, virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Crocodylidae();
};

class TreeFrog : public Hylidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  TreeFrog();
};

class Crocodile : public Crocodylidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Crocodile();
};

class Salamander : public Cryptobranchidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Salamander();
};

#endif
