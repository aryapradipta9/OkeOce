#include "harambe.h"

/**	@brief Inisialisasi Hewan
  */
Harambe::Harambe() {
  Animal::species = "Harambe";
  Animal::experience = "I die, bitch";
  Animal::berat = 60;
  Animal::animal_char = 'H';
  SetEnemy('Z');
}
