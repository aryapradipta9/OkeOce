#include "harambe.h"

/**	@brief Inisialisasi Hewan
  */
Harambe::Harambe()
{
	Animal::Species = "Harambe";
	Animal::Experience = "I die, bitch";
	Animal::Berat = 60;
	SetEnemy(Z); // menambahkan enemy z
	Animal::AniChar = 'H';
}
/**	@brief Render
  *	@return H
  */
