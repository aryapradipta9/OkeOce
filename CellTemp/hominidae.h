#ifndef HOMINIDAE_H
#define HOMINIDAE_H
#include "land_animal.h"

class Hominidae : public LandAnimal
{
public:
  Hominidae() : LandAnimal()
  {
    Animal::Famili = "Hominidae";
    Animal::JenisMakanan = "Herbifor";
  }
};
#endif
