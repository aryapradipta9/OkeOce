#include "africanelephant.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
AfricanElephant::AfricanElephant()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "  Loxodonta";
	Experience = "This elephant originated from africa";
	Berat = 60000;
	AniChar = 'z';
	Type[0] = 1;
	Famili = "elephantidae";
	TopEnemy=0;
	JenisMakanan = 2;
}

AfricanElephant::~AfricanElephant()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void AfricanElephant::GetExperience()
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
int AfricanElephant::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char AfricanElephant::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void AfricanElephant::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* AfricanElephant::GetEnemy()
{
	return EnemyChar;
}