#include "cage.h"

/** @brief Constructor
  * @param habitat_type tipe habitat.
  * @param jumlah_animal.
  * @param max_luas_cage
  */
Cage::Cage(int habitat_type, int jumlah_animal, int max_luas_cage) {
  P = new Point[max_luas_cage];
  PointerPoint = 0;
  this->JumlahAnimal = JumlahAnimal;
  AniData = new Animal*[JumlahAnimal];
  AniLoc = new Point[JumlahAnimal];
  PointerAnimal = 0;
  LuasCage = 0;
  this->HabType = HabType;
}
/** @brief Menambah Animal
  * @param Ani Hewan
  * @param X posisi X
  * @param Y posisi Y
  */

bool Cage::BisaAddAnimal(Animal* Ani,int x, int y)
{
  bool temp = false;
  if (PointerAnimal<(LuasCage * 30)/100)
  {
    if ((Ani->GetType())[HabType] == 1)
    {
      temp = true;
    }
  }
  if (temp)
  {
    int i, j;
    char test;
    for (j = 0; j < PointerAnimal; j++)
    {
      i = 0;
      test = AniData[j]->GetRender();
      while ((temp) && (i < Ani->GetTopEnemy()))
      {
        if ((Ani->GetEnemy())[i] == test)
        {
          temp = false;
        }
      }
    }
  }
  return temp;
}
void Cage::AddAnimal(Animal* Ani,int x, int y)
{
  // cek apakah bisa
  //if (BisaAddAnimal(Ani,x,y))
  {
    AniData[PointerAnimal] = Ani;
    // cek apakah point terletak dalam set of point
    AniLoc[PointerAnimal].SetX(x);
    AniLoc[PointerAnimal].SetY(y);
    cout << "masuk" << endl;
    PointerAnimal++;
  }
} // masukkin animal ke point tertentu;

bool Cage::IsInCage(int x, int y)
{
  bool ada = false;
  int i = 0;
  while ((!ada) && (i < PointerPoint))
  {
    if ((P[i].GetX() == x) && (P[i].GetY() == y))
    {
      ada = true;
    }
  }
  return ada;
}
bool Cage::AdaAnimal(int x, int y)
{
  bool temp = IsInCage(x,y);
  int i = 0;
  while ((temp) && (i < PointerAnimal))
  {
    if ((P[i].GetX() == x) && (P[i].GetY() == y))
    {
      temp = false;
    }
  }
  return temp;
}
/** @brief Gerak
  */
void Cage::Move() // hewan nya bergerak
{
  // asumsi semua hewan bergerak
  int movecommand, i;
  for(i=0; i<JumlahAnimal; i++)
  {
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<long int> uni(0,3);
    movecommand = uni(rng);
    if (movecommand == 0) // ke kiri
    {
      if (!AdaAnimal(AniLoc[i].GetX()-1,AniLoc[i].GetY()))
        AniLoc[i].SetX(AniLoc[i].GetX() - 1);
    }
    else if (movecommand == 1) // ke kanan
    {
      if (!AdaAnimal(AniLoc[i].GetX()+1,AniLoc[i].GetY()))
        AniLoc[i].SetX(AniLoc[i].GetX() + 1);
    }
    else if (movecommand == 2) // ke kanan
    {
      if (!AdaAnimal(AniLoc[i].GetX(),AniLoc[i].GetY()-1))
        AniLoc[i].SetY(AniLoc[i].GetY() - 1);
    }
    else if (movecommand == 3) // ke kanan
    {
      if (!AdaAnimal(AniLoc[i].GetX(),AniLoc[i].GetY()+1))
        AniLoc[i].SetY(AniLoc[i].GetY() + 1);
    }
  }
}
/** @brief Destructor
  */
  Cage::~Cage()
{
  int i;
  for (i = 0; i < PointerAnimal; i++) delete AniData[i];
  delete [] AniData;
  delete [] AniLoc;
  delete [] P;
}//dtor

/** @brief JumlahCage
  *  @param x jumlah cage
  */
void Cage::SetCageNum(int x)
{
  CageNum = x;
}

int Cage::GetCageNum()
{
  return(CageNum);
}
/** @brief Menambahkan Habitat
  * @param H Habitat
  */
void Cage::AddHabitat(Habitat* H)
{
  H->SetCageNum(CageNum);
  LuasCage++;
  P[PointerPoint].SetX(H->GetX());
  P[PointerPoint].SetY(H->GetY());
  PointerPoint++;
}

/** @brief Menunjukkan Hewan
  */
void Cage::ShowHewan()
{
  int i;
  for(i = 0; i < PointerAnimal; i++)
  {
    AniData[i]->GetExperience();
  }
}

/** @brief Total Makanan
  * @return Jumlah Makan tiap Kandang
  */
int Cage::JumlahMakanKandang()
{
  // rumus herbifor beda dengan karnivor dengan omnifor
  int temp = 0;
  for (int i=0; i<PointerAnimal; i++)
  {
    temp = temp + AniData[i]->GetFoodNum();
  }
  return temp;
}

/** @brief Menambahkan Habitat
  *  @param cc Nawn
  */
void Cage::render(char** cc)
{
  // lakukan penimpaan animal
  for(int i = 0; i < PointerAnimal; i++)
  {
    cc[AniLoc[i].GetY()][AniLoc[i].GetX()] = AniData[i]->GetRender();
  }
}
