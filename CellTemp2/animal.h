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
		/** @brief Constructor
		  *	@return char(?)
		  */
		virtual char GetRender();
		
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
};
#endif
