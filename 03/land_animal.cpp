#include "land_animal.h"

/** @brief Inisialisasi Tipe Animal
  */
LandAnimal::LandAnimal() : Animal() {
  Animal::type[0] = 1;
}

/** @brief Inisialisasi Famili
  */
Bovidae::Bovidae() : LandAnimal() {
  Animal::famili = "Bovidae";
}

/** @brief Inisialisasi Famili
  */
Canidae::Canidae() : LandAnimal()
{
  Animal::famili = "Canidae";
}

/** @brief Inisialisasi Famili
  */
Cercopithecidae::Cercopithecidae() : LandAnimal() {
  Animal::famili = "Cercopithecidae";
}

/** @brief Inisialisasi Famili
  */
Cervidae::Cervidae() : LandAnimal() {
  Animal::famili = "Cervidae";
}

/** @brief Inisialisasi Famili
  */
Elapidae::Elapidae() : LandAnimal() {
  Animal::famili = "Elapidae";
}

/** @brief Inisialisasi Famili
  */
Elephantidae::Elephantidae() : LandAnimal() {
  Animal::famili = "Elephantidae";
}

/** @brief Inisialisasi Famili
  */
Equidae::Equidae() : LandAnimal() {
  Animal::famili = "Equidae";
}

/** @brief Inisialisasi Famili
  */
Felidae::Felidae() : LandAnimal() {
  Animal::famili = "Felidae";
}

/** @brief Inisialisasi Famili
  */
Girrafidae::Girrafidae() : LandAnimal() {
  Animal::famili = "Girrafidae";
}

/** @brief Inisialisasi Famili
  */
Hominidae::Hominidae() : LandAnimal() {
  Animal::famili = "Hominidae";
}

/** @brief Inisialisasi Famili
  */
Hyaenidae::Hyaenidae() : LandAnimal() {
  Animal::famili = "Hyaenidae";
}

/** @brief Inisialisasi Famili
  */
Pythonidae::Pythonidae() : LandAnimal() {
  Animal::famili = "Pythonidae";
}

/** @brief Inisialisasi Famili
  */
Rhinocerotidae::Rhinocerotidae() : LandAnimal() {
  Animal::famili = "Rhinocerotidae";
}

/** @brief Inisialisasi Famili
  */
Ursoidea::Ursoidea() : LandAnimal() {
  Animal::famili = "Ursoidea";
}

/** @brief Inisialisasi Hewan
  */
AfricanElephant::AfricanElephant() {
  Animal::species = "Loxodonta";
  Animal::experience = "This elephant originated from africa";
  Animal::berat = 60000;
  Animal::animal_char = 'z';
}

/** @brief Inisialisasi Hewan
  */
Anoa::Anoa() {
  Animal::species = "Anoa";
  Animal::experience = "The anoa is eating grass";
  Animal::berat = 2200;
  Animal::animal_char = 'K';
}

/** @brief Inisialisasi Hewan
  */
Bear::Bear()
{
  Animal::species = "Ursus arctos";
  Animal::experience = "BROAARGH";
  Animal::berat = 4700;
  Animal::animal_char = 'H';
}

/** @brief Inisialisasi Hewan
  */
CapeCobra::CapeCobra() {
  Animal::species = "Naja nivea";
  Animal::experience = "Hiish!";
  Animal::berat = 50;
  Animal::animal_char = 'Z';
}

/** @brief Inisialisasi Hewan
  */
CarpetPython::CarpetPython() {
  Animal::species = "Morelia spilota";
  Animal::experience = "SSSSSSSSSSSSSSSSSSSSSSSSS";
  Animal::berat = 120;
  Animal::animal_char = 'b';
}

/** @brief Inisialisasi Hewan
  */
Cat::Cat() {
  Animal::species = "Prionailurus viverrinus";
  Animal::experience = "Meow!";
  Animal::berat = 80;
  Animal::animal_char = 'D';
}

/** @brief Inisialisasi Hewan
  */
Chimpanzee::Chimpanzee() {
  Animal::species = "Pan";
  Animal::experience = "Chimpanzee lives on trees";
  Animal::berat = 470;
  Animal::animal_char = 'S';
}

/** @brief Inisialisasi Hewan
  */
Dog::Dog() {
  Animal::species = "Canis lupus familiaris";
  Animal::experience = "Woof!";
  Animal::berat = 500;
  Animal::animal_char = 'A';
}

/** @brief Inisialisasi Hewan
  */
Donkey::Donkey() {
  Animal::species = "Equus africanus asinus";
  Animal::experience = "Hee-haw";
  Animal::berat = 2500;
  Animal::animal_char = 'g';
}

/** @brief Inisialisasi Hewan
  */
Fox::Fox() {
  Animal::species = "Vulpes lagopus";
  Animal::experience = "What does the fox says : Mikoon";
  Animal::berat = 60;
  Animal::animal_char = 'B';
}

/** @brief Inisialisasi Hewan
  */
Girrafe::Girrafe() {
  Animal::species = "Giraffa camelopardalis";
  Animal::experience = "Girrafes live in africa";
  Animal::berat = 12000;
  Animal::animal_char = 'Q';
}

