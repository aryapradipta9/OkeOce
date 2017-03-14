#include <string>
#include <iostream>
#include "penguin.h"
using namespace std;
/** @brief Constructor
  */
Penguin::Penguin()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Aptenodytes forsteri";
	Experience = "It's Pengy";
	Berat = 350;
	AniChar = 'k';
	Famili = "Spheniscidae";
	JenisMakanan = 2;
	Type[2] = 1;
	TopEnemy = 0;
	SetEnemy('Y');
	SetEnemy('X');
}
/** @brief Destructor
  */
Penguin::~Penguin()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void Penguin::GetExperience()
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
int Penguin::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char Penguin::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Penguin::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Penguin::GetEnemy()
{
	return EnemyChar;
}
