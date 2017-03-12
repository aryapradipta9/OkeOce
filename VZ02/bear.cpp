#include "bear.h"
#include <string>
#include <iostream>
using namespace std;
/**	@brief Inisialisasi Hewan
  */
Bear::Bear()
{
	int i;
	Type = new int[3];
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Ursus arctos";
	Experience = "BROAARGH";
	Berat = 4700;
	AniChar = 'H';
	Type[0] = 1;
	Famili = "Ursoidea";
	TopEnemy=0;
	JenisMakanan = 3;
}

Bear::~Bear()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void Bear::GetExperience()
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
int Bear::GetFoodNum()
{
	return (Berat * 0.3);
}

/** @brief Print karakter
	*	@return char
	*/
char Bear::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Bear::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Bear::GetEnemy()
{
	return EnemyChar;
}