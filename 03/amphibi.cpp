#include "amphibi.h"

/** @brief Inisialisasi Famili
  */
Crocodylidae::Crocodylidae() : WaterAnimal(),LandAnimal() {
  Animal::famili = "Crocodylidae";
}

/** @brief Inisialisasi Famili
  */
Cryptobranchidae::Cryptobranchidae() : WaterAnimal(),LandAnimal() {
  Animal::famili = "Cryptobranchidae";
}

/** @brief Inisialisasi Famili
  */
Hylidae::Hylidae() : WaterAnimal(),LandAnimal() {
  Animal::famili = "Hylidae";
}

/** @brief Inisialisasi Hewan
  */
Crocodile::Crocodile() {
  Animal::species = "Crocodylus porosus";
  Animal::experience = "............................";
  Animal::berat = 7000;
  Animal::animal_char = 'v';
}

/** @brief Inisialisasi Hewan
  */
Salamander::Salamander()
{
  Animal::species = "Adnrias japonicus";
  Animal::experience = "Salamander";
  Animal::berat = 300;
  Animal::animal_char = 'x';
}

/** @brief Inisialisasi Hewan
  */
TreeFrog::TreeFrog() {
  Animal::species = "Litoria caerulea porosus";
  Animal::experience = "croak croak croak";
  Animal::berat = 10;
  Animal::animal_char = 'w';
}
