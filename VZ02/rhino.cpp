#include "rhino.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Rhino::Rhino()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	Species = " Ceratotherium simum";
	Experience = "The rhino have a sharp horn";
	Berat = 23000;
	AniChar = 'N';
	Type[0] = 1;
	Famili = "Rhinocerotidae";
	TopEnemy=0;
	JenisMakanan = 2;
}

Rhino::~Rhino()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void Rhino::GetExperience()
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
int Rhino::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char Rhino::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Rhino::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Rhino::GetEnemy()
{
	return EnemyChar;
}