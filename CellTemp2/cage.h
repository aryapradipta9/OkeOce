#ifndef CAGE_H
#define CAGE_H
#include <random>
#include "animal.h"
#include "point.h"
#include "habitat.h"

class Cage : virtual public Renderable{
	public:
		/** @brief Constructor
		  *	@param HabType tipe habitat.
		  *	@param JumlahAnimal.
		  *	@param MaxLuasCage
		  */
		Cage(int HabType, int JumlahAnimal, int MaxLuasCage);
		/** @brief Menambah Animal ke point tertentu
		  *	@param Ani Hewan
		  *	@param X posisi X
		  *	@param Y posisi Y
		  */
		void AddAnimal(Animal* Ani,int x, int y);

		/** @brief Gerak
		  */
		void Move(); // hewan nya bergerak
		/** @brief Destructor
		  */
		virtual ~Cage();

		/** @brief JumlahCage
		  *	@param x jumlah cage
		  */
		void SetCageNum(int x);

		/** @brief Menambahkan Habitat
		  *	@param H Habitat
		  */
		void AddHabitat(Habitat* H);

		/** @brief Menunjukkan Hewan
		  */
		void ShowHewan();

		/** @brief Total Makanan
		  * @return Jumlah makan tiap kandang
		  */
		int JumlahMakanKandang();

		/** @brief Menambahkan Habitat
		  *	@param cc Nawn
		  */
		void render(char** cc);

	protected:
		bool IsInCage(int x, int y);
		bool AdaAnimal(int x, int y);
		bool BisaAddAnimal(Animal* Ani,int x, int y);
		/** Array Hewan
		  */
		Animal** AniData;
		/** Lokasi semua animal
		  */
		Point* AniLoc;
		/** Jumlah Animal
		  */

		int JumlahAnimal;
		/** Jenis Habitat, 0 : darat, 1 : udara, 2 : air
			*/
		int HabType;
		/** Pointer.0 pas inisialisasi.
		  */
		int PointerAnimal;
		/** Semua point cage berada
		  */
		Point* P;
		/** LuasCage
		  */
		int LuasCage;
		/** PointerPoint
		  */
		int PointerPoint;
		/** Jumlahcage
		  */
		int CageNum;
};
#endif