/** @brief Inisialisasi Hewan
  */
Goat::Goat() {
  Animal::species = " Capra aegagrus hircus";
  Animal::experience = "Baaa";
  Animal::berat = 800;
  Animal::animal_char = 'M';
}

/** @brief Inisialisasi Hewan
  */
Gorilla::Gorilla() {
  Animal::species = "Gorilla";
  Animal::experience = "There was a gorilla named Harambe";
  Animal::berat = 1600;
  Animal::animal_char = 'T';
}

/** @brief Inisialisasi Hewan
  */
Horse::Horse() {
  Animal::species = "Equus caballus";
  Animal::experience = "Neiiiiigh!";
  Animal::berat = 6000;
  Animal::animal_char = 'e';
}

/** @brief Inisialisasi Hewan
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

/** @brief Inisialisasi Hewan
  */
IndianPython::IndianPython() {
  Animal::species = "Python molurus";
  Animal::experience = "Hssssssh!";
  Animal::berat = 30;
  Animal::animal_char = 'a';
}

/** @brief Inisialisasi Hewan
  */
KingCobra::KingCobra() {
  Animal::species = "Ophiophagus Hannah";
  Animal::experience = "Hiissss";
  Animal::berat = 60;
  Animal::animal_char = 'W';
}

/** @brief Inisialisasi Hewan
  */
Lion::Lion() {
  Animal::species = "Panthera leo";
  Animal::experience = "ROAAARRR!";
  Animal::berat = 1800;
  Animal::animal_char = 'F';
  SetEnemy('K');
  SetEnemy('c');
  SetEnemy('d');
  SetEnemy('f');
}

/** @brief Inisialisasi Hewan
  */
Mamba::Mamba() {
  Animal::species = "Dendroaspis polylepis";
  Animal::experience = "Hiiiiiissssss";
  Animal::berat = 20;
  Animal::animal_char = 'X';
}

/** @brief Inisialisasi Hewan
  */
Moose::Moose() {
  Animal::species = "Alces alces";
  Animal::experience = "MOOOOOOOOOSE";
  Animal::berat = 5000;
  Animal::animal_char = 'd';
}

/** @brief Inisialisasi Hewan
  */
Okapi::Okapi() {
  Animal::species = "Okapia johnstoni";
  Animal::experience = "Okapi's appearances is half horse and half zebra";
  Animal::berat = 2750;
  Animal::animal_char = 'y';
}

/** @brief Inisialisasi Hewan
  */
Orangutan::Orangutan() {
  Animal::species = "Pongo";
  Animal::experience = "Orangutan originates from borneo island";
  Animal::berat = 700;
  Animal::animal_char = 'U';
}

/** @brief Inisialisasi Hewan
  */
Panda::Panda() {
  Animal::species = "Ailuropoda melanoleuca";
  Animal::experience = "The panda is eating bamboos";
  Animal::berat = 900;
  Animal::animal_char = 'I';
}

/** @brief Inisialisasi Hewan
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

/** @brief Inisialisasi Hewan
  */
Reindeer::Reindeer()
{
  Animal::species = "Rangifer tarandus";
  Animal::experience = "It's a Reindeer";
  Animal::berat = 1700;
  Animal::animal_char = 'c';
}

/** @brief Inisialisasi Hewan
  */
Rhino::Rhino() {
  Animal::species = " Ceratotherium simum";
  Animal::experience = "The rhino have a sharp horn";
  Animal::berat = 23000;
  Animal::animal_char = 'N';
}

/** @brief Inisialisasi Hewan
  */
Sheep::Sheep() {
  Animal::species = "Ovis aries";
  Animal::experience = "Baaaaaaa";
  Animal::berat = 600;
  Animal::animal_char = 'L';
}

/** @brief Inisialisasi Hewan
  */
SquirrelMonkey::SquirrelMonkey() {
  Animal::species = "Saimiri sciureus";
  Animal::experience = "Squirrel monkey is a type of monkey that is very small";
  Animal::berat = 10;
  Animal::animal_char = 'V';
}

/** @brief Inisialisasi Hewan
  */
SumatraElephant::SumatraElephant() {
  Animal::species = "Elephas maximus sumatrensis";
  Animal::experience = "This elephant originated from sumatra";
  Animal::berat = 30000;
  Animal::animal_char = 'O';
}

/**  @brief Inisialisasi Hewan
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

/** @brief Inisialisasi Hewan
  */
TigerSnake::TigerSnake() {
  Animal::species = "Notechis scutatus";
  Animal::experience = "A type of small snakes";
  Animal::berat = 10;
  Animal::animal_char = 'Y';
}

/** @brief Inisialisasi Hewan
  */
Wolf::Wolf() {
  Animal::species = "Canis lupus arctos";
  Animal::experience = "Howl!";
  Animal::berat = 500;
  Animal::animal_char = 'C';
}
/** @brief Inisialisasi Hewan
  */

Zebra::Zebra() {
  Animal::species = "Equus quagga";
  Animal::experience = "Its like a horse but black and white";
  Animal::berat = 3500;
  Animal::animal_char = 'f';
}
