#ifndef AIRANIMAL_H
#define AIRANIMAL_H
#include "animal.h"

class AirAnimal : virtual public Animal
{
public:
	/** @brief Inisialisasi Tipe AirAnimal
	  */
	AirAnimal();
};

class Accipitridae : virtual public AirAnimal
{
public:
	/**	@brief Inisialisasi Famili
	  */
	Accipitridae();
};

class Psittacifurmes : virtual public AirAnimal
{
public:
	/**	@brief Inisialisasi Famili
	  */
	Psittacifurmes();
};

class Kakatua : public Psittacifurmes, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Kakatua();
};

class Eagle : public Accipitridae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	Eagle();
};

class BeoNias : public Psittacifurmes, public Herbivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	BeoNias();
};
#endif
