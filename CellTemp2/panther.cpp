#include "panther.h"

/**	@brief Inisialisasi Hewan
  */
Panther::Panther()
{
	Animal::Species = "Panthera onca";
	Animal::Experience = "ROAARR!";
	Animal::Berat = 700;
	SetEnemy('K');
	SetEnemy('c');
	SetEnemy('d');
	SetEnemy('f');
	Animal::AniChar = 'G';
}

