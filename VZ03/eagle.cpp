#include "eagle.h"

/**	@brief Inisialisasi Hewan
  */
Eagle::Eagle() {
  Animal::species = "Aquila chrysaetos";
  Animal::experience = "screeech!";
  Animal::berat = 60;
  Animal::animal_char = 'j';
  SetEnemy('Y');
  SetEnemy('X');
}
