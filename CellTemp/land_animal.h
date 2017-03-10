#ifndef LANDANIMAL_H
#define LANDANIMAL_H
#include "animal.h"

class LandAnimal : virtual public Animal
{
public:
  LandAnimal() : Animal()
  {
    Animal::Type[0] = 1;
  }
};
#endif
