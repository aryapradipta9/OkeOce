#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "animal.h"
#include "omnivora.h"
#include "karnivora.h"
#include "herbivora.h"

class LandAnimal : virtual public Animal {
public:
  /** @brief Inisialisasi Tipe Animal
    */
  LandAnimal();
};

class Bovidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Bovidae();
};

class Canidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Canidae();
};

class Cercopithecidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Cercopithecidae();
};

class Cervidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Cervidae();
};

class Elapidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Elapidae();
};

class Elephantidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Elephantidae();
};

class Equidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Equidae();
};

class Felidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Felidae();
};

class Girrafidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Girrafidae();
};

class Hominidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Hominidae();
};

class Hyaenidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Hyaenidae();
};

class Pythonidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Pythonidae();
};

class Rhinocerotidae : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Rhinocerotidae();
};

class Ursoidea : virtual public LandAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Ursoidea();
};

class AfricanElephant : public Elephantidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  AfricanElephant();
};

class Anoa : public Bovidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Anoa();
};

class Bear : public Ursoidea, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Bear();
};

class CapeCobra : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  CapeCobra();
};

class CarpetPython : public Pythonidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  CarpetPython();
};

class Cat : public Felidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Cat();
};
  
class Chimpanzee : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Chimpanzee();
};

class Dog : public Canidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Dog();
};

class Donkey : public Equidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Donkey();
};

class Fox : public Canidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Fox();
};

class Girrafe : public Girrafidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Girrafe();
};

class Goat : public Bovidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Goat();
};
  
class Gorilla : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Gorilla();
};

class Horse : public Equidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Horse();
};

class Hyena : public Hyaenidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Hyena();
};

class IndianPython : public Pythonidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  IndianPython();
};

class KingCobra : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  KingCobra();
};

class Lion : public Felidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Lion();
};

class Mamba : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Mamba();
};

class Moose : public Cervidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Moose();
};

class Okapi : public Girrafidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Okapi();
};

class Orangutan : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Orangutan();
};

class Panda : public Ursoidea, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Panda();
};

class Panther : public Felidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Panther();
};

class Reindeer : public Cervidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Reindeer();
};

class Rhino : public Rhinocerotidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Rhino();
};

class Sheep : public Bovidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Sheep();
};

class SquirrelMonkey : public Cercopithecidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SquirrelMonkey();
};

class SumatraElephant : public Elephantidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  SumatraElephant();
};

class Tiger : public Felidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Tiger();
};

class TigerSnake : public Elapidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  TigerSnake();
};

class Wolf : public Canidae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Wolf();
};

class Zebra : public Equidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Zebra();
};

#endif
