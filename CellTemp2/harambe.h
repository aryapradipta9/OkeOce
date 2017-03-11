#ifndef HARAMBE_H
#define HARAMBE_H
#include "hominidae.h"
#include "herbifor.h"

class Harambe : public Hominidae, public Herbifor
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Harambe()
	{
		Animal::Species = "Harambe";
		Animal::Experience = "I die, bitch";
		Animal::Berat = 60;
		Animal::Makanan = "biji jaki";
	}
	/**	@brief Render
	  *	@return H
	  */
	char GetRender()
	{
		return ('H');
	}
};
#endif
