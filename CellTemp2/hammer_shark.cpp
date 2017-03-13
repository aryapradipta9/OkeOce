#include "hammershark.h"

/**	@brief Inisialisasi Hewan
  */
HammerShark::HammerShark()
{
	Animal::Species = "Sphyrna mokarran";
	Animal::Experience = "It's a Shark with a hammer-like head";
	Animal::Berat = 2300;
	Animal::AniChar = 'p';
	SetEnemy('q');
	SetEnemy('s');
}

