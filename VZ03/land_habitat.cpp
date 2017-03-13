#include "land_habitat.h"

/** @brief constructor
  * @param pos_x posisi x
  * @param pos_y posisi y
  */
LandHabitat::LandHabitat(int pos_x, int pos_y) : Habitat(pos_x,pos_y) {
	Habitat::habitat_type = 1;
}
/**	@brief Destructor
  */
LandHabitat::~LandHabitat() {}
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
void LandHabitat::Render(char** cc) {
  cc[Point::y][Point::x] = '*';
}
