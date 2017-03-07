#include <iostream>
#include "cell.h"
#include "facility.h"
#include "road.h"
#include "animal.h"
#include "land_animal.h"
#include "hominidae.h"
#include "harambe.h"
using namespace std;

int main()
{/*
  Cell* obj[2];
  obj[0] = new Facility(x,y);
  obj[1] = new Road(1,1);
  cout << obj[0]->isJalan()<<endl;
  cout << obj[1]->isJalan()<<endl;
*/
  Animal* Jaki;
  Jaki = new Harambe();
  Jaki->GetExperience();
  Jaki->FoodExp();
  return 0;
}
