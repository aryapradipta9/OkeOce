#include "cage.h"

/** @brief Constructor
  *	@param hab_type tipe habitat.
  *	@param jumlah_animal.
  *	@param MaxLuasCage
  */
Cage::Cage(int hab_type, int jumlah_animal, int MaxLuasCage)
{
	p = new Point[MaxLuasCage];
	pointer_point = 0;
	this->jumlah_animal = jumlah_animal;
	ani_data = new Animal*[jumlah_animal];
	ani_loc = new Point[jumlah_animal];
	pointer_animal = 0;
	luas_cage = 0;
	this->hab_type = hab_type;
}
/** @brief Menambah Animal
  *	@param ani Hewan
  *	@param X posisi X
  *	@param Y posisi Y
  */

bool Cage::BisaAddAnimal(Animal* ani,int x, int y)
{
	bool temp = false;
	if (pointer_animal<(luas_cage * 30)/100)
	{
		if ((ani->GetType())[hab_type] == 1)
		{
			temp = true;
		}
	}
	if (temp)
	{
		int i, j;
		char test;
		for (j = 0; j < pointer_animal; j++)
		{
			i = 0;
			test = ani_data[j]->GetRender();
			while ((temp) && (i < ani->GetTopEnemy()))
			{
				if ((ani->GetEnemy())[i] == test)
				{
					temp = false;
				}
			}
		}
	}
	return temp;
}
void Cage::AddAnimal(Animal* ani,int x, int y)
{
	// cek apakah bisa
	if (BisaAddAnimal(ani,x,y))
	{
		ani_data[pointer_animal] = ani;
		// cek apakah point terletak dalam set of point
		ani_loc[pointer_animal].SetX(x);
		ani_loc[pointer_animal].SetY(y);
		pointer_animal++;
	}
} // masukkin animal ke point tertentu;

bool Cage::IsInCage(int x, int y)
{
	bool ada = false;
	int i = 0;
	while ((!ada) && (i < pointer_point))
	{
		if ((p[i].getx() == x) && (p[i].gety() == y))
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
	while ((temp) && (i < pointer_animal))
	{
		if ((p[i].getx() == x) && (p[i].gety() == y))
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
	for(i=0; i<jumlah_animal; i++)
	{
		random_device rd;
		mt19937 rng(rd());
		uniform_int_distribution<long int> uni(0,3);
		movecommand = uni(rng);
		if (movecommand == 0) // ke kiri
		{
			if (!AdaAnimal(ani_loc[i].getx()-1,ani_loc[i].gety()))
				ani_loc[i].SetX(ani_loc[i].getx() - 1);
		}
		else if (movecommand == 1) // ke kanan
		{
			if (!AdaAnimal(ani_loc[i].getx()+1,ani_loc[i].gety()))
				ani_loc[i].SetX(ani_loc[i].getx() + 1);
		}
		else if (movecommand == 2) // ke kanan
		{
			if (!AdaAnimal(ani_loc[i].getx(),ani_loc[i].gety()-1))
				ani_loc[i].SetY(ani_loc[i].gety() - 1);
		}
		else if (movecommand == 3) // ke kanan
		{
			if (!AdaAnimal(ani_loc[i].getx(),ani_loc[i].gety()+1))
				ani_loc[i].SetY(ani_loc[i].gety() + 1);
		}
	}
}
/** @brief Destructor
  */
  Cage::~Cage()
{
	int i;
	for (i = 0; i < pointer_animal; i++) delete ani_data[i];
	delete [] ani_data;
	delete [] ani_loc;
	delete [] p;
}//dtor

/** @brief JumlahCage
  *	@param x jumlah cage
  */
void Cage::SetCageNum(int x)
{
	cage_num = x;
}

/** @brief Menambahkan Habitat
  *	@param h Habitat
  */
void Cage::AddHabitat(Habitat* h)
{
	h->SetCageNum(cage_num);
	luas_cage++;
	p[pointer_point].SetX(h->getx());
	p[pointer_point].SetY(h->gety());
	pointer_point++;
}

/** @brief Menunjukkan Hewan
  */
void Cage::ShowHewan()
{
	int i;
	for(i = 0; i < pointer_animal; i++)
	{
		ani_data[i]->GetExperience();
	}
}

/** @brief Total Makanan
  * @return Jumlah Makan tiap Kandang
  */
int Cage::JumlahMakanKandang()
{
	// rumus herbifor beda dengan karnivor dengan omnifor
	int temp = 0;
	for (int i=0; i<pointer_animal; i++)
	{
		temp = temp + ani_data[i]->GetFoodNum();
	}
	return temp;
}

/** @brief Menambahkan Habitat
  *	@param cc Nawn
  */
void Cage::render(char** cc)
{
	// lakukan penimpaan animal
	for(int i = 0; i < pointer_animal; i++)
	{
		cc[ani_loc[i].gety()][ani_loc[i].getx()] = ani_data[i]->GetRender();
	}
}
