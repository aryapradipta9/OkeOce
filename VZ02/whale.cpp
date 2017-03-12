#include <string>
#include <iostream>
#include "whale.h"
using namespace std;
/** @brief Constructor
  */
Whale::Whale()
{
	Type = new int[3];
	EnemyChar = new char[5];
	Species = "Balaenoptera musculus";
	Experience = "MASSIVE SEA-CREATURE";
	Berat = 1500000;
	AniChar = 'r';
	Famili = 'Cetacea';
	JenisMakanan = 2;
	Type[2] = 1;
	TopEnemy = 0;
}
/** @brief Destructor
  */
Whale::~Whale()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void Whale::GetExperience()
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
int Whale::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char Whale::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void Whale::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* Whale::GetEnemy()
{
	return EnemyChar;
}