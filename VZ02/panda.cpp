#include "panda.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Panda::Panda()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Ailuropoda melanoleuca";
	Experience = "The panda is eating bamboos";
	Berat = 900;
	AniChar = 'I';
	Type[0] = 1;
	Famili = "Ursoidea";
	TopEnemy=0;
	JenisMakanan = 2;
}

Panda::~Panda()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Panda::GetExperience()
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
int Panda::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char Panda::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Panda::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Panda::GetEnemy()
{
	return EnemyChar;
}
