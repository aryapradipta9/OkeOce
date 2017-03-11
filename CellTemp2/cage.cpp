#include "cage.h"

/** @brief Constructor
  *	@param HabType tipe habitat.
  *	@param JumlahAnimal.
  *	@param MaxLuasCage
  */
Cage::Cage(int HabType, int JumlahAnimal, int MaxLuasCage)
{
	P = new Point[MaxLuasCage];
	PointerPoint = 0;
	this->JumlahAnimal = JumlahAnimal;
	AniData = new Animal*[JumlahAnimal];
	AniLoc = new Point[JumlahAnimal];
	PointerAnimal = 0;
	LuasCage = 0;
}
/** @brief Menambah Animal
  *	@param Ani Hewan
  *	@param X posisi X
  *	@param Y posisi Y
  */
void Cage::AddAnimal(Animal* Ani,int x, int y)
{
	// cek apakah bisa
	if (JumlahAnimal==(LuasCage * 30)/100)
	{
		AniData[PointerAnimal] = Ani;
		// cek apakah point terletak dalam set of point
		AniLoc[PointerAnimal].SetX(x);
		AniLoc[PointerAnimal].SetY(y);
		PointerAnimal++;
	}
} // masukkin animal ke point tertentu;

/** @brief Gerak
  */
void Cage::Move() // hewan nya bergerak
{

}
/** @brief Destructor
  */
virtual Cage::~Cage()
{
	int i;
	for (i = 0; i < PointerAnimal; i++) delete AniData[i];
	delete [] AniData;
	delete [] AniLoc;
	delete [] P;
}//dtor

/** @brief JumlahCage
  *	@param x jumlah cage
  */
void Cage::SetCageNum(int x)
{
	CageNum = x;
}

/** @brief Menambahkan Habitat
  *	@param H Habitat 
  */
void Cage::AddHabitat(Habitat* H)
{
	H->SetCageNum(CageNum);
	LuasCage++;
	P[PointerPoint].SetX(H->getx());
	P[PointerPoint].SetY(H->gety());
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
  *	@param cc Nawn 
  */
void Cage::render(char** cc)
{
	// lakukan penimpaan animal
	for(int i = 0; i < PointerAnimal; i++)
	{
		cc[AniLoc[i].gety()][AniLoc[i].getx()] = AniData[i]->GetRender();
	}
}
