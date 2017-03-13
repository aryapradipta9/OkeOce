#include "hyena.h"

/**	@brief Inisialisasi Hewan
  */
Hyena::Hyena() {
  Animal::species = "Crocuta crocuta";
  Animal::experience = "The hyena stares ferociously";
  Animal::berat = 550;
  Animal::animal_char = 'J';
  SetEnemy('K');
  SetEnemy('c');
  SetEnemy('d');
  SetEnemy('f');
}
