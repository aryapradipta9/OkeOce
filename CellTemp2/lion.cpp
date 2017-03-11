#include "lion.h"

/**	@brief Inisialisasi Hewan
  */
Lion::Lion()
{
	Animal::Species = "Panthera leo";
	Animal::Experience = "ROAAARRR!";
	Animal::Berat = 1800;
	SetEnemy('K');
	SetEnemy('c');
	SetEnemy('d');
	SetEnemy('f');
	Animal::AniChar = 'F';
}

