#ifndef CAGE_H
#define CAGE_H
#include "animal.h"
#include "point.h"

class Cage{
	public:
		Cage(int HabType, int JumlahAnimal, int LuasCage)//ctor
		{
			this->LuasCage = LuasCage;
			P = new Point[LuasCage]; //point buat setter
			PointerPoint = 0;
			this->JumlahAnimal = JumlahAnimal;
			AniData = new Animal*[JumlahAnimal];
			AniLoc = new Point[JumlahAnimal];
			PointerAnimal = 0;
		}
		void AddAnimal(Animal* Ani,Point pnt)
		{
			// cek apakah bisa
			AniData[PointerAnimal] = Ani;
			// cek apakah point terletak dalam set of point
			AniLoc[PointerAnimal].SetX(pnt.getx());
			AniLoc[PointerAnimal].SetY(pnt.gety());
			PointerAnimal++;
		} // masukkin animal ke point tertentu;

		void Move(); // hewan nya bergerak
		~Cage()
		{
			int i;
			for (i = 0; i < PointerAnimal; i++) delete AniData[i];
			delete [] AniData;
			delete [] AniLoc;
			delete [] P;
		}//dtor
	protected:
		Animal** AniData; // array of animal
		Point* AniLoc; // lokasi semua animal
		int JumlahAnimal;
		int PointerAnimal; // 0 pas inisialisasi
		Point* P; // semua point cage berada
		int LuasCage;
		int PointerPoint;
};
#endif
