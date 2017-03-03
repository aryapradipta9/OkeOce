#ifndef HARAMBE_H
#define HARAMBE_H
#include "hominidae.h"
#include "herbifor.h"

class Harambe : public Hominidae
{
public:
  Harambe()
  {
    Animal::Species = "Harambe";
    Animal::Experience = "I die, bitch";
    Animal::Berat = 60;
    Animal::Makanan = "biji jaki";
  }
};
#endif
