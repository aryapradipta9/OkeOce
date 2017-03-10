#ifndef HERBIFOR_H
#define HERBIFOR_H
#include "animal.h"

class Herbifor : virtual public Animal
{
public:
  Herbifor()
  {
    Animal::JenisMakanan = 1;
  }
  virtual int GetFoodNum()
  {
    // rumus herbifor
    return (Animal::Berat * 0.5);
  }
protected:

};
#endif
