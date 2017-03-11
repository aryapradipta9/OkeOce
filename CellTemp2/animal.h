#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal{
	//method public
	public:
		/** @brief Constructor
		  */
		Animal();
		/** @brief Destructor
		  */
		virtual ~Animal();

		/** @brief Komunikasi dengan hewan
		  */
		virtual void GetExperience();
		/** @brief Jumlah makanan
		  *	@return Jumlah makan
		  */
		virtual int GetFoodNum();
		/** @brief Print karakter
		  *	@return char
		  */
		char GetRender();

		/** @brief Set karakter hewan
		  *	@param cc Karakter hewan tsb
		  */
		void SetEnemy(char cc);

		/** @brief Ambil list musuh
		  *	@return List Musuh
		  */
		char* GetEnemy();
		//atype getanimal(int x,int y);	//type cell di x dan y
		//void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		/**	Type habitat hewan. 0 : darat, 1 : udara, 2 : air
		  */
		int* Type;
		/**	Family hewan
		  */
		string Famili;
		/**	Species hewan
		  */
		string Species;
		/**	Experience hewan
		  */
		string Experience;
		/**	Jenis Makanan hewan. 1 : herbifor, 2 : karnivor, 3 : omnifor
		  */
		short JenisMakanan;
		/**	Berat hewan
		  */
		int Berat;
		/**	Nama makanan hewan
		  */
		string Makanan;
		/**	Char yang digunakan untuk render
		  */
		char AniChar;
		/**	Array of char yang berisi list musuhnya
		  */
		char* EnemyChar;
		/**	Pointer EnemyChar yang available
		  */
		int TopEnemy;
};
#endif
