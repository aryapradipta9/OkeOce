#include "air_animal.h"

/** @brief Inisialisasi Tipe Animal
  */
AirAnimal::AirAnimal() : Animal() {
  Animal::type[1] = 1;
}

/** @brief Inisialisasi Famili
  */
Accipitridae::Accipitridae() : AirAnimal() {
  Animal::famili = "Accipitridae";
}

/** @brief Inisialisasi Famili
  */
Passeridae::Passeridae() : AirAnimal() {
  Animal::famili = "Passeridae";
}

/** @brief Inisialisasi Famili
  */
Phasianidae::Phasianidae() : AirAnimal() {
  Animal::famili = "Phasianidae";
}

/** @brief Inisialisasi Famili
  */
Psittacifurmes::Psittacifurmes() : AirAnimal() {
  Animal::famili = "Psittacifurmes";
}

/** @brief Inisialisasi Hewan
  */
BeoNias::BeoNias() {
  Animal::species = "Gracula robusta";
  Animal::experience = "It can speak";
  Animal::berat = 10;
  Animal::animal_char = 'h';
}

/** @brief Inisialisasi Hewan
  */
BurungGereja::BurungGereja() {
  Animal::species = "Passer montanus";
  Animal::experience = "Chirp Chirp Chirp";
  Animal::berat = 1;
  Animal::animal_char = 'n';
}

/** @brief Inisialisasi Hewan
  */
Eagle::Eagle() {
  Animal::species = "Aquila chrysaetos";
  Animal::experience = "screeech!";
  Animal::berat = 60;
  Animal::animal_char = 'j';
  SetEnemy('Y');
  SetEnemy('X');
}

/** @brief Inisialisasi Hewan
  */
Kakatua::Kakatua() {
  Animal::species = "Calyptorhynchus lathami";
  Animal::experience = "It can talk??";
  Animal::berat = 4;
  Animal::animal_char = 'i';
}

/** @brief Inisialisasi Hewan
  */
Merak::Merak() {
  Animal::species = "Afropavo congensis";
  Animal::experience = "Rainbow Bird";
  Animal::berat = 50;
  Animal::animal_char = 'l';
}

/** @brief Inisialisasi Hewan
  */
Pegar::Pegar() {
  Animal::species = "Ithaginis cruentus";
  Animal::experience = "ChipChip";
  Animal::berat = 6;
  Animal::animal_char = 'm';
}
