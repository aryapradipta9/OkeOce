#include "white_shark.h"

/**	@brief Inisialisasi Hewan
  */
WhiteShark::WhiteShark() {
  Animal::species = "Carcharodon carcharias";
  Animal::experience = "It's a Big Shark";
  Animal::berat = 9000;
  Animal::animal_char = 'o';
  SetEnemy('q');
  SetEnemy('s');
}
