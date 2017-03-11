#include "hyena.h"

/**	@brief Inisialisasi Hewan
  */
Hyena::Hyena()
{
	Animal::Species = "Crocuta crocuta";
	Animal::Experience = "The hyena stares ferociously";
	Animal::Berat = 550;
	SetEnemy('K');
	SetEnemy('c');
	SetEnemy('d');
	SetEnemy('f');
	Animal::AniChar = 'J';
}

