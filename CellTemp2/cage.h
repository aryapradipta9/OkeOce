#ifndef CAGE_H
#define CAGE_H
#include <random>
#include "animal.h"
#include "point.h"
#include "habitat.h"

class Cage : virtual public Renderable{
	public:
		/** @brief Constructor
		  *	@param hab_type tipe habitat.
		  *	@param jumlah_animal.
		  *	@param MaxLuasCage
		  */
		Cage(int hab_type, int jumlah_animal, int MaxLuasCage);
		/** @brief Menambah Animal ke point tertentu
		  *	@param ani Hewan
		  *	@param X posisi X
		  *	@param Y posisi Y
		  */
		void AddAnimal(Animal* ani,int x, int y);

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
		  *	@param h Habitat
		  */
		void AddHabitat(Habitat* h);

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
		void Render(char** cc);

	protected:
		bool IsInCage(int x, int y);
		bool AdaAnimal(int x, int y);
		bool BisaAddAnimal(Animal* ani,int x, int y);
		/** Array Hewan
		  */
		Animal** ani_data;
		/** Lokasi semua animal
		  */
		Point* ani_loc;
		/** Jumlah Animal
		  */

		int jumlah_animal;
		/** Jenis Habitat, 0 : darat, 1 : udara, 2 : air
			*/
		int hab_type;
		/** Pointer.0 pas inisialisasi.
		  */
		int pointer_animal;
		/** Semua point cage berada
		  */
		Point* p;
		/** luas_cage
		  */
		int luas_cage;
		/** pointer_point
		  */
		int pointer_point;
		/** Jumlahcage
		  */
		int cage_num;
};
#endif
