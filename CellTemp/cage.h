#ifndef CAGE_H
#define CAGE_H
#include "animal.h"
#include "point.h"
#include "habitat.h"

class Cage : virtual public Renderable{
	public:
		Cage(int HabType, int JumlahAnimal, int MaxLuasCage)//ctor
		{
			P = new Point[MaxLuasCage];
			PointerPoint = 0;
			this->JumlahAnimal = JumlahAnimal;
			AniData = new Animal*[JumlahAnimal];
			AniLoc = new Point[JumlahAnimal];
			PointerAnimal = 0;
			LuasCage = 0;
		}
		void AddAnimal(Animal* Ani,int x, int y)
		{
			// cek apakah bisa
			AniData[PointerAnimal] = Ani;
			// cek apakah point terletak dalam set of point
			AniLoc[PointerAnimal].SetX(x);
			AniLoc[PointerAnimal].SetY(y);
			PointerAnimal++;
		} // masukkin animal ke point tertentu;

		void Move(); // hewan nya bergerak
		virtual ~Cage()
		{
			int i;
			for (i = 0; i < PointerAnimal; i++) delete AniData[i];
			delete [] AniData;
			delete [] AniLoc;
			delete [] P;
		}//dtor
		void SetCageNum(int x)
		{
			CageNum = x;
		}
		void AddHabitat(Habitat* H)
		{
			H->SetCageNum(CageNum);
			LuasCage++;
			P[PointerPoint].SetX(H->getx());
			P[PointerPoint].SetY(H->gety());
			PointerPoint++;
		}
		void ShowHewan()
		{
			int i;
			for(i = 0; i < PointerAnimal; i++)
			{
				AniData[i]->GetExperience();
			}
		}
		int JumlahMakanKandang()
		{
			// rumus herbifor beda dengan karnivor dengan omnifor
			int temp = 0;
			for (int i=0; i<PointerAnimal; i++)
			{
				temp = temp + AniData[i]->GetFoodNum();
			}
			return temp;
		}
		void render(char** cc)
		{
			// lakukan penimpaan animal
			for(int i = 0; i < PointerAnimal; i++)
			{
				cc[AniLoc[i].gety()][AniLoc[i].getx()] = AniData[i]->GetRender();
			}
		}

	protected:
		Animal** AniData; // array of animal
		Point* AniLoc; // lokasi semua animal
		int JumlahAnimal;
		int PointerAnimal; // 0 pas inisialisasi
		Point* P; // semua point cage berada
		int LuasCage;
		int PointerPoint;
		int CageNum;
};
#endif
