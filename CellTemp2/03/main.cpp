#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")

#include "cell.h"
#include "facility.h"
#include "habitat.h"
#include "road.h"
#include "animal.h"
#include "land_animal.h"
#include "land_habitat.h"
#include "amphibi.h"
#include "entrance.h"
#include "exit.h"
#include "cage.h"

using namespace std;

int main()
{
  Cell Zoo(3,3,2);

  // PEMBANGUNAN KEBUN BINATANG
  // bangkitkan jalan

  Entrance* ent;
  ent = new Entrance(0,0);
  cout << ent->GetX() << endl;
  Zoo.SetEntrance(ent);
  Exit* ext;
  ext = new Exit(2,2);
  Zoo.SetExit(ext);

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
  // Bangkitkan Cage
  Cage* C[2];
  for(i=0; i<=1; i++)
  {
    C[i] = new Cage(1,2,5);
    Zoo.SetCage(C[i]);
  }
  LandHabitat* lh = dynamic_cast<LandHabitat*>(rd[3]);
  C[0]->AddHabitat(lh);
  lh = dynamic_cast<LandHabitat*>(rd[4]);
  lh = dynamic_cast<LandHabitat*>(rd[5]);
  C[1]->AddHabitat(lh);
  lh = dynamic_cast<LandHabitat*>(rd[6]);
  C[1]->AddHabitat(lh);
  Animal* pler;
  pler = new Salamander();
  C[1]->AddAnimal(pler,2,0);
  C[1]->ShowHewan();

  // interface
  clearScreen();
  do
  {
    cout << "Selamat datang di YoxYox Zoo" << endl;
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
      cout << "Jumlah makanan yang dibutuhkan adalah " << Zoo.JumlahMakanCell() << endl;
    }
  } while (i != 4);
  delete [] rd;
  return 0;
}
