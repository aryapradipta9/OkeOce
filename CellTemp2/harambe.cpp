#include "harambe.h"

/**	@brief Inisialisasi Hewan
  */
Harambe::Harambe()
{
	Animal::Species = "Harambe";
	Animal::Experience = "I die, bitch";
	Animal::Berat = 60;
	Animal::Makanan = "biji jaki";
}
/**	@brief Render
  *	@return H
  */
char Harambe::GetRender()
{
	return ('H');
}
