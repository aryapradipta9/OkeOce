#ifndef TIGERSNAKE_H
#define TIGERSNAKE_H
#include "elapidae.h"
#include "karnivora.h"

class TigerSnake : public Elapidae, public Karnivora
{
public:
	/**	@brief Inisialisasi Hewan
	  */
	TigerSnake();
};
#endif
