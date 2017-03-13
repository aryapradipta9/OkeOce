#include "panther.h"

/**	@brief Inisialisasi Hewan
  */
Panther::Panther() {
  Animal::species = "Panthera onca";
  Animal::experience = "ROAARR!";
  Animal::berat = 700;
  Animal::animal_char = 'G';
  SetEnemy('K');
  SetEnemy('c');
  SetEnemy('d');
  SetEnemy('f');
}
