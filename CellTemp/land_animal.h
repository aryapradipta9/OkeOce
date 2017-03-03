#ifndef LANDANIMAL_H
#define LANDANIMAL_H
#include "animal.h"

class LandAnimal : public Animal
{
public:
  LandAnimal() : Animal()
  {
    Animal::Type = "Land";
  }
};
#endif
