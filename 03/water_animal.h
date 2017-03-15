#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include "animal.h"
#include "herbivora.h"
#include "karnivora.h"
#include "omnivora.h"

class WaterAnimal : virtual public Animal {
public:
  /** @brief Inisialisasi Tipe WaterAnimal
    */
  WaterAnimal();
};

class Syngnathydae : virtual public WaterAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Syngnathydae();
};

class Cetacea : virtual public WaterAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Cetacea();
};

class Myliobatidae : virtual public WaterAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Myliobatidae();
};

class Selachimorpha : virtual public WaterAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Selachimorpha();
};

class Spheniscidae : virtual public WaterAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Spheniscidae();
};

class Whale : public Cetacea, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Whale();
};

class WhiteShark : public Selachimorpha, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  WhiteShark();
};

class Dolphin : public Cetacea, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Dolphin();
};

class HammerShark : public Selachimorpha, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  HammerShark();
};

class Pari : public Myliobatidae, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Pari();
};

class Penguin : public Spheniscidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Penguin();
};

class SeaDragon : public Syngnathydae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SeaDragon();
};

class SeaHorse : public Syngnathydae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SeaHorse();
};


#endif
