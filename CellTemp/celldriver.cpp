#include <iostream>
#include "cell.h"
#include "facility.h"
#include "road.h"
#include "animal.h"
#include "land_animal.h"
#include "land_habitat.h"
#include "hominidae.h"
#include "harambe.h"
#include "entrance.h"
#include "exit.h"
using namespace std;

int main()
{
  Cell Zoo(3,3);

  // PEMBANGUNAN KEBUN BINATANG
  // bangkitkan jalan

  Entrance* ent;
  ent = new Entrance(0,0);
  cout << ent->getx() << endl;
  Zoo.SetEntrance(ent);
  Exit* ext;
  ext = new Exit(2,2);
  Zoo.SetExit(ext);
      cout << Zoo.IsComplete() << endl;
      cout << Zoo.GetExit()->getx() << endl;

  Point** rd;
  rd = new Point*[7];
  rd[0] = new Road(1,0);
  rd[1] = new Road(1,1);
  rd[2] = new Road(1,2);
  rd[3] = new LandHabitat(0,1);
  rd[4] = new LandHabitat(0,2);
  rd[5] = new LandHabitat(2,0);
  rd[6] = new LandHabitat(2,1);
  // entry ke cell
  int i;
  for (i=0; i<=6; i++) Zoo.SetCellTarget(rd[i]);
    cout << Zoo.IsComplete() << endl;

    // Bangkitkan Cage
    
/*
  obj[0] = new Facility(x,y);
  obj[1] = new Road(1,1);
  cout << obj[0]->isJalan()<<endl;
  cout << obj[1]->isJalan()<<endl;

  Animal* Jaki;
  Jaki = new Harambe();
  Jaki->GetExperience();
  Jaki->FoodExp();*/
  return 0;
}
