#include "tiger.h"

/**	@brief Inisialisasi Hewan
  */
Tiger::Tiger() {
  Animal::species = "Panthera tigris tigris";
  Animal::experience = "ROAR!";
  Animal::berat = 2000;
  Animal::animal_char = 'E';
  SetEnemy('K');
  SetEnemy('c');
  SetEnemy('d');
  SetEnemy('f');
}
