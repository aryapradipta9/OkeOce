#include "eagle.h"

/**	@brief Inisialisasi Hewan
  */
Eagle::Eagle()
{
	Animal::Species = "Aquila chrysaetos";
	Animal::Experience = "screeech!";
	Animal::Berat = 60;
	Animal::AniChar = 'j';
	SetEnemy('Y');
	SetEnemy('X');
}

