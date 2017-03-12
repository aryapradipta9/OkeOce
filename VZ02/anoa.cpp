#include "anoa.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Anoa::Anoa()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Anoa";
	Experience = "The anoa is eating grass";
	Berat = 2200;
	AniChar = 'K';
	Type[0] = 1;
	Famili = "Bovidae";
	TopEnemy=0;
	JenisMakanan = 2;
}

Anoa::~Anoa()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void Anoa::GetExperience()
{
	cout << "Hewan ini tinggal di : ";
	if (Type[0]==1) cout << "darat ";
	if (Type[1]==1) cout << "udara ";
	if (Type[2]==1) cout << "air ";
	cout << endl;
	cout << "Hewan ini tergabung di famili "<< Famili << "dan dengan nama spesies "<< Species << endl;
	cout << Experience << endl;
}
/** @brief Jumlah makanan
  *	@return Jumlah makanan
  */
int Anoa::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char Anoa::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Anoa::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Anoa::GetEnemy()
{
	return EnemyChar;
}