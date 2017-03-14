#include <string>
#include <iostream>
#include "whiteshark.h"
using namespace std;
/** @brief Constructor
  */
WhiteShark::WhiteShark()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Carcharodon carcharias";
	Experience = "It's a Big Shark";
	Berat = 9000;
	AniChar = 'o';
	TopEnemy = 0;
	SetEnemy('q');
	SetEnemy('s');
	Famili = "Selachimorpha";
	JenisMakanan = 2;
	Type[2] = 1;

}
/** @brief Destructor
  */
WhiteShark::~WhiteShark()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string WhiteShark::GetExperience()
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
int WhiteShark::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char WhiteShark::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void WhiteShark::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* WhiteShark::GetEnemy()
{
	return EnemyChar;
}
