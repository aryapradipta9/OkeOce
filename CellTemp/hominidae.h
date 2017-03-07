#ifndef HOMINIDAE_H
#define HOMINIDAE_H
#include "land_animal.h"

class Hominidae : virtual public LandAnimal
{
public:
  Hominidae() : LandAnimal()
  {
    Animal::Famili = "Hominidae";
  }
};
#endif
