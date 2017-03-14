#include "gorilla.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Gorilla::Gorilla()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Gorilla";
	Experience = "There was a gorilla named Harambe";
	Berat = 1600;
	AniChar = 'T';
	Type[0] = 1;
	Famili = "Hominidae";
	TopEnemy=0;
	JenisMakanan = 1;
}

Gorilla::~Gorilla()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Gorilla::GetExperience()
{
	string str;
	str = "Hewan ini tinggal di : ";
	if (Type[0]==1) str = str +  "darat ";
	if (Type[1]==1) str = str +  "udara ";
	if (Type[2]==1) str = str +  "air ";
	str = str +  '\n';
	str = str +  "Hewan ini tergabung di famili " +  Famili +  "dan dengan nama spesies " + Species +  '\n';
	str = str +  Experience  +  '\n';
	return str;
}
/** @brief Jumlah makanan
  *	@return Jumlah makanan
  */
int Gorilla::GetFoodNum()
{
	return (Berat * 0.5);
}

/** @brief Print karakter
	*	@return char
	*/
char Gorilla::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Gorilla::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Gorilla::GetEnemy()
{
	return EnemyChar;
}
