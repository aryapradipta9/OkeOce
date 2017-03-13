#include "lion.h"

/**	@brief Inisialisasi Hewan
  */
Lion::Lion() {
	Animal::species = "Panthera leo";
	Animal::experience = "ROAAARRR!";
	Animal::berat = 1800;
	Animal::animal_char = 'F';
	SetEnemy('K');
	SetEnemy('c');
	SetEnemy('d');
	SetEnemy('f');
}
