#include <string>
#include <iostream>
#include "indianphyton.h"
using namespace std;
/** @brief Constructor
  */
IndianPhyton::IndianPhyton()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Python molurus";
	Experience = "Hssssssh!";
	Berat = 30;
	AniChar = 'a';
	Famili = "Phytonidae";
	JenisMakanan = 2;
	Type[0] = 1;
	TopEnemy = 0;
}
/** @brief Destructor
  */
IndianPhyton::~IndianPhyton()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string IndianPhyton::GetExperience()
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
int IndianPhyton::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char IndianPhyton::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void IndianPhyton::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* IndianPhyton::GetEnemy()
{
	return EnemyChar;
}
