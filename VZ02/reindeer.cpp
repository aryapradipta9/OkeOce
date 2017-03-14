#include <string>
#include <iostream>
#include "reindeer.h"
using namespace std;
/** @brief Constructor
  */
Reindeer::Reindeer()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Rangifer tarandus";
	Experience = "It's a Reindeer";
	Berat = 1700;
	AniChar = 'c';
	Famili = "Cervidae";
	JenisMakanan = 1;
	Type[0] = 1;
	TopEnemy = 0;
}
/** @brief Destructor
  */
Reindeer::~Reindeer()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Reindeer::GetExperience()
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
int Reindeer::GetFoodNum()
{
	return (Berat * 0.5);
}

/** @brief Print karakter
	*	@return char
	*/
char Reindeer::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Reindeer::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Reindeer::GetEnemy()
{
	return EnemyChar;
}
