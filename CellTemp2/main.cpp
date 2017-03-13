#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")
#include "incl.h"
using namespace std;

int main()
{
  Cell Zoo(14,18,16);

  // PEMBANGUNAN KEBUN BINATANG
  // bangkitkan jalan

  Entrance* ent;
  ent = new Entrance(7,0);
  Zoo.SetEntrance(ent);
  Exit* ext;
  ext = new Exit(6,13);
  Zoo.SetExit(ext);

  // bangkitkan road
  point* ptemp;
  ptemp = new Road(7,1);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(7,2);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(7,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(7,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(6,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(5,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(4,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(4,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(3,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(2,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(2,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(2,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(1,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(8,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(9,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(9,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,6);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,7);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,8);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(9,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(8,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(7,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(6,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(5,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(5,10);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(5,11);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(5,12);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(6,12);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(4,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(4,10);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(3,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(2,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(1,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(0,9);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(10,10);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,10);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,11);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,12);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(12,12);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(13,12);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(13,13);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,2);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,1);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(11,0);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(12,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(13,5);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(13,4);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(13,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(14,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(15,3);
  Zoo.SetCellTarget(ptemp);
  ptemp = new Road(16,3);
  Zoo.SetCellTarget(ptemp);

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
  C[0]->AddHabitat(lh);
  Animal* Jaki;
  Jaki = new Harambe();
  C[0]->AddAnimal(Jaki,0,1);
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
