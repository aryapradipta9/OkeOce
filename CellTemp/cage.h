#ifndef CAGE_H
#define CAGE_H

class Cage{
	public:
		Cage(int HabType, int x_cage, int y_cage, int JumlahAnimal, int LuasCage)//ctor
		{
			this->LuasCage = LuasCage;
			P = new Point[LuasCage]; //point buat setter
			PointerPoint = 0;
			this->JumlahAnimal = JumlahAnimal;
			AniData = new Animal*[JumlahAnimal];
			AniLoc = new Point[JumlahAnimal];
			PointerAnimal = 0;
			Kandang = new Point(x_cage,y_cage);
		}
		AddAnimal(Animal* Ani,Point pnt)
		{
			// cek apakah bisa
			AniData[PointerAnimal] = Ani;
			// cek apakah point terletak dalam set of point
			AniLoc[PointerAnimal].SetX(pnt.GetX());
			AniLoc[PointerAnimal].SetY(pnt.GetY());
			PointerAnimal++;
		} // masukkin animal ke point tertentu;
		Move(); // hewan nya bergerak
		~Cage();//dtor
	protected:
		Cell* Kandang;
		Animal** AniData; // array of animal
		Point* AniLoc; // lokasi semua animal
		int JumlahAnimal;
		int PointerAnimal; // 0 pas inisialisasi
		Point* P; // semua point cage berada
		int LuasCage;
		int PointerPoint;
};
#endif

mggitbsekali
