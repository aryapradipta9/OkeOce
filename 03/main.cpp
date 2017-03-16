#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")
#include "air_animal.h"
#include "air_habitat.h"
#include "animal.h"
#include "cell.h"
#include "entrance.h"
#include "exit.h"
#include "facility.h"
#include "habitat.h"
#include "herbivora.h"
#include "karnivora.h"
#include "land_animal.h"
#include "land_habitat.h"
#include "omnivora.h"
#include "park.h"
#include "point.h"
#include "renderable.h"
#include "restaurant.h"
#include "road.h"
#include "water_animal.h"
#include "water_habitat.h"
#include "amphibi.h"
#include "driver.h"
using namespace std;

int main()
{
  Cell Zoo(14,15,5);

  // PEMBANGUNAN KEBUN BINATANG
  // bangkitkan jalan

  Entrance* ent;
  ent = new Entrance(10,0);
  Zoo.SetEntrance(ent);
  Exit* ext;
  ext = new Exit(0,10);
  Zoo.SetExit(ext);

  // bangkitkan road
  Point* ptemp;
  int count, x1, y1;
  for(count = 1; count <=10; count++){
    ptemp = new Road(10,count);
    Zoo.SetCellTarget(ptemp);
  }
  for(count = 1; count <=10; count++){
    ptemp = new Road(count,10);
    Zoo.SetCellTarget(ptemp);
  }

  // bangkitkan dll
  for(count = 9; count <=10; count++){
    ptemp = new Restaurant(count,11);
    Zoo.SetCellTarget(ptemp);
  }
  for(count = 9; count <=11; count++){
    ptemp = new Restaurant(11,count);
    Zoo.SetCellTarget(ptemp);
  }
  for(count = 11; count <=13; count++){
    ptemp = new Park(3,count);
    Zoo.SetCellTarget(ptemp);
  }
  for(count = 11; count <=12; count++){
    ptemp = new Park(2,count);
    Zoo.SetCellTarget(ptemp);
  }
  Cage *cg;
  Animal *a;
  LandHabitat *lh;
  // bangkitkan dan isi d1
  cg = new Cage(0,30,100);
  Zoo.SetCage(cg);
  for(x1 = 0; x1 <=9 ; x1++){
    for(y1 = 0; y1 <= 9; y1++){
      ptemp = new LandHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      lh = dynamic_cast<LandHabitat*>(ptemp);
      cg->AddHabitat(lh);
    }
  }

  a = new Zebra();
  cg->AddAnimal(a,0,9);

  a = new Reindeer();
  cg->AddAnimal(a,2,9);

  a = new Moose();
  cg->AddAnimal(a,4,9);
  a = new Horse();
  cg->AddAnimal(a,6,9);
  a = new Donkey();
  cg->AddAnimal(a,8,9);

  a = new Cat();
  cg->AddAnimal(a,0,7);
  a = new Dog();
  cg->AddAnimal(a,2,7);
  a = new Fox();
  cg->AddAnimal(a,4,7);
  //a = new Wolf();
  //cg->AddAnimal(a,6,7);
  //a = new Bear();
  //cg->AddAnimal(a,8,7);
/*
  a = new Panda();
  cg->AddAnimal(a,0,5);
  a = new Anoa();
  cg->AddAnimal(a,2,5);
  a = new Sheep();
  cg->AddAnimal(a,4,5);
  a = new Goat();
  cg->AddAnimal(a,6,5);
  a = new SumatraElephant();
  cg->AddAnimal(a,8,5);

  a = new Rhino();
  cg->AddAnimal(a,0,3);
  a = new AfricanElephant();
  cg->AddAnimal(a,2,3);
  a = new Girrafe();
  cg->AddAnimal(a,4,3);
  a = new Okapi();
  cg->AddAnimal(a,6,3);
  a = new KingCobra();
  cg->AddAnimal(a,8,3);

  a = new TigerSnake();
  cg->AddAnimal(a,0,1);
  a = new CapeCobra();
  cg->AddAnimal(a,2,1);
  a = new Mamba();
  cg->AddAnimal(a,4,1);
  a = new IndianPython();
  cg->AddAnimal(a,6,1);
  a = new CarpetPython();
  cg->AddAnimal(a,8,1);

  a = new Chimpanzee();
  cg->AddAnimal(a,9,8);
  a = new Gorilla();
  cg->AddAnimal(a,7,6);
  a = new Orangutan();
  cg->AddAnimal(a,5,4);
  a = new SquirrelMonkey();
  cg->AddAnimal(a,3,2);*/
  cg->ShowHewan();
  // bangkitkan dan isi d2
  cg = new Cage(0,4,20);
  Zoo.SetCage(cg);
  for(x1 = 11; x1 <=14 ; x1++){
    for(y1 = 0; y1 <= 4; y1++){
      ptemp = new LandHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      lh = dynamic_cast<LandHabitat*>(ptemp);
      cg->AddHabitat(lh);
    }
  }

  a = new Lion();
  cg->AddAnimal(a,11,0);
  //a = new Tiger();
  //cg->AddAnimal(a,11,2);
  //a = new Panther();
  //cg->AddAnimal(a,11,4);
  //a = new Hyena();
  //cg->AddAnimal(a,13,2);



  // bangkitkan dan isi ai
  AirHabitat* ah;
  cg = new Cage(1,6,25);
  Zoo.SetCage(cg);
  for(count = 5; count <=8; count++){
    ptemp = new AirHabitat(11,count);
    Zoo.SetCellTarget(ptemp);
    ah = dynamic_cast<AirHabitat*>(ptemp);
    cg->AddHabitat(ah);
  }
  for(x1 = 12; x1 <=14 ; x1++){
    for(y1 = 5; y1 <= 11; y1++){
      ptemp = new AirHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      ah = dynamic_cast<AirHabitat*>(ptemp);
      cg->AddHabitat(ah);
    }
  }

  a = new Eagle();
  cg->AddAnimal(a,11,6);/*
  a = new BeoNias();
  cg->AddAnimal(a,11,8);
  a = new Merak();
  cg->AddAnimal(a,13,6);
  a = new Pegar();
  cg->AddAnimal(a,13,8);
  a = new Kakatua();
  cg->AddAnimal(a,13,10);
  a = new BurungGereja();
  cg->AddAnimal(a,12,7);*/

  // bangkitkan dan isi w1
  WaterHabitat *wh;
  cg = new Cage(2,2,7);
  Zoo.SetCage(cg);
  for(x1 = 0; x1 <=1 ; x1++){
    for(y1 = 11; y1 <= 13; y1++){
      ptemp = new WaterHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
    }
  }
  ptemp = new WaterHabitat(2,13);
  Zoo.SetCellTarget(ptemp);
  wh = dynamic_cast<WaterHabitat*>(ptemp);
  cg->AddHabitat(wh);

  a = new WhiteShark();
  cg->AddAnimal(a,1,11);
  a = new HammerShark();
  cg->AddAnimal(a,1,13);

  // bangkitkan dan isi w2
  cg = new Cage(2,8,27);
  Zoo.SetCage(cg);
  for(x1 = 4; x1 <=14 ; x1++){
    for(y1 = 12; y1 <= 13; y1++){
      ptemp = new WaterHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
    }
  }
  for(x1 = 4; x1 <=8 ; x1++){
      ptemp = new WaterHabitat(x1,11);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
  }

  a = new Pari();
  cg->AddAnimal(a,4,11);
  a = new Dolphin();
  cg->AddAnimal(a,4,13);
  a = new Whale();
  cg->AddAnimal(a,6,13);
  a = new SeaHorse();
  cg->AddAnimal(a,6,11);
  a = new SeaDragon();
  cg->AddAnimal(a,8,11);
  a = new Crocodile();
  cg->AddAnimal(a,8,13);
  a = new TreeFrog();
  cg->AddAnimal(a,10,13);
  a = new Salamander();
  cg->AddAnimal(a,12,13);


  // interface
  //clearScreen();
  int i;
  do
  {
    cout << "Selamat datang di OkeOce Zoo" << endl;
    cout << "Menu yang tersedia : " << endl;
    cout << "1. Display Virtual Zoo" << endl;
    cout << "2. Tour Virtual Zoo" << endl;
    cout << "3. Display Makanan Total" << endl;
    cout << "4. Exit Zoo" << endl;
    cout << endl << "Masukkan menu pilihan : ";
    cin >> i;
    if (i == 1)
    {
      Zoo.Gambar();
    }
    else if (i == 2)
    {
      Zoo.Tour();
    }
    else if (i == 3)
    {
      //Scen2(3);
    }
  } while (i != 4);
  return 0;
}
