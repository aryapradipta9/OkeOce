#ifndef HARAMBE_H
#define HARAMBE_H
#include "hominidae.h"
#include "herbifor.h"

class Harambe : public Hominidae, public Herbifor
{
public:
  Harambe()
  {
    Animal::Species = "Harambe";
    Animal::Experience = "I die, bitch";
    Animal::Berat = 60;
    SetEnemy(Z); // menambahkan enemy z
    Animal::AniChar = 'H';
  }
};
#endif
