#include <string>
#include <iostream>
#include "merak.h"
using namespace std;
/** @brief Constructor
  */
Merak::Merak()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Afropavo congensis";
	Experience = "Rainbow Bird";
	Berat = 50;
	AniChar = 'l';
	Famili = "Phasianidae";
	JenisMakanan = 3;
	Type[0] = 1;
	TopEnemy = 0;

}
/** @brief Destructor
  */
Merak::~Merak()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Merak::GetExperience()
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
int Merak::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char Merak::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Merak::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Merak::GetEnemy()
{
	return EnemyChar;
}
