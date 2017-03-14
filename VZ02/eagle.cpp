#include <string>
#include <iostream>
#include "eagle.h"
using namespace std;
/** @brief Constructor
  */
Eagle::Eagle()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Aquila chrysaetos";
	Experience = "screeech!";
	Berat = 60;
	AniChar = 'j';
	Famili = "Accipitridae";
	JenisMakanan = 2;
	Type[1] = 1;
	TopEnemy = 0;
	SetEnemy('Y');
	SetEnemy('X');
}
/** @brief Destructor
  */
Eagle::~Eagle()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
string Eagle::GetExperience()
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
int Eagle::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char Eagle::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Eagle::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Eagle::GetEnemy()
{
	return EnemyChar;
}
