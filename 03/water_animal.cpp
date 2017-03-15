#include "water_animal.h"

/** @brief Inisialisasi Tipe Animal
  */
WaterAnimal::WaterAnimal() : Animal() {
  Animal::type[2] = 1;
}

/** @brief Inisialisasi Famili
  */
Cetacea::Cetacea() : WaterAnimal() {
  Animal::famili = "Cetacea";
}

/** @brief Inisialisasi Famili
  */
Myliobatidae::Myliobatidae() : WaterAnimal() {
  Animal::famili = "Myliobatidae";
}

/** @brief Inisialisasi Hewan
  */
Penguin::Penguin() {
  Animal::species = "Aptenodytes forsteri";
  Animal::experience = "It's Pengy";
  Animal::berat = 350;
  Animal::animal_char = 'k';
}

/** @brief Inisialisasi Famili
  */
Selachimorpha::Selachimorpha() : WaterAnimal() {
  Animal::famili = "Selachimorpha";
}

/** @brief Inisialisasi Famili
  */
Syngnathydae::Syngnathydae() : WaterAnimal() {
  Animal::famili = "Syngnathydae";
}

/** @brief Inisialisasi Famili
  */
Spheniscidae::Spheniscidae() : WaterAnimal() {
  Animal::famili = "Spheniscidae";
}

/** @brief Inisialisasi Hewan
  */
Dolphin::Dolphin() {
  Animal::species = "Delphinus capensis";
  Animal::experience = "click click";
  Animal::berat = 20000;
  Animal::animal_char = 's';
}

/** @brief Inisialisasi Hewan
  */
HammerShark::HammerShark() {
  Animal::species = "Sphyrna mokarran";
  Animal::experience = "It's a Shark with a hammer-like head";
  Animal::berat = 2300;
  Animal::animal_char = 'p';
  SetEnemy('q');
  SetEnemy('s');
}

/** @brief Inisialisasi Hewan
  */
Pari::Pari() {
  Animal::species = "Manta birostris";
  Animal::experience = "Wide Fish";
  Animal::berat = 1600;
  Animal::animal_char = 'q';
}

/** @brief Inisialisasi Hewan
  */
SeaDragon::SeaDragon() {
  Animal::species = "Phycodurus eques";
  Animal::experience = "It's a Dragon but on water";
  Animal::berat = 10;
  Animal::animal_char = 'u';
}

/** @brief Inisialisasi Hewan
  */
SeaHorse::SeaHorse() {
  Animal::species = "Hippocampus mohnikei";
  Animal::experience = "Horselike sea creature";
  Animal::berat = 10;
  Animal::animal_char = 't';
}

/** @brief Inisialisasi Hewan
  */
Whale::Whale() {
  Animal::species = "Balaenoptera musculus";
  Animal::experience = "MASSIVE SEA-CREATURE";
  Animal::berat = 1500000;
  Animal::animal_char = 'r';
}

/** @brief Inisialisasi Hewan
  */
WhiteShark::WhiteShark() {
  Animal::species = "Carcharodon carcharias";
  Animal::experience = "It's a Big Shark";
  Animal::berat = 9000;
  Animal::animal_char = 'o';
  SetEnemy('q');
  SetEnemy('s');
}
