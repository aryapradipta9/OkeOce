#include "air_animal.h"

/** @brief Inisialisasi Tipe Animal
  */
AirAnimal::AirAnimal() : Animal()
{
	Animal::Type[1] = 1;
}

Accipitridae::Accipitridae() : AirAnimal()
{
	Animal::Famili = "Accipitridae";
}

Psittacifurmes::Psittacifurmes() : AirAnimal()
{
	Animal::Famili = "Psittacifurmes";
}

Kakatua::Kakatua()
{
	Animal::Species = "Calyptorhynchus lathami";
	Animal::Experience = "It can talk??";
	Animal::Berat = 4;
	Animal::AniChar = 'i';
}

Eagle::Eagle()
{
	Animal::Species = "Aquila chrysaetos";
	Animal::Experience = "screeech!";
	Animal::Berat = 60;
	Animal::AniChar = 'j';
	SetEnemy('Y');
	SetEnemy('X');
}

BeoNias::BeoNias()
{
	Animal::Species = "Gracula robusta";
	Animal::Experience = "It can speak";
	Animal::Berat = 10;
	Animal::AniChar = 'h';
}
