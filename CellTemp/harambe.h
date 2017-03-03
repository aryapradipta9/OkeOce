#ifndef HARAMBE_H
#define HARAMBE_H
#include "hominidae.h"

class Harambe : public Hominidae
{
public:
  Harambe()
  {
    Animal::Species = "Harambe";
    Animal::Experience = "I die, bitch";
  }
};
#endif
