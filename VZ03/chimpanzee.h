#ifndef CHIMPANZEE_H
#define CHIMPANZEE_H
#include "hominidae.h"
#include "herbivora.h"

class Chimpanzee : public Hominidae, public Herbivora {
public:
  /** @brief Inisialisasi Hewan
    */
	Chimpanzee();
};
#endif
