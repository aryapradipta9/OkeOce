#include "whiteshark.h"

/**	@brief Inisialisasi Hewan
  */
WhiteShark::WhiteShark()
{
	Animal::Species = "Carcharodon carcharias";
	Animal::Experience = "It's a Big Shark";
	Animal::Berat = 9000;
	Animal::AniChar = 'o';
	SetEnemy('q');
	SetEnemy('s');
}

