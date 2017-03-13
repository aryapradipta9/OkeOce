#include "hammer_shark.h"

/**	@brief Inisialisasi Hewan
  */
HammerShark::HammerShark() {
  Animal::species = "Sphyrna mokarran";
  Animal::experience = "It's a Shark with a hammer-like head";
  Animal::berat = 2300;
  Animal::animal_char = 'p';
  SetEnemy('q');
  SetEnemy('s');
}
