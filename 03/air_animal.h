#ifndef AIR_ANIMAL_H
#define AIR_ANIMAL_H
#include "animal.h"
#include "herbivora.h"
#include "karnivora.h"
#include "omnivora.h"

class AirAnimal : virtual public Animal {
public:
  /** @brief Inisialisasi Tipe Animal
    */
  AirAnimal();
};

class Accipitridae : virtual public AirAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Accipitridae();
};

class Passeridae : virtual public AirAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Passeridae();
};

class Phasianidae : virtual public AirAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Phasianidae();
};

class Psittacifurmes : virtual public AirAnimal {
public:
  /** @brief Inisialisasi Famili
    */
  Psittacifurmes();
};

class BeoNias : public Psittacifurmes, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  BeoNias();
};

class BurungGereja : public Passeridae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  BurungGereja();
};

class Eagle : public Accipitridae, public Karnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Eagle();
};

class Kakatua : public Psittacifurmes, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Kakatua();
};

class Merak : public Phasianidae, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Merak();
};

class Pegar : public Phasianidae, public Omnivora {
public:
  /** @brief Inisialisasi Hewan
    */
  Pegar();
};

#endif
