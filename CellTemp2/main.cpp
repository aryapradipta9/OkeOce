#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")

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
  point* ptemp;
  int count, x1, y1;
  for(count = 1; count <=10; count++){
    ptemp = new Road(10,i);
    Zoo.SetCellTarget(ptemp);
  }
  for(count = 1; count <=10; count++){
    ptemp = new Road(i,10);
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
  cg->SetHewan(a,0,9);
  a = new Reindeer();
  cg->SetHewan(a,2,9);
  a = new Moose();
  cg->SetHewan(a,4,9);
  a = new Horse();
  cg->SetHewan(a,6,9);
  a = new Donkey();
  cg->SetHewan(a,8,9);

  a = new Cats();
  cg->SetHewan(a,0,7);
  a = new Dog();
  cg->SetHewan(a,2,7);
  a = new Fox();
  cg->SetHewan(a,4,7);
  a = new Wolf();
  cg->SetHewan(a,6,7);
  a = new BrownBear();
  cg->SetHewan(a,8,7);

  a = new Panda();
  cg->SetHewan(a,0,5);
  a = new Anoa();
  cg->SetHewan(a,2,5);
  a = new Sheep();
  cg->SetHewan(a,4,5);
  a = new Goat();
  cg->SetHewan(a,6,5);
  a = new SumateraElephant();
  cg->SetHewan(a,8,5);

  a = new Rhino();
  cg->SetHewan(a,0,3);
  a = new AfricanElephant();
  cg->SetHewan(a,2,3);
  a = new Girrafe();
  cg->SetHewan(a,4,3);
  a = new Okapi();
  cg->SetHewan(a,6,3);
  a = new KingCobra();
  cg->SetHewan(a,8,3);

  a = new TigerSnakes();
  cg->SetHewan(a,0,1);
  a = new CapeCobra();
  cg->SetHewan(a,2,1);
  a = new Mamba();
  cg->SetHewan(a,4,1);
  a = new IndianPython();
  cg->SetHewan(a,6,1);
  a = new CarpetPython();
  cg->SetHewan(a,8,1);

  a = new Chimpanzee();
  cg->SetHewan(a,9,8);
  a = new Gorilla();
  cg->SetHewan(a,7,6);
  a = new Orangutan();
  cg->SetHewan(a,5,4);
  a = new SquirrelMonkey();
  cg->SetHewan(a,3,2);

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
  cg->SetHewan(a,11,0);
  a = new Tiger();
  cg->SetHewan(a,11,2);
  a = new Panther();
  cg->SetHewan(a,11,4);
  a = new Hyena();
  cg->SetHewan(a,13,2);

  // bangkitkan dan isi ai
  AirHabitat* ah;
  cg = new Cage(1,6,25);
  Zoo.SetCage(cg);
  for(count = 5; count <=8; count++){
    ptemp = new LandHabitat(11,count);
    Zoo.SetCellTarget(ptemp);
    ah = dynamic_cast<AirHabitat*>(ptemp);
    cg->AddHabitat(ah);
  }
  for(x1 = 12; x1 <=14 ; x1++){
    for(y1 = 5; y1 <= 11; y1++){
      ptemp = new LandHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      ah = dynamic_cast<AirHabitat*>(ptemp);
      cg->AddHabitat(ah);
    }
  }

  a = new Eagle();
  cg->SetHewan(a,11,6);
  a = new BeoNias();
  cg->SetHewan(a,11,8);
  a = new Merak();
  cg->SetHewan(a,13,6);
  a = new Pegar();
  cg->SetHewan(a,13,8);
  a = new Kakatua();
  cg->SetHewan(a,13,10);
  a = new BurungGereja();
  cg->SetHewan(a,12,7);

  // bangkitkan dan isi w1
  WaterHabitat *wh;
  cg = new Cage(2,2,7);
  Zoo.SetCage(cg);
  for(x1 = 0; x1 <=1 ; x1++){
    for(y1 = 11; y1 <= 13; y1++){
      ptemp = new LandHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
    }
  }

  a = new WhiteShark();
  cg->SetHewan(a,1,11);
  a = new HammerShark();
  cg->SetHewan(a,1,13);

  // bangkitkan dan isi w2
  cg = new Cage(2,8,27);
  Zoo.SetCage(cg);
  for(x1 = 4; x1 <=14 ; x1++){
    for(y1 = 12; y1 <= 13; y1++){
      ptemp = new LandHabitat(x1,y1);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
    }
  }
  for(x1 = 4; x1 <=9 ; x1++){
      ptemp = new LandHabitat(x1,11);
      Zoo.SetCellTarget(ptemp);
      wh = dynamic_cast<WaterHabitat*>(ptemp);
      cg->AddHabitat(wh);
  }

  a = new Pari();
  cg->SetHewan(a,4,11);
  a = new Dolphin();
  cg->SetHewan(a,4,13);
  a = new Whale();
  cg->SetHewan(a,6,13);
  a = new SeaHorse();
  cg->SetHewan(a,6,11);
  a = new SeaDragon();
  cg->SetHewan(a,8,11);
  a = new Crocodile();
  cg->SetHewan(a,8,13);
  a = new TreeFrog();
  cg->SetHewan(a,10,13);
  a = new Salamander();
  cg->SetHewan(a,12,13);


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
