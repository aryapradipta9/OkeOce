#include "tiger.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Tiger::Tiger()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Panthera tigris tigris";
	Experience = "ROAR!";
	Berat = 2000;
	//SetEnemy('K');
	AniChar = 'E';
	Type[0] = 1;
	Famili = "Felidae";
	TopEnemy=0;
	JenisMakanan = 1;
}

Tiger::~Tiger()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Tiger::GetExperience()
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
int Tiger::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char Tiger::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Tiger::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Tiger::GetEnemy()
{
	return EnemyChar;
}
