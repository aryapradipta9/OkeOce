#ifndef SQUIRRELMONKEY_H
#define SQUIRRELMONKEY_H

#include <string>
#include <iostream>
using namespace std;
class SquirrelMonkey
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	SquirrelMonkey();
	/** @brief Destructor
		  */
	~SquirrelMonkey();
	/** @brief Komunikasi dengan hewan
		  */
	void GetExperience();
	/** @brief Jumlah makanan
	  *	@return Jumlah makan
	  */
	int GetFoodNum();
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
