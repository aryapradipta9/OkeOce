#include "tiger.h"

/**	@brief Inisialisasi Hewan
  */
Tiger::Tiger()
{
	Animal::Species = "Panthera tigris tigris";
	Animal::Experience = "ROAR!";
	Animal::Berat = 2000;
	SetEnemy('K');
	SetEnemy('c');
	SetEnemy('d');
	SetEnemy('f');
	Animal::AniChar = 'E';
}

